/*
 * XREFs of HUBPDO_InitializeInterfaceInformation @ 0x1C0016D14
 * Callers:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0016F68 (HUBPDO_ValidateSelectInterfaceUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall HUBPDO_InitializeInterfaceInformation(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  char v3; // bp
  char v4; // r15
  unsigned __int8 *v5; // r8
  unsigned int v8; // r14d
  unsigned __int8 *v9; // rdx
  int v10; // edi
  unsigned int v11; // r10d
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // r9
  __int64 v17; // rcx
  unsigned __int8 *v18; // rsi
  unsigned __int8 v19; // r8
  __int64 v20; // rcx
  __int64 result; // rax
  char *v22; // rdi
  __int64 v23; // r15
  int v24; // edx
  __int64 v25; // [rsp+28h] [rbp-40h]

  v3 = *((_BYTE *)a2 + 3);
  v4 = *((_BYTE *)a2 + 2);
  v5 = (unsigned __int8 *)(a3 + 32);
  LOWORD(v8) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = *v5;
  if ( (unsigned __int8)v12 < 9u )
    goto LABEL_36;
  if ( v5[1] != 2 )
    goto LABEL_36;
  v13 = *((unsigned __int16 *)v5 + 1);
  if ( (unsigned int)v13 < 9 )
    goto LABEL_36;
  v14 = (unsigned __int64)&v5[v13];
  v15 = &v5[v12];
  v16 = &v5[v12 + 2];
  if ( (unsigned __int64)v16 > v14 )
    goto LABEL_36;
  do
  {
    v17 = *v15;
    v18 = &v15[v17];
    if ( (unsigned __int64)&v15[v17] > v14 || !(_BYTE)v17 )
      break;
    v19 = v15[1];
    if ( v19 == 4 )
    {
      if ( (unsigned __int8)v17 >= 9u )
      {
        if ( *v16 == v4 )
        {
          ++v10;
          if ( v9 )
            goto LABEL_21;
          if ( v15[3] == v3 )
            v9 = v15;
        }
        else if ( v10 )
        {
          break;
        }
      }
    }
    else if ( v19 == 5 && v9 )
    {
      if ( (unsigned __int8)v17 < 7u )
        goto LABEL_36;
      ++v11;
    }
    v16 = v18 + 2;
    v15 += v17;
  }
  while ( (unsigned __int64)(v18 + 2) <= v14 );
  if ( !v9 )
    goto LABEL_36;
LABEL_21:
  if ( v9[4] <= v11 )
  {
    v20 = v9[4];
    v8 = 24 * (v20 + 1);
    if ( *a2 >= v8 )
    {
      *((_DWORD *)a2 + 1) = 0;
      result = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      *((_DWORD *)a2 + 4) = v20;
      if ( (_DWORD)v20 )
      {
        v22 = (char *)a2 + 27;
        v23 = v20;
        do
        {
          v24 = *(_DWORD *)(v22 + 17);
          *(_WORD *)(v22 - 1) = 0;
          *(_DWORD *)(v22 + 1) = 0;
          *(_QWORD *)(v22 + 5) = 0LL;
          if ( (v24 & 0xFFFFFEC0) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v25) = v24;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0x23u,
                (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
                v25);
              v24 = *(_DWORD *)(v22 + 17);
            }
            result = 3221245952LL;
          }
          if ( (v24 & 1) == 0 )
            *(_WORD *)(v22 - 3) = 0;
          v22 += 24;
          --v23;
        }
        while ( v23 );
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
          3u,
          5u,
          0x22u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          *a2,
          24 * (v20 + 1));
      result = 3221237760LL;
    }
  }
  else
  {
LABEL_36:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        2u,
        5u,
        0x21u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    result = 3221241856LL;
  }
  *a2 = v8;
  return result;
}
