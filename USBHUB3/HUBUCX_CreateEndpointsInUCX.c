__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 a1)
{
  int v1; // edi
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, __int64); // r12
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *i; // rax
  __int64 j; // rbp
  __int64 v20; // r8
  _QWORD *v21; // rsi
  __int64 v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]
  __int64 v26; // [rsp+A0h] [rbp+18h]
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v24 = 0;
  v1 = 0;
  v3 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x26u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
    return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = *(_QWORD *)(a1 + 48);
  v26 = *(_QWORD *)(a1 + 104);
  v5 = *(_QWORD *)(a1 + 136);
  v6 = (_QWORD *)(v4 + 16);
  v27 = v4;
  v7 = *(_QWORD **)(v4 + 16);
  v25 = v5;
  while ( 1 )
  {
    v8 = (__int64)(v7 - 1);
    if ( v6 == v7 )
      goto LABEL_28;
    v9 = 0LL;
    if ( *(_DWORD *)(v8 + 24) )
      break;
LABEL_24:
    v7 = *(_QWORD **)(v8 + 8);
  }
  while ( 1 )
  {
    v10 = v8 + 72 * v9 + 40;
    if ( *(_DWORD *)(v10 + 8) == 1 )
      break;
LABEL_23:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 24) )
      goto LABEL_24;
  }
  v11 = *(_QWORD *)(v10 + 48);
  v12 = *(unsigned int *)(v10 + 40);
  v13 = *(_QWORD *)(v10 + 32);
  *(_DWORD *)(v10 + 8) = 2;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(v3 + 448))(
         *(_QWORD *)(v3 + 248),
         *(_QWORD *)(a1 + 24),
         v13,
         v12,
         v11,
         v8 + 72 * v9 + 40);
  if ( v1 >= 0 )
  {
    v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 592);
    if ( !v14 )
      goto LABEL_20;
    v15 = *(unsigned int *)(v10 + 64);
    if ( (_DWORD)v15 )
      goto LABEL_18;
    if ( (int)HUBUCX_GetEndpointPriority(a1, v8, v8 + 72 * v9 + 40, &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 1:
          v15 = 1LL;
          goto LABEL_18;
        case 2:
          v15 = 2LL;
          goto LABEL_18;
        case 3:
          v15 = 3LL;
LABEL_18:
          v14(*(_QWORD *)(v3 + 248), *(_QWORD *)(a1 + 24), *(_QWORD *)v10, v15);
          break;
      }
    }
    v1 = 0;
LABEL_20:
    v16 = *(_QWORD *)v10;
    if ( (*(_DWORD *)(v10 + 12) & 1) != 0 )
    {
      v17 = v25;
      *(_DWORD *)(v10 + 8) = 6;
      *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v16;
    }
    else
    {
      *(_QWORD *)(v26 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v16;
    }
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x27u,
      (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
      v23);
  }
  *(_DWORD *)(v10 + 8) = 1;
LABEL_28:
  if ( v27 )
  {
    for ( i = (_QWORD *)*v6; ; i = (_QWORD *)v21[1] )
    {
      v21 = i - 1;
      if ( v6 == i )
        break;
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)v21 + 6); j = (unsigned int)(j + 1) )
      {
        if ( LODWORD(v21[9 * j + 6]) == 2 )
        {
          if ( v1 >= 0 )
          {
            LODWORD(v21[9 * j + 6]) = 3;
          }
          else
          {
            v20 = v21[9 * j + 5];
            LODWORD(v21[9 * j + 6]) = 1;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v3 + 456))(
              *(_QWORD *)(v3 + 248),
              *(_QWORD *)(a1 + 24),
              v20);
          }
        }
      }
    }
  }
  if ( v1 < 0 )
  {
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 1564) = -1073737728;
    *(_DWORD *)(a1 + 1560) = -1073741670;
  }
  return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
}
