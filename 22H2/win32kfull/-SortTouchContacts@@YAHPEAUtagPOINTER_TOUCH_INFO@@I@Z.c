/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DB63C
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003AC94 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  struct tagPOINTER_TOUCH_INFO *v3; // rbx
  int v4; // r9d
  unsigned int v5; // r8d
  int v6; // r11d
  __int128 *v7; // r9
  __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // r13
  char *v11; // rdi
  __int64 v12; // rdx
  _OWORD *v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _OWORD *v16; // rdx
  _DWORD *i; // r8
  int v19; // [rsp+28h] [rbp-C0h]
  __int128 v20; // [rsp+30h] [rbp-B8h]
  __int128 v21; // [rsp+40h] [rbp-A8h]
  __int128 v22; // [rsp+50h] [rbp-98h]
  __int128 v23; // [rsp+60h] [rbp-88h]
  __int128 v24; // [rsp+70h] [rbp-78h]
  __int128 v25; // [rsp+80h] [rbp-68h]
  __int128 v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+A0h] [rbp-48h]
  __int128 v28; // [rsp+B0h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v5 = 1;
    if ( a2 / 9 <= 1 )
      goto LABEL_28;
    do
      v5 = 3 * v5 + 1;
    while ( v5 < a2 / 9 );
    if ( v5 )
    {
LABEL_28:
      do
      {
        if ( v5 < v2 )
        {
          v6 = 0;
          v7 = (__int128 *)((char *)v3 + 144 * v5);
          do
          {
            v8 = v6;
            v9 = v6;
            v20 = *v7;
            v21 = v7[1];
            v22 = v7[2];
            v23 = v7[3];
            v24 = v7[4];
            v25 = v7[5];
            v26 = v7[6];
            v27 = v7[7];
            v28 = v7[8];
            if ( v6 >= 0 )
            {
              v10 = v6 + v5;
              v11 = (char *)v3 + 144 * v6;
              do
              {
                if ( *((_DWORD *)v11 + 1) <= DWORD1(v20) )
                  break;
                v9 -= v5;
                v12 = 144 * v10;
                v10 = (unsigned int)v10 - v5;
                v13 = (_OWORD *)((char *)v3 + v12);
                *v13 = *(_OWORD *)v11;
                v13[1] = *((_OWORD *)v11 + 1);
                v13[2] = *((_OWORD *)v11 + 2);
                v13[3] = *((_OWORD *)v11 + 3);
                v13[4] = *((_OWORD *)v11 + 4);
                v13[5] = *((_OWORD *)v11 + 5);
                v13[6] = *((_OWORD *)v11 + 6);
                v13[7] = *((_OWORD *)v11 + 7);
                v14 = *((_OWORD *)v11 + 8);
                v11 -= 144 * (int)v5;
                v8 -= (int)v5;
                v13[8] = v14;
              }
              while ( v8 >= 0 );
            }
            v15 = v9 + v5;
            if ( v6 + v5 != (_DWORD)v15 )
            {
              v16 = (_OWORD *)((char *)v3 + 144 * v15);
              *v16 = v20;
              v16[1] = v21;
              v16[2] = v22;
              v16[3] = v23;
              v16[4] = v24;
              v16[5] = v25;
              v16[6] = v26;
              v16[7] = v27;
              v16[8] = v28;
            }
            ++v6;
            v7 += 9;
          }
          while ( v6 + v5 < v2 );
        }
        v5 /= 3u;
      }
      while ( v5 );
    }
    a2 = 1;
    if ( v2 <= 1 )
      return 1LL;
    for ( i = (_DWORD *)((char *)v3 + 148); *i != *((_DWORD *)v3 + 36 * a2 - 35); i += 36 )
    {
      if ( ++a2 >= v2 )
        return 1LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 18;
      LODWORD(a1) = 18 * a2;
      v19 = *((_DWORD *)v3 + 36 * a2 + 1);
      goto LABEL_24;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 17;
    v19 = 0;
LABEL_24:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d((_DWORD)a1, a2, 20, v4, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v19);
  }
  return 0LL;
}
