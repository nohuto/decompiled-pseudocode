__int64 __fastcall MincrypK_ParseCertificateChainWithPolicy2(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 Pool2; // rax
  char *v8; // rdi
  int v9; // ebx
  char *v10; // rsi
  int v11; // ebx
  unsigned int v12; // r14d
  bool v13; // zf
  unsigned int v14; // r12d
  char *v15; // r13
  unsigned int v16; // eax
  char *v18; // [rsp+58h] [rbp-30h]
  unsigned int v20; // [rsp+A8h] [rbp+20h] BYREF
  int v21; // [rsp+ACh] [rbp+24h]

  v21 = HIDWORD(a4);
  v4 = a3;
  v20 = 10;
  Pool2 = ExAllocatePool2(258LL, 2400LL, 1919109443LL);
  v8 = (char *)Pool2;
  if ( Pool2 )
  {
    if ( (int)MinAsn1ExtractParsedCertificatesFromSignedData(a1, a2, &v20, Pool2) >= 0 && v20 )
    {
      v10 = v8;
      v11 = (-1 << v20) | 1;
      do
      {
        v12 = ~v11;
        v18 = v10;
        while ( 1 )
        {
          v13 = !_BitScanForward(&v14, v12);
          if ( v13 || v14 >= v20 )
            break;
          v12 &= ~(1 << v14);
          v15 = &v8[240 * v14];
          v16 = *((_DWORD *)v15 + 28);
          if ( *((_DWORD *)v10 + 40) == v16 && !memcmp(*((const void **)v10 + 21), *((const void **)v15 + 15), v16) )
          {
            v10 = &v8[240 * v14];
            v11 |= 1 << v14;
            break;
          }
        }
      }
      while ( v18 != v10 );
      v9 = MinCryptVerifyCertificateWithPolicy2((_DWORD)v10, v20, (_DWORD)v8, 0, a3, 0);
      v4 = a3;
    }
    else
    {
      v9 = -1073741811;
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v9 < 0 )
    v9 = I_MinCryptBuildErrorPolicy((unsigned int)v9, v4, 0x10000LL);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72634943u);
  return (unsigned int)v9;
}
