/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1C02148C0
 * Callers:
 *     DpiGetMonitorColorimetryOverride @ 0x1C02147C4 (DpiGetMonitorColorimetryOverride.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C0399218 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     _lambda_257d7c3e5d4eac318129c4c4e210f286_::operator() @ 0x1C005E66C (_lambda_257d7c3e5d4eac318129c4c4e210f286_--operator().c)
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(__int64 a1)
{
  _BYTE *v1; // rax
  unsigned __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int *v7; // r10
  int v8; // r11d
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-18h]

  v1 = (_BYTE *)a1;
  v3 = a1 + 52;
  if ( (unsigned __int64)v1 >= v3 )
  {
LABEL_4:
    if ( v1 )
      return 279LL;
  }
  else
  {
    while ( !*v1 )
    {
      if ( (unsigned __int64)++v1 >= v3 )
        goto LABEL_4;
    }
  }
  if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v3, *(_QWORD *)(a1 + 24)) )
  {
    v9 = v7[7];
    v24 = 1LL;
LABEL_9:
    v5 = (unsigned int)v5;
LABEL_11:
    WdLogSingleEntry4(2LL, v5, v9, v6, v24);
    return 3221225485LL;
  }
  v10 = v7[9];
  if ( !v10 || (v11 = v7[10]) == 0 || v11 > v10 || (v12 = v7[8], v12 >= v10) || v12 >= v11 )
  {
    v18 = 2LL;
    goto LABEL_42;
  }
  v13 = v7[11];
  v14 = (int)(v7[11] << 30) >> 30;
  if ( v14 )
  {
    v15 = v6;
    v16 = v14;
    v17 = 3LL;
    goto LABEL_21;
  }
  if ( !(_DWORD)v13 )
  {
    v18 = 4LL;
LABEL_42:
    WdLogSingleEntry2(2LL, v6, v18);
    return 3221225485LL;
  }
  if ( (((unsigned __int8)v13 | (unsigned __int8)(((unsigned int)v13 | ((unsigned int)v13 >> 6)) >> 6)) & 0xFCu) >= 4
    || (v13 & 0x3F00000) != 0 )
  {
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v13, *(_QWORD *)v7) )
    {
      v9 = *(unsigned int *)(v20 + 4);
      v24 = 6LL;
      goto LABEL_9;
    }
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v19, *(_QWORD *)(v20 + 8)) )
    {
      v9 = *(unsigned int *)(v22 + 12);
      v24 = 7LL;
      goto LABEL_9;
    }
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v21, *(_QWORD *)(v22 + 16)) )
    {
      v9 = v7[5];
      v24 = 8LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *v7 || v7[1] != v8 )
    {
      v9 = v7[1];
      v5 = *v7;
      v24 = 9LL;
      goto LABEL_11;
    }
    if ( v7[2] || v7[3] != v8 )
    {
      WdLogSingleEntry4(2LL, v7[2], v7[3], v6, 10LL);
      return 3221225485LL;
    }
    if ( v7[4] || v7[5] != v8 )
    {
      WdLogSingleEntry4(2LL, v7[4], v7[5], v6, 11LL);
      return 3221225485LL;
    }
  }
  v23 = v7[12];
  if ( (unsigned int)v23 < 8 )
    return 0LL;
  v15 = v6;
  v16 = v23 >> 3;
  v17 = 5LL;
LABEL_21:
  WdLogSingleEntry3(2LL, v16, v15, v17);
  return 3221225485LL;
}
