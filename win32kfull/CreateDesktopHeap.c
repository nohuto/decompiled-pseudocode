PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v4; // rdi
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 Heap; // rax
  ULONG v10; // eax
  ULONG v11; // eax
  ULONG_PTR v12; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  Section = 0LL;
  v4 = a2 + 4096LL;
  v12 = v4;
  v6 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v12);
  if ( v6 < 0 )
  {
    v10 = RtlNtStatusToDosError(v6);
    UserSetLastError(v10);
  }
  else
  {
    MappedBase = 0LL;
    ViewSize = v4;
    v7 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v7 < 0 )
    {
      v11 = RtlNtStatusToDosError(v7);
      UserSetLastError(v11);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, a2, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
