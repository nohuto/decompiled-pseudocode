/*
 * XREFs of ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800E5B14
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18008DB60 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800D0FEC (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800E5B40 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<CD2DTarget>(CD2DTarget **a1, unsigned int a2)
{
  CD2DTarget *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = CD2DTarget::`scalar deleting destructor'(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
