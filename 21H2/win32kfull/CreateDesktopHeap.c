/*
 * XREFs of CreateDesktopHeap @ 0x1C0123138
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0122DF0 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C01231F0 (Win32CreateSection.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v4; // rdi
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 Heap; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  ULONG_PTR v18; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  Section = 0LL;
  v4 = a2 + 4096LL;
  v18 = v4;
  v6 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v18);
  if ( v6 < 0 )
  {
    v12 = RtlNtStatusToDosError(v6);
    UserSetLastError(v12, v13, v14);
  }
  else
  {
    MappedBase = 0LL;
    ViewSize = v4;
    v7 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v7 < 0 )
    {
      v15 = RtlNtStatusToDosError(v7);
      UserSetLastError(v15, v16, v17);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, a2, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8LL, v9, v10);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
