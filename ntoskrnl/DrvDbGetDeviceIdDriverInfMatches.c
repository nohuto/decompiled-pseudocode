__int64 __fastcall DrvDbGetDeviceIdDriverInfMatches(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  _DWORD *v6; // r13
  __int64 v7; // r15
  int InfoKey; // ebx
  unsigned int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  wchar_t *Pool2; // rsi
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // edi
  unsigned int v19; // r15d
  __int64 v20; // rax
  int v22; // [rsp+40h] [rbp-18h] BYREF
  int v23; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-Ch]
  unsigned int v26; // [rsp+A0h] [rbp+48h] BYREF
  int v27; // [rsp+A4h] [rbp+4Ch]
  __int64 v28; // [rsp+A8h] [rbp+50h]
  __int64 v29; // [rsp+B0h] [rbp+58h]
  unsigned int v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v27 = HIDWORD(a1);
  v6 = a5;
  v7 = a3;
  v24 = 0;
  v26 = 0;
  v23 = 0;
  v22 = 0;
  v25 = 0;
  *a5 = 0;
  InfoKey = PnpCtxRegQueryInfoKey((unsigned int)&v24, a2, 0, 0, (__int64)&v24, (__int64)&v26, 0LL);
  if ( InfoKey < 0 )
    return (unsigned int)InfoKey;
  v9 = v24;
  v10 = v26 + 1;
  if ( !v24 )
    return (unsigned int)-1073741275;
  v11 = v26 + 1;
  if ( a6 )
  {
    v11 = v26 + 17;
    v10 = v26 + 17;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v11, 1111770192LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v14 = 0;
  if ( !v9 )
    goto LABEL_22;
  while ( 1 )
  {
    v26 = v10;
    if ( a6 )
    {
      LODWORD(a5) = 4;
      v15 = PnpCtxRegEnumValue(v12, v28, v14, Pool2, &v26, &v23, &v22, &a5);
      InfoKey = v15;
      if ( v15 < 0 )
        break;
      if ( !v26 )
      {
LABEL_36:
        InfoKey = -1073741595;
        goto LABEL_26;
      }
      if ( v23 == 3 )
      {
        if ( (_DWORD)a5 != 4 )
          goto LABEL_36;
      }
      else
      {
        v22 = 0;
      }
      InfoKey = DrvDbBuildDeviceIdDriverInfMatch(v16, &v22, &Pool2[v26], v10 - v26);
      if ( InfoKey < 0 )
        goto LABEL_26;
      v17 = -1LL;
      do
        ++v17;
      while ( Pool2[v17] );
      v18 = v17 + 1;
      goto LABEL_16;
    }
    v15 = PnpCtxRegEnumValue(v12, v28, v14, Pool2, &v26, &v23, 0LL, 0LL);
    InfoKey = v15;
    if ( v15 < 0 )
      break;
    v12 = v26;
    if ( !v26 )
      goto LABEL_36;
    Pool2[v26] = 0;
    v18 = v12 + 1;
LABEL_16:
    if ( v7 )
    {
      v12 = v25;
      v19 = v18 + v25;
      if ( v18 + v25 < v30 )
      {
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v29 + 2LL * v25), v30 - v25, Pool2, 0LL, 0LL, 0x900u);
        v25 = v19;
      }
      v7 = v29;
    }
    *v6 += v18;
    if ( ++v14 >= v24 )
      goto LABEL_21;
  }
  if ( v15 != -2147483622 )
    goto LABEL_26;
  InfoKey = 0;
LABEL_21:
  if ( InfoKey < 0 )
    goto LABEL_26;
LABEL_22:
  v20 = (unsigned int)*v6;
  if ( (_DWORD)v20 )
  {
    *v6 = v20 + 1;
    if ( v7 && (int)v20 + 1 <= v30 )
      *(_WORD *)(v7 + 2 * v20) = 0;
    else
      InfoKey = -1073741789;
  }
  else
  {
    InfoKey = -1073741275;
  }
LABEL_26:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)InfoKey;
}
