/*
 * XREFs of ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@@Z @ 0x18001F6C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *a4)
{
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebx

  v5 = *((_QWORD *)a2 + 6);
  v6 = 0LL;
  if ( !v5 )
    goto LABEL_5;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v5 + 2 * v7) );
  v6 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x475u, 0LL);
  }
  else
  {
LABEL_5:
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 63) + 8LL))(
      *((_QWORD *)this + 63),
      (char *)a4 + 8,
      v6);
    return 0;
  }
  return v8;
}
