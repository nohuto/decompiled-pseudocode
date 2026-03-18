/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C0187540
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01B688C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edx
  int v9; // r8d
  _QWORD **v10; // r14
  _QWORD *i; // rsi
  int v12; // ebx
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  int v16; // r10d

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v7 = *(_DWORD *)(a2 + 1012);
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            4,
            1,
            14,
            (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
        }
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 360) & 8) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v10 = (_QWORD **)(a1 + 448);
        for ( i = *v10; i != v10; i = (_QWORD *)*i )
        {
          v12 = RIMGetPointerInputType(*(i - 1));
          if ( v12 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v15 = *(i - 1);
            v16 = *(_DWORD *)(v15 + 1012);
            if ( v16 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_dd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v14,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  15,
                  (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
                  *(_DWORD *)(v15 + 24),
                  v16);
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
