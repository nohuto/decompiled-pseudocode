/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01B0670
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, unsigned int a2)
{
  char v4; // r10
  char v5; // r10
  unsigned int v6; // r8d
  unsigned int v7; // edx
  int v8; // ebx
  __int128 *v9; // r11
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // r10
  char *v13; // rsi
  _OWORD *v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  _OWORD *v17; // rdx
  unsigned int v18; // edx
  _DWORD *i; // r8
  __int128 v21; // [rsp+50h] [rbp-B8h]
  __int128 v22; // [rsp+60h] [rbp-A8h]
  __int128 v23; // [rsp+70h] [rbp-98h]
  __int128 v24; // [rsp+80h] [rbp-88h]
  __int128 v25; // [rsp+90h] [rbp-78h]
  __int128 v26; // [rsp+A0h] [rbp-68h]
  __int128 v27; // [rsp+B0h] [rbp-58h]
  __int128 v28; // [rsp+C0h] [rbp-48h]
  __int128 v29; // [rsp+D0h] [rbp-38h]

  if ( a2 )
  {
    v5 = 1;
    v6 = 1;
    v7 = a2 / 9;
    if ( a2 / 9 <= 1 )
      goto LABEL_39;
    do
      v6 = 3 * v6 + 1;
    while ( v6 < v7 );
    if ( v6 )
    {
LABEL_39:
      do
      {
        if ( v6 < a2 )
        {
          v8 = 0;
          v9 = (__int128 *)((char *)a1 + 144 * v6);
          do
          {
            v10 = v8;
            v11 = v8;
            v21 = *v9;
            v22 = v9[1];
            v23 = v9[2];
            v24 = v9[3];
            v25 = v9[4];
            v26 = v9[5];
            v27 = v9[6];
            v28 = v9[7];
            v29 = v9[8];
            if ( v8 >= 0 )
            {
              v12 = v8 + v6;
              v13 = (char *)a1 + 144 * v8;
              do
              {
                if ( *((_DWORD *)v13 + 1) <= DWORD1(v21) )
                  break;
                v11 -= v6;
                v14 = (_OWORD *)((char *)a1 + 144 * v12);
                v12 = (unsigned int)v12 - v6;
                *v14 = *(_OWORD *)v13;
                v14[1] = *((_OWORD *)v13 + 1);
                v14[2] = *((_OWORD *)v13 + 2);
                v14[3] = *((_OWORD *)v13 + 3);
                v14[4] = *((_OWORD *)v13 + 4);
                v14[5] = *((_OWORD *)v13 + 5);
                v14[6] = *((_OWORD *)v13 + 6);
                v14[7] = *((_OWORD *)v13 + 7);
                v15 = *((_OWORD *)v13 + 8);
                v13 -= 144 * (int)v6;
                v10 -= (int)v6;
                v14[8] = v15;
              }
              while ( v10 >= 0 );
              v5 = 1;
            }
            v16 = v11 + v6;
            if ( v8 + v6 != (_DWORD)v16 )
            {
              v17 = (_OWORD *)((char *)a1 + 144 * v16);
              *v17 = v21;
              v17[1] = v22;
              v17[2] = v23;
              v17[3] = v24;
              v17[4] = v25;
              v17[5] = v26;
              v17[6] = v27;
              v17[7] = v28;
              v17[8] = v29;
            }
            ++v8;
            v9 += 9;
          }
          while ( v8 + v6 < a2 );
        }
        v6 /= 3u;
      }
      while ( v6 );
    }
    v18 = 1;
    if ( a2 <= 1 )
      return 1LL;
    for ( i = (_DWORD *)((char *)a1 + 148); *i != *((_DWORD *)a1 + 36 * v18 - 35); i += 36 )
    {
      if ( ++v18 >= a2 )
        return 1LL;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0x14u,
        0x12u,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
        *((_DWORD *)a1 + 36 * v18 + 1));
  }
  else
  {
    v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0x14u,
        0x11u,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
        0);
  }
  return 0LL;
}
