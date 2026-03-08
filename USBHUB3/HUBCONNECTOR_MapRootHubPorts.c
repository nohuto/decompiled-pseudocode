/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1C0082524
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C0082A18 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C0081CF0 (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // r8
  _QWORD **v2; // rdi
  _QWORD *i; // rax
  _QWORD *v4; // rdx
  unsigned __int16 j; // r8
  _QWORD *k; // rax
  _QWORD *v7; // rdx
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // r13
  _QWORD *m; // rax
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *ii; // rax
  __int64 v16; // r14
  _QWORD *n; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]

  v1 = *(_WORD *)(a1 + 146);
  v2 = (_QWORD **)(a1 + 2360);
  while ( v1 <= *(_WORD *)(a1 + 148) )
  {
    for ( i = *v2; ; i = (_QWORD *)*i )
    {
      v4 = i - 31;
      if ( v2 == i )
        break;
      if ( *((_WORD *)v4 + 100) == v1 )
      {
        if ( i != (_QWORD *)248 )
        {
          *((_DWORD *)v4 + 342) = 1;
          *((_DWORD *)v4 + 343) = *(_DWORD *)(a1 + 96);
          *((_DWORD *)v4 + 348) = v1;
          *((_WORD *)v4 + 694) = 0;
        }
        break;
      }
    }
    ++v1;
  }
  for ( j = *(_WORD *)(a1 + 152); ; ++j )
  {
    v8 = *(_WORD *)(a1 + 154);
    if ( j > v8 )
      break;
    for ( k = *v2; ; k = (_QWORD *)*k )
    {
      v7 = k - 31;
      if ( v2 == k )
        break;
      if ( *((_WORD *)v7 + 100) == j )
      {
        if ( k != (_QWORD *)248 )
        {
          *((_DWORD *)v7 + 342) = 1;
          *((_DWORD *)v7 + 343) = *(_DWORD *)(a1 + 96);
          *((_DWORD *)v7 + 348) = j;
          *((_WORD *)v7 + 694) = 0;
        }
        break;
      }
    }
  }
  v9 = *(_WORD *)(a1 + 152);
  v10 = *(_WORD *)(a1 + 146);
  v11 = *(_WORD *)(a1 + 148);
  if ( v9 <= v8 )
  {
    while ( v10 <= v11 )
    {
      for ( m = *v2; ; m = (_QWORD *)*m )
      {
        v13 = (__int64)(m - 31);
        if ( v2 == m )
          break;
        if ( *(_WORD *)(v13 + 200) == v10 )
        {
          if ( m != (_QWORD *)248 )
          {
            v14 = *(_DWORD *)(v13 + 204);
            if ( (v14 & 0x10) != 0 )
            {
              if ( v10 == v11 )
              {
                *(_WORD *)(v13 + 212) = v9;
                *(_WORD *)(v13 + 214) = v8;
                while ( 2 )
                {
                  if ( v9 <= v8 )
                  {
                    for ( n = *v2; ; n = (_QWORD *)*n )
                    {
                      v18 = (__int64)(n - 31);
                      if ( v2 == n )
                        goto LABEL_57;
                      if ( *(_WORD *)(v18 + 200) == v9 )
                        break;
                    }
                    if ( n == (_QWORD *)248 || (int)HUBCONNECTOR_RegisterPort(v18) >= 0 )
                    {
LABEL_57:
                      ++v9;
                      continue;
                    }
                  }
                  break;
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v13 + 1432),
                  2u,
                  6u,
                  0x18u,
                  (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
              }
              return;
            }
            *(_DWORD *)(v13 + 1392) = v9;
            if ( (v14 & 1) != 0 )
            {
              if ( (int)HUBCONNECTOR_RegisterPort(v13) < 0 )
                return;
              for ( ii = *v2; ; ii = (_QWORD *)*ii )
              {
                v16 = (__int64)(ii - 31);
                if ( v2 == ii )
                  goto LABEL_36;
                if ( *(_WORD *)(v16 + 200) == v9 )
                  break;
              }
              if ( ii == (_QWORD *)248 )
              {
LABEL_36:
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v19) = v10;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(v13 + 1432),
                    2u,
                    6u,
                    0x19u,
                    (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
                    v19);
                }
                break;
              }
              if ( (*(_DWORD *)(v16 + 204) & 1) == 0
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v20) = v9;
                LODWORD(v19) = v10;
                WPP_RECORDER_SF_DD(
                  *(_QWORD *)(v13 + 1432),
                  2u,
                  6u,
                  0x1Au,
                  (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
                  v19,
                  v20);
              }
              if ( (int)HUBCONNECTOR_RegisterPort(v16) < 0 )
                return;
            }
          }
          break;
        }
      }
      ++v9;
      ++v10;
      if ( v9 > v8 )
        return;
    }
  }
}
