/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01D63F0
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 * Callees:
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C0106B40 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  struct tagINJECTED_CONTACT *v6; // rsi
  unsigned int v9; // r10d
  unsigned __int64 *v10; // r11
  __int64 v11; // r11
  unsigned int v12; // edx
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // r9
  char v17; // r8
  __int64 v18; // r11
  unsigned int *i; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // r9
  PDEVICE_OBJECT v23; // rcx
  char v24; // r8
  __int64 v25; // rdx
  unsigned __int16 v26; // r11
  int v28; // edx
  char v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+40h] [rbp-38h]
  int v31; // [rsp+48h] [rbp-30h]
  unsigned __int64 v32; // [rsp+50h] [rbp-28h]

  v5 = 0;
  v6 = a3;
  v9 = 1;
  if ( a1 )
  {
    v10 = (unsigned __int64 *)((char *)a2 + 32);
    do
    {
      v32 = *v10;
      if ( !PtInRect(a4, *v10) )
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v9) = 0;
        }
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 10;
          v31 = HIDWORD(v32);
          v30 = (int)a3;
          v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
LABEL_26:
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)v15->AttachedDevice,
            v9,
            v17,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            0x14u,
            v16,
            (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
            v30,
            v31,
            v32);
        }
        return 0LL;
      }
      v5 += v9;
      v10 = (unsigned __int64 *)(v11 + 144);
    }
    while ( v5 < a1 );
  }
  v12 = 0;
  if ( a5 )
  {
    a3 = (struct tagINJECTED_CONTACT *)((char *)v6 + 8);
    do
    {
      if ( ((*(_DWORD *)a3 - 0x20000) & 0xFFFDFFFF) != 0 )
      {
        v13 = 0;
        if ( !a1 )
        {
LABEL_12:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            LOBYTE(v9) = 0;
          }
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = v12;
            LOBYTE(v12) = v9;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              (_DWORD)a3,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              20,
              11,
              (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
              v29);
          }
          return 0LL;
        }
        v14 = (_DWORD *)((char *)a2 + 4);
        while ( *v14 != v12 )
        {
          v13 += v9;
          v14 += 36;
          if ( v13 >= a1 )
            goto LABEL_12;
        }
      }
      v12 += v9;
      a3 = (struct tagINJECTED_CONTACT *)((char *)a3 + 12);
    }
    while ( v12 < a5 );
  }
  v18 = 0LL;
  if ( !a1 )
    return v9;
  for ( i = (unsigned int *)((char *)a2 + 4); ; i += 36 )
  {
    v20 = i[2];
    if ( (v20 & 0x8000) != 0 && ((v20 - 163840) & 0xFFFDFFFF) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = 18 * v18;
        LOBYTE(v28) = v9;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          20,
          12,
          (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
          *((_DWORD *)a2 + 36 * v18 + 3));
      }
      return 0LL;
    }
    v21 = v20 & 0xFFFF7FFF;
    LODWORD(a3) = 3 * *i;
    v22 = *((unsigned int *)v6 + 3 * *i + 2);
    if ( v21 == 65542 )
      goto LABEL_54;
    if ( v21 != 0x20000 )
    {
      if ( v21 == 131074 )
      {
LABEL_54:
        if ( (((_DWORD)v22 - 0x20000) & 0xFFFDFFFD) != 0 )
        {
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            LOBYTE(v9) = 0;
          }
          v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = 9 * v18;
            v26 = 13;
            goto LABEL_82;
          }
          return 0LL;
        }
      }
      else if ( (v21 == 131078 || v21 == 0x40000 || v21 == 262146) && (((_DWORD)v22 - 65542) & 0xFFFEFFFF) != 0 )
      {
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v9) = 0;
        }
        v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = 9 * v18;
          v26 = 14;
LABEL_82:
          WPP_RECORDER_AND_TRACE_SF_DD(
            (__int64)v23->AttachedDevice,
            v9,
            v24,
            v22,
            2u,
            0x14u,
            v26,
            (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
            *((_DWORD *)a2 + 4 * v25 + 3),
            v22,
            v32);
          return 0LL;
        }
        return 0LL;
      }
      if ( (v21 & 2) != 0 && v21 != 262146 )
        goto LABEL_59;
      goto LABEL_57;
    }
    if ( (((_DWORD)v22 - 131074) & 0xFFFDFFFF) != 0 )
      break;
LABEL_57:
    if ( i[7] != *((_DWORD *)v6 + 3 * *i) || i[8] != *((_DWORD *)v6 + 3 * *i + 1) )
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 16;
        v31 = *((_DWORD *)a2 + 36 * v18 + 9);
        v30 = *((_DWORD *)a2 + 36 * v18 + 8);
        goto LABEL_26;
      }
      return 0LL;
    }
LABEL_59:
    v18 = v9 + (unsigned int)v18;
    if ( (unsigned int)v18 >= a1 )
      return v9;
  }
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    LOBYTE(v9) = 0;
  }
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = 9 * v18;
    v26 = 15;
    goto LABEL_82;
  }
  return 0LL;
}
