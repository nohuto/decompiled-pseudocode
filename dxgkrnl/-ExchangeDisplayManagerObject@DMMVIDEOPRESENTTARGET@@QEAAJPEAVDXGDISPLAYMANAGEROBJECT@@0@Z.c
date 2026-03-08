/*
 * XREFs of ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C03AE994
 * Callers:
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01D8B5C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C03A5F1C (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct DXGDISPLAYMANAGEROBJECT *a3)
{
  struct DXGDISPLAYMANAGEROBJECT *v3; // rax

  v3 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 68);
  if ( v3 != a2 )
  {
    if ( v3 != a3 )
    {
      WdLogSingleEntry0(2LL);
      return 3221225506LL;
    }
    *((_QWORD *)this + 68) = a2;
  }
  return 0LL;
}
