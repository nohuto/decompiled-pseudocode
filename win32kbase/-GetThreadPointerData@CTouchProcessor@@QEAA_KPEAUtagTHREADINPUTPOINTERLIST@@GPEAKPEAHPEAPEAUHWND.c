/*
 * XREFs of ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00F2A40
 * Callers:
 *     NtUserGetPointerType @ 0x1C0170DA0 (NtUserGetPointerType.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C01F63B4 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01F7F94 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01F8064 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C01F895C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C01F89F4 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C01F90B0 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F96B8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01FA4B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C0200C18 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x1C023E978 (ApiSetEditionGetThreadPointerHookData.c)
 */

unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  __int64 ThreadPointerHookData; // rcx

  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData(a2, a3);
  if ( !ThreadPointerHookData )
  {
    for ( ThreadPointerHookData = *(_QWORD *)a2;
          (struct tagTHREADINPUTPOINTERLIST *)ThreadPointerHookData != a2;
          ThreadPointerHookData = *(_QWORD *)ThreadPointerHookData )
    {
      if ( *(_WORD *)(ThreadPointerHookData + 16) == a3 )
        goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  if ( (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *(_DWORD *)(ThreadPointerHookData + 20);
  if ( a5 )
    *a5 = -(*(_DWORD *)(ThreadPointerHookData + 48) & 1);
  if ( a6 )
    *a6 = *(HWND *)(ThreadPointerHookData + 40);
  return *(_QWORD *)(ThreadPointerHookData + 24);
}
