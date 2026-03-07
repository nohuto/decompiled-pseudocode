__int64 __fastcall AllocateKernelSection(int a1, __int64 a2, void **a3)
{
  int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-40h]
  _DWORD v7[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+80h] [rbp+20h] BYREF
  PVOID MappedBase; // [rsp+88h] [rbp+28h] BYREF

  MappedBase = 0LL;
  *a3 = 0LL;
  v7[1] = 0;
  Section = 0LL;
  v7[0] = a1 + 16;
  v4 = Win32CreateSection(&Section, 6LL, (__int64)a3, (__int64)v7, v6, 138412032);
  if ( v4 >= 0 )
  {
    ViewSize = 0LL;
    v4 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      *((_DWORD *)MappedBase + 2) = 1835166535;
      *(_QWORD *)MappedBase = Section;
      *a3 = (char *)MappedBase + 16;
    }
    else
    {
      ObfDereferenceObject(Section);
    }
  }
  return (unsigned int)v4;
}
