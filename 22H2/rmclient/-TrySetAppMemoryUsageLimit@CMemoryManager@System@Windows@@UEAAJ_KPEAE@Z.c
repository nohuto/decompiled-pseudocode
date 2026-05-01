/*
 * XREFs of ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18000F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003850 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJ_KPEAH@Z @ 0x1800104B8 (-SetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJ_KPEAH@Z.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::TrySetAppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0;
  if ( a3 )
  {
    if ( (int)Windows::System::CMemoryManager::Init() >= 0 )
      ModernResourceManagerProxy::SetMemoryUsageLimit(Windows::System::CMemoryManager::s_pProxy, a2, &v7);
    if ( v7 )
      v3 = 1;
  }
  result = 0LL;
  *a3 = v3;
  return result;
}
