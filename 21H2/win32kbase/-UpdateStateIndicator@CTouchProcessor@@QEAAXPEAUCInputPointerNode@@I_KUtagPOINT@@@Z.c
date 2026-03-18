/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01DA214
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C01CF10C (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5)
{
  int v6; // esi
  struct CInputPointerNode *v7; // rdi
  char v9; // bl
  int v10; // r8d
  bool v11; // zf
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // ax
  int v14; // r9d
  __int16 v15; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v7 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      61,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v10 = *((_DWORD *)v7 + 75);
  if ( (v6 & 0x10000) != 0 )
  {
    LODWORD(a2) = a5.y;
    v11 = *((_DWORD *)v7 + 15) == 3;
    *((_DWORD *)v7 + 75) = v10 & 0xFFFFFFFC;
    *((_QWORD *)v7 + 26) = a4;
    v10 = 300;
    if ( !v11 )
      v10 = 270;
    *((_DWORD *)v7 + 54) = a5.x - v10;
    *((_DWORD *)v7 + 55) = a5.y - v10;
    *((_DWORD *)v7 + 56) = v10 + a5.x;
    *((_DWORD *)v7 + 57) = v10 + a5.y;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( (_BYTE)a2 || v9 )
    {
      v13 = 62;
LABEL_26:
      v15 = v13;
LABEL_55:
      LOBYTE(v10) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        v12->AttachedDevice,
        (_DWORD)a2,
        v10,
        v12->DeviceExtension,
        5,
        7,
        v15,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  else if ( (v6 & 0x40004) != 0 )
  {
    LOBYTE(v14) = *((_DWORD *)v7 + 75);
    if ( (v10 & 2) == 0 && !PtInRect((_DWORD *)v7 + 54, *(_QWORD *)&a5) )
    {
      v14 |= 2u;
      *((_DWORD *)v7 + 75) = v14;
    }
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((unsigned int *)v7 + 15), *((_QWORD *)v7 + 26), a4).LowPart )
    {
      *((_DWORD *)v7 + 75) |= 1u;
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( (_BYTE)a2 || v9 )
    {
      v15 = 64;
      goto LABEL_55;
    }
  }
  else
  {
    v10 &= 0xFFFFFFFC;
    *((_QWORD *)v7 + 26) = 0LL;
    *((_DWORD *)v7 + 75) = v10;
    *(_OWORD *)((char *)v7 + 216) = 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( (_BYTE)a2 || v9 )
    {
      v13 = 63;
      goto LABEL_26;
    }
  }
}
