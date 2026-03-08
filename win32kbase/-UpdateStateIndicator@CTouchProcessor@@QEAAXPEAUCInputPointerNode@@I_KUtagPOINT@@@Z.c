/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0209074
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C0207AAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C01FC9AC (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        int a3,
        __int64 a4,
        struct tagPOINT a5)
{
  int v6; // esi
  struct CInputPointerNode *v7; // rdi
  char v9; // bl
  int v10; // r8d
  bool v11; // zf
  void *v12; // r8
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  int v15; // r9d

  v6 = a3;
  v7 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1897);
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
      65,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v10 = *((_DWORD *)v7 + 75);
  if ( (v6 & 0x10000) != 0 )
  {
    LODWORD(a2) = a5.y;
    v11 = *((_DWORD *)v7 + 15) == 3;
    *((_DWORD *)v7 + 75) = v10 & 0xFFFFFFFC;
    *((_QWORD *)v7 + 26) = a4;
    LODWORD(v12) = 300;
    if ( !v11 )
      LODWORD(v12) = 270;
    *((_DWORD *)v7 + 54) = a5.x - (_DWORD)v12;
    *((_DWORD *)v7 + 55) = a5.y - (_DWORD)v12;
    *((_DWORD *)v7 + 56) = (_DWORD)v12 + a5.x;
    *((_DWORD *)v7 + 57) = (_DWORD)v12 + a5.y;
    v13 = WPP_GLOBAL_Control;
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
      v14 = 66;
LABEL_54:
      LOBYTE(v12) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        v13->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v12,
        v13->DeviceExtension,
        5,
        7,
        v14,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  else if ( (v6 & 0x40004) != 0 )
  {
    LOBYTE(v15) = *((_DWORD *)v7 + 75);
    if ( (v10 & 2) == 0 && !PtInRect((_DWORD *)v7 + 54, *(_QWORD *)&a5) )
    {
      v15 |= 2u;
      *((_DWORD *)v7 + 75) = v15;
    }
    if ( (v15 & 2) == 0
      && (v15 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((_DWORD *)v7 + 15), *((_QWORD *)v7 + 26), a4).LowPart )
    {
      *((_DWORD *)v7 + 75) |= 1u;
    }
    v13 = WPP_GLOBAL_Control;
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
      v12 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
      v14 = 68;
      goto LABEL_54;
    }
  }
  else
  {
    LODWORD(v12) = v10 & 0xFFFFFFFC;
    *((_QWORD *)v7 + 26) = 0LL;
    *((_DWORD *)v7 + 75) = (_DWORD)v12;
    *(_OWORD *)((char *)v7 + 216) = 0LL;
    v13 = WPP_GLOBAL_Control;
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
      v14 = 67;
      goto LABEL_54;
    }
  }
}
