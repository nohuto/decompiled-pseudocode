/*
 * XREFs of ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C03073E8
 * Callers:
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___ @ 0x1C0075ED4 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c957.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C007FC30 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00A54D8 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00B72BC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(_QWORD **a1)
{
  _QWORD *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CEventPool::CEventPoolEntry::Destroy(v1);
}
