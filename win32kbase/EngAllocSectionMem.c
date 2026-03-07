PVOID __fastcall EngAllocSectionMem(PVOID *a1, char a2, __int64 a3)
{
  PVOID v5; // rcx
  PVOID result; // rax
  __int64 v7; // [rsp+20h] [rbp-58h]
  PVOID MappedBase; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize[3]; // [rsp+60h] [rbp-18h] BYREF

  ViewSize[0] = 0LL;
  if ( !(_DWORD)a3 )
    return 0LL;
  v9[1] = 0;
  v9[0] = a3;
  if ( (int)Win32CreateSection(a1, 983071LL, a3, (__int64)v9, v7, 0x8000000) < 0 )
    return 0LL;
  v5 = *a1;
  MappedBase = 0LL;
  if ( MmMapViewInSessionSpace(v5, &MappedBase, ViewSize) >= 0 )
  {
    result = MappedBase;
  }
  else
  {
    ObfDereferenceObject(*a1);
    result = 0LL;
    *a1 = 0LL;
    MappedBase = 0LL;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( result )
    {
      memset(result, 0, LODWORD(ViewSize[0]));
      return MappedBase;
    }
  }
  return result;
}
