/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01B09C0
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C009B8A4 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // r10d
  unsigned __int64 *v10; // r11
  int v11; // r8d
  __int64 v12; // r11
  unsigned int v13; // edx
  _DWORD *v14; // r8
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // r9
  char v19; // r8
  __int64 v20; // r11
  unsigned int *i; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // r9d
  PDEVICE_OBJECT v25; // rcx
  char v26; // r8
  __int64 v27; // rdx
  unsigned __int16 v28; // r11
  int v30; // [rsp+40h] [rbp-38h]
  int v31; // [rsp+48h] [rbp-30h]
  unsigned __int64 v32; // [rsp+50h] [rbp-28h]

  v5 = 0;
  v9 = 1;
  if ( a1 )
  {
    v10 = (unsigned __int64 *)((char *)a2 + 32);
    do
    {
      v32 = *v10;
      if ( !PtInRect(a4, *v10) )
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v9) = 0;
        }
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 10;
          v31 = HIDWORD(v32);
          v30 = v11;
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
LABEL_26:
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)v17->AttachedDevice,
            v9,
            v19,
            (__int64)gFullLog,
            2u,
            0x14u,
            v18,
            (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
            v30,
            v31,
            v32);
        }
        return 0LL;
      }
      v5 += v9;
      v10 = (unsigned __int64 *)(v12 + 144);
    }
    while ( v5 < a1 );
  }
  v13 = 0;
  if ( a5 )
  {
    v14 = (_DWORD *)((char *)a3 + 8);
    do
    {
      if ( ((*v14 - 0x20000) & 0xFFFDFFFF) != 0 )
      {
        v15 = 0;
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
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v9,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              2u,
              0x14u,
              0xBu,
              (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
              v13);
          return 0LL;
        }
        v16 = (_DWORD *)((char *)a2 + 4);
        while ( *v16 != v13 )
        {
          v15 += v9;
          v16 += 36;
          if ( v15 >= a1 )
            goto LABEL_12;
        }
      }
      v13 += v9;
      v14 += 3;
    }
    while ( v13 < a5 );
  }
  v20 = 0LL;
  if ( !a1 )
    return v9;
  for ( i = (unsigned int *)((char *)a2 + 4); ; i += 36 )
  {
    v22 = i[2];
    if ( (v22 & 0x8000) != 0 && ((v22 - 163840) & 0xFFFDFFFF) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0x14u,
          0xCu,
          (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
          *((_DWORD *)a2 + 36 * v20 + 3));
      return 0LL;
    }
    v23 = v22 & 0xFFFF7FFF;
    v24 = *((_DWORD *)a3 + 3 * *i + 2);
    if ( v23 == 65542 )
      goto LABEL_54;
    if ( v23 != 0x20000 )
    {
      if ( v23 == 131074 )
      {
LABEL_54:
        if ( ((v24 - 0x20000) & 0xFFFDFFFD) != 0 )
        {
          v25 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            LOBYTE(v9) = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = 9 * v20;
            v28 = 13;
            goto LABEL_82;
          }
          return 0LL;
        }
      }
      else if ( (v23 == 131078 || v23 == 0x40000 || v23 == 262146) && ((v24 - 65542) & 0xFFFEFFFF) != 0 )
      {
        v25 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v9) = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 9 * v20;
          v28 = 14;
LABEL_82:
          WPP_RECORDER_AND_TRACE_SF_DD(
            (__int64)v25->AttachedDevice,
            v9,
            v26,
            (__int64)gFullLog,
            2u,
            0x14u,
            v28,
            (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
            *((_DWORD *)a2 + 4 * v27 + 3),
            v24,
            v32);
          return 0LL;
        }
        return 0LL;
      }
      if ( (v23 & 2) != 0 && v23 != 262146 )
        goto LABEL_59;
      goto LABEL_57;
    }
    if ( ((v24 - 131074) & 0xFFFDFFFF) != 0 )
      break;
LABEL_57:
    if ( i[7] != *((_DWORD *)a3 + 3 * *i) || i[8] != *((_DWORD *)a3 + 3 * *i + 1) )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 16;
        v31 = *((_DWORD *)a2 + 36 * v20 + 9);
        v30 = *((_DWORD *)a2 + 36 * v20 + 8);
        goto LABEL_26;
      }
      return 0LL;
    }
LABEL_59:
    v20 = v9 + (unsigned int)v20;
    if ( (unsigned int)v20 >= a1 )
      return v9;
  }
  v25 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    LOBYTE(v9) = 0;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 9 * v20;
    v28 = 15;
    goto LABEL_82;
  }
  return 0LL;
}
