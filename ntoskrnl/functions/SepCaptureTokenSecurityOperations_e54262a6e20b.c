NTSTATUS __fastcall SepCaptureTokenSecurityOperations(_DWORD *a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v5; // esi
  unsigned int v7; // ebx
  NTSTATUS result; // eax
  __int64 v9; // rcx
  void *Pool2; // rdx
  PVOID P[2]; // [rsp+28h] [rbp-10h] BYREF

  v5 = a2;
  v7 = 0;
  P[0] = 0LL;
  if ( !a3 )
  {
    *a4 = a1;
    return 0;
  }
  if ( *a1 == 1 )
  {
    v9 = 4LL;
    P[0] = (PVOID)4;
    v5 = 1;
  }
  else
  {
    if ( !a2 )
      return -1073741811;
    result = RtlULongLongMult(4uLL, a2, (ULONGLONG *)P);
    if ( result < 0 )
      return result;
    v9 = (__int64)P[0];
  }
  if ( v9 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v9 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a1 + v9) < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, v9, 1884251475LL);
  P[0] = Pool2;
  if ( Pool2 )
  {
    while ( v7 < v5 )
    {
      *((_DWORD *)Pool2 + v7) = a1[v7];
      ++v7;
    }
    *a4 = Pool2;
    return 0;
  }
  return -1073741801;
}
