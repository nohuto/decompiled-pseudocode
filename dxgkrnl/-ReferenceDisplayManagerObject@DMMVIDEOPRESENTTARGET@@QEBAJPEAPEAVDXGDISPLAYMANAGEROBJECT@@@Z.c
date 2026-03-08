/*
 * XREFs of ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C01D8C0C
 * Callers:
 *     DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x1C017839C (DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01D8B5C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT **a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 68);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    *a2 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 68);
  }
  return 0LL;
}
