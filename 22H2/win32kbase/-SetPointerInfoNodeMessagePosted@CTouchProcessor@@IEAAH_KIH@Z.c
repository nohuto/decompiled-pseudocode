/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C019DDDC
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01971D0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCEEC (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0197108 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01A1218 (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v6; // rsi
  int v8; // edx
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v12; // rcx
  const struct CPointerInputFrame *v13; // r14
  int v15; // edx
  struct CPointerInfoNode *v16; // rbx
  int v17; // ecx
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      229,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7006);
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v10 = 230;
LABEL_14:
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(v9->DeviceExtension, v8, 7, v10, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(this, *(_DWORD *)(v6 + 28));
  v13 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v10 = 231;
    goto LABEL_14;
  }
  v16 = CTouchProcessor::LookupNode(v12, FrameById, *(_DWORD *)(v6 + 32));
  if ( *((_WORD *)v16 + 86) != *(_WORD *)(v6 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7023);
  if ( *((_DWORD *)v16 + 2) >= *((_DWORD *)v13 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7024);
  switch ( a3 )
  {
    case 0x249u:
      v15 = *(_DWORD *)v16;
      v17 = *(_DWORD *)v16;
      if ( (*(_DWORD *)v16 & 8) == 0 && (v15 & 0x40) == 0 && (*((_DWORD *)v16 + 45) & 1) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7036);
        v17 = *(_DWORD *)v16;
      }
      v18 = 0x800000;
      v19 = 0x1000000;
      if ( (v17 & 0x800000) != 0 || (v17 & 0x1000000) != 0 || (v17 & 0x4000000) != 0 || (v17 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7041);
        v17 = *(_DWORD *)v16;
      }
      v20 = a4 << 24;
LABEL_31:
      v21 = v18 | v17 ^ v19 & (v17 ^ v20);
LABEL_61:
      *(_DWORD *)v16 = v21;
      goto LABEL_62;
    case 0x24Au:
      v17 = *(_DWORD *)v16;
      v18 = 0x8000000;
      v19 = 0x10000000;
      if ( (*(_DWORD *)v16 & 0x8000000) != 0
        || (v17 & 0x10000000) != 0
        || (v17 & 0x40000000) != 0
        || (v17 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7054);
        v17 = *(_DWORD *)v16;
      }
      v20 = a4 << 28;
      goto LABEL_31;
    case 0x251u:
      v22 = *(_DWORD *)v16;
      if ( (*(_DWORD *)v16 & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7061);
        v22 = *(_DWORD *)v16;
      }
      if ( v22 < 0 || (v23 = *((_DWORD *)v16 + 1), (v23 & 1) != 0) || (v23 & 4) != 0 || (v23 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7066);
        v22 = *(_DWORD *)v16;
        v23 = *((_DWORD *)v16 + 1);
      }
      *(_DWORD *)v16 = v22 | 0x80000000;
      v24 = v23 ^ ((unsigned __int8)a4 ^ (unsigned __int8)v23) & 1;
      break;
    case 0x252u:
      v25 = *((_DWORD *)v16 + 1);
      if ( (v25 & 8) != 0 || (v25 & 0x10) != 0 || (v25 & 0x40) != 0 || (v25 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7078);
        v25 = *((_DWORD *)v16 + 1);
      }
      v24 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(16 * a4)) & 0x10 | 8;
      break;
    default:
      v26 = *(_DWORD *)v16;
      if ( (*(_DWORD *)v16 & 0x80000) != 0 || (v26 & 0x400000) != 0 || (v26 & 0x200000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7087);
        v26 = *(_DWORD *)v16;
      }
      v21 = v26 ^ (v26 ^ (a4 << 20)) & 0x100000 | 0x80000;
      goto LABEL_61;
  }
  *((_DWORD *)v16 + 1) = v24;
LABEL_62:
  if ( a4 )
    *(_DWORD *)(160LL * *((unsigned int *)v16 + 2) + *((_QWORD *)v13 + 18) + 140) |= 8u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      7,
      232,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return 1LL;
}
