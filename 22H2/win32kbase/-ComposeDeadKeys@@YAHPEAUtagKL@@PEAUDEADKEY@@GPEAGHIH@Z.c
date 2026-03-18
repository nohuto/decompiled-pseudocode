/*
 * XREFs of ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01EB5B0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C006BCF0 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1C00099E0 (WPP_RECORDER_AND_TRACE_SF_hD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x1C01EB9D4 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 */

__int64 __fastcall ComposeDeadKeys(
        struct tagKL *a1,
        struct DEADKEY *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int a7)
{
  int v8; // r13d
  struct DEADKEY *v9; // rdi
  char v11; // bl
  __int64 v12; // r9
  char v13; // dl
  void *v14; // rdx
  int v16; // esi
  PDEVICE_OBJECT v17; // rcx
  char v18; // dl
  unsigned __int16 v19; // r10
  char v20; // r8
  char v21; // dl
  int v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+38h] [rbp-50h]
  __int16 v25; // [rsp+50h] [rbp-38h]
  int v26; // [rsp+58h] [rbp-30h]

  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v12 = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = a3;
    v25 = a3;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_hDhD(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, *((unsigned __int16 *)a1 + 37));
    v12 = (__int64)&WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      7u,
      0xBu,
      (__int64)&WPP_86ffb410cd2c341fb07928861dacffb1_Traceguids,
      a5,
      a7,
      v25,
      v26);
    v12 = (__int64)&WPP_RECORDER_INITIALIZED;
  }
  if ( a5 >= 1 )
  {
    v16 = v8 | (*((unsigned __int16 *)a1 + 37) << 16);
    if ( v9 )
    {
      if ( !a7 && (a6 & 4) == 0 )
        *((_WORD *)a1 + 37) = 0;
      while ( *(_DWORD *)v9 )
      {
        if ( *(_DWORD *)v9 == v16 )
        {
          if ( (*((_BYTE *)v9 + 6) & 1) != 0 )
          {
            if ( !a7 && (a6 & 4) == 0 )
              *((_WORD *)a1 + 37) = *((_WORD *)v9 + 2);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v11 = 0;
            }
            if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_hD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v11,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)&WPP_RECORDER_INITIALIZED,
                v22,
                v23,
                0xDu,
                v24);
            return 0xFFFFFFFFLL;
          }
          *a4 = *((_WORD *)v9 + 2);
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v18 = 0;
          }
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 14;
            v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            goto LABEL_73;
          }
          return 1LL;
        }
        v9 = (struct DEADKEY *)((char *)v9 + 8);
      }
    }
    *a4 = HIWORD(v16);
    if ( a5 <= 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v21 = 0;
      }
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_hD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v21,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control,
          v22,
          v23,
          0x10u,
          v24);
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v18 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = (unsigned __int16)v16;
        v19 = 17;
LABEL_73:
        WPP_RECORDER_AND_TRACE_SF_hD((__int64)v17->AttachedDevice, v18, v20, v12, v22, v23, v19, v24);
      }
      return 1LL;
    }
    else
    {
      a4[1] = v16;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = v11;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hDhD(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, (_DWORD)WPP_GLOBAL_Control);
      }
      return 2LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = &WPP_86ffb410cd2c341fb07928861dacffb1_Traceguids;
      LOBYTE(v14) = v11;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v14,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        12,
        (__int64)&WPP_86ffb410cd2c341fb07928861dacffb1_Traceguids);
    }
    return 0LL;
  }
}
