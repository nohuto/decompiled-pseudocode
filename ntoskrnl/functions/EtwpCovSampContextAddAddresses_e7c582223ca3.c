__int64 __fastcall EtwpCovSampContextAddAddresses(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  __int64 v7; // rdi
  unsigned int i; // ebx
  int v9; // r8d
  int v10; // r14d
  int v11; // eax
  int v13; // [rsp+40h] [rbp-258h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-250h]
  _BYTE v15[512]; // [rsp+50h] [rbp-248h] BYREF

  v13 = 0;
  v4 = 0;
  v14 = a3;
  if ( *a3 < 0xFFFF800000000000uLL )
  {
    v7 = *(_QWORD *)(a2 + 2544);
    if ( !v7 )
      return v4;
  }
  else
  {
    LODWORD(v7) = BugCheckParameter2 + 1264;
  }
  for ( i = 0; i < a4; i += v10 )
  {
    v9 = (_DWORD)a3 + 8 * i;
    v10 = 64;
    if ( a4 - i < 0x40 )
      v10 = a4 - i;
    EtwpCovSampProcessMapAddresses(v7, BugCheckParameter2 + 16, v9, v10, (__int64)v15, 64, (__int64)&v13);
    if ( v13 )
    {
      v11 = EtwpCovSampContextAddSamples(BugCheckParameter2);
      v4 += v11;
      if ( v11 != v13 )
        break;
    }
    LODWORD(a3) = (_DWORD)v14;
  }
  return v4;
}
