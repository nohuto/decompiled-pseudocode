/*
 * XREFs of ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02F7880
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F6690 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback(
        struct DXGADAPTER *a1,
        DISPLAYSTATECHECKER *this)
{
  return DISPLAYSTATECHECKER::AddDisplayAdapter(this, a1);
}
