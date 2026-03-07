__int64 __fastcall AlpcpValidateAndSetPortAttributes(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rcx
  _QWORD v18[10]; // [rsp+30h] [rbp-31h] BYREF

  memset(v18, 0, 0x48uLL);
  if ( a2 )
  {
    v12 = a2[2];
    if ( v12 < 0x28 || v12 > 0xFFFF || (*(_DWORD *)a2 & 0x100000) != 0 && KeGetCurrentThread()->PreviousMode )
      return 3221225485LL;
    v11 = *(_DWORD *)a2 & 0x3FF0000;
    *((_DWORD *)a2 + 16) &= 0xFFDu;
    *(_DWORD *)a2 = v11;
  }
  else
  {
    v18[4] = 0x4000LL;
    a2 = v18;
    v18[5] = 0x4000LL;
    HIDWORD(v18[1]) = 257;
    v15 = v18[0];
    if ( a7 )
      v15 = 4096;
    LODWORD(v18[0]) = v15;
    v18[2] = 512LL;
    v18[7] = 0x20000LL;
    v18[6] = 0LL;
    v18[3] = 0LL;
    *(_QWORD *)((char *)v18 + 4) = 12LL;
    LODWORD(v18[8]) = 0;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v16 = *(_DWORD *)a2 | 0x20000;
    *(_DWORD *)a2 = v16;
    if ( !a7 )
      goto LABEL_9;
    v17 = a5;
    if ( a5 <= LpcLegacyMaxMessageLength )
    {
      if ( a6 )
        *(_DWORD *)a2 = v16 | 0x40000;
LABEL_29:
      a2[2] = v17;
      goto LABEL_9;
    }
    return 3221225485LL;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 2 )
  {
    *(_DWORD *)a2 &= ~0x20000u;
    if ( !a7 )
      goto LABEL_9;
    v17 = *(_QWORD *)(a3 + 272);
    if ( v17 <= (unsigned int)LpcLegacyMaxMessageLength )
      goto LABEL_29;
    return 3221225485LL;
  }
  if ( a2 == v18 )
    *(_DWORD *)a2 |= 0x10000u;
  if ( a7 )
  {
    *(_DWORD *)a2 |= 0x20000u;
    if ( a4 )
    {
      *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)a4;
      *((_DWORD *)a2 + 3) = *(_DWORD *)(a4 + 8);
    }
    v14 = *(_QWORD *)(a3 + 272);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 272);
    if ( a2[2] <= v14 )
      goto LABEL_9;
  }
  a2[2] = v14;
LABEL_9:
  result = SeValidateSecurityQos((char *)a2 + 4, v11, 0LL, 0x20000LL);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)(a1 + 256) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 272) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 288) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(a1 + 304) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(a1 + 320) = a2[8];
  }
  return result;
}
