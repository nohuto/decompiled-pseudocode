/*
 * XREFs of ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C021B7F0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0081AB0 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1C0008D30 (WPP_RECORDER_AND_TRACE_SF_hD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x1C021BC20 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
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
  _UNKNOWN **v12; // r9
  void *v13; // rdx
  int v15; // esi
  int v16; // edx
  unsigned __int16 v17; // r8
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+38h] [rbp-50h]
  char v21; // [rsp+40h] [rbp-48h]
  char v22; // [rsp+48h] [rbp-40h]

  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_hDhD(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, *((unsigned __int16 *)a1 + 37));
    v12 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      16,
      11,
      (__int64)&WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids,
      a5,
      a7);
    v12 = &WPP_RECORDER_INITIALIZED;
  }
  if ( a5 >= 1 )
  {
    v15 = v8 | (*((unsigned __int16 *)a1 + 37) << 16);
    if ( v9 )
    {
      if ( !a7 && (a6 & 4) == 0 )
        *((_WORD *)a1 + 37) = 0;
      while ( *(_DWORD *)v9 )
      {
        if ( *(_DWORD *)v9 == v15 )
        {
          if ( (*((_BYTE *)v9 + 6) & 1) != 0 )
          {
            if ( !a7 && (a6 & 4) == 0 )
              *((_WORD *)a1 + 37) = *((_WORD *)v9 + 2);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v11 = 0;
            }
            if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v16 = 13;
              LOBYTE(v16) = v11;
              LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_hD(
                WPP_GLOBAL_Control->AttachedDevice,
                v16,
                a3,
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                v18,
                v19,
                13,
                v20,
                *((_WORD *)a1 + 37),
                *((_WORD *)a1 + 37));
            }
            return 0xFFFFFFFFLL;
          }
          v17 = *((_WORD *)v9 + 2);
          *a4 = v17;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(a2) = 0;
          }
          if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = v17;
            v21 = v17;
            LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_hD(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)a2,
              v17,
              (_DWORD)v12,
              v18,
              v19,
              14,
              v20,
              v21,
              v22);
          }
          return 1LL;
        }
        v9 = (struct DEADKEY *)((char *)v9 + 8);
      }
    }
    *a4 = HIWORD(v15);
    if ( a5 <= 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hD(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          a3,
          (_DWORD)WPP_GLOBAL_Control,
          v18,
          v19,
          16,
          v20,
          SBYTE2(v15),
          SBYTE2(v15));
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hD(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          a3,
          (unsigned __int16)v15,
          v18,
          v19,
          17,
          v20,
          v15,
          v15);
      }
      return 1LL;
    }
    else
    {
      a4[1] = v15;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
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
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = &WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids;
      LOBYTE(v13) = v11;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        16,
        12,
        (__int64)&WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids);
    }
    return 0LL;
  }
}
