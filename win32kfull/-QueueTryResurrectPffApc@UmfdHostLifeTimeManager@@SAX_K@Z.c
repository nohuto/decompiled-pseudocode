/*
 * XREFs of ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02E2A54
 * Callers:
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___ @ 0x1C011F3C4 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c957.c)
 *     _lambda_eef90ce73a6a62b5089d029612c95735_::operator() @ 0x1C011F5B4 (_lambda_eef90ce73a6a62b5089d029612c95735_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::QueueTryResurrectPffApc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  char v4; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v2 = Win32AllocPoolNonPaged(88LL, 1668309319LL);
    v3 = v2;
    if ( v2 )
    {
      v4 = 0;
      KeInitializeApc(
        v2,
        KeGetCurrentThread(),
        0LL,
        SpbApcRundown,
        SpbApcRundown,
        UmfdHostLifeTimeManager::TryResurrectPffApcRoutine,
        v4,
        0LL);
      KeInsertQueueApc(v3, a1, 0LL, 0LL);
    }
  }
}
