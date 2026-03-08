/*
 * XREFs of ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C011F800
 * Callers:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E7128 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___ @ 0x1C011F3C4 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c957.c)
 *     _lambda_eef90ce73a6a62b5089d029612c95735_::operator() @ 0x1C011F5B4 (_lambda_eef90ce73a6a62b5089d029612c95735_--operator().c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00EF4CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(_QWORD **a1)
{
  _QWORD *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CEventPool::CEventPoolEntry::Destroy(v1);
}
