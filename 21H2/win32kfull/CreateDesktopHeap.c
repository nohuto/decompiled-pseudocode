/*
 * XREFs of CreateDesktopHeap @ 0x1C0111C58
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C011190C (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C0111D10 (Win32CreateSection.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v4; // rdi
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 Heap; // rax
  __int64 v9; // rdx
  ULONG v11; // eax
  __int64 v12; // rdx
  ULONG v13; // eax
  __int64 v14; // rdx
  ULONG_PTR v15; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  Section = 0LL;
  v4 = a2 + 4096LL;
  v15 = v4;
  v6 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v15);
  if ( v6 < 0 )
  {
    v11 = RtlNtStatusToDosError(v6);
    UserSetLastError(v11, v12);
  }
  else
  {
    MappedBase = 0LL;
    ViewSize = v4;
    v7 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v7 < 0 )
    {
      v13 = RtlNtStatusToDosError(v7);
      UserSetLastError(v13, v14);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, a2, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8LL, v9);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
