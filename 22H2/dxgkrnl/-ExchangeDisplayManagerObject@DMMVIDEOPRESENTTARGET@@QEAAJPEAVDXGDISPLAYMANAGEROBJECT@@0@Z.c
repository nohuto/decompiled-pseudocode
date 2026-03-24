/*
 * XREFs of ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C02E64FC
 * Callers:
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C016A974 (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C02DA8C0 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct DXGDISPLAYMANAGEROBJECT *a3)
{
  struct DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rax

  v3 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 68);
  if ( v3 != a2 )
  {
    if ( v3 != a3 )
    {
      v4 = WdLogNewEntry5_WdError(this, a2);
      WdLogEvent5_WdError(v4);
      return 3221225506LL;
    }
    *((_QWORD *)this + 68) = a2;
  }
  return 0LL;
}
