/*
 * XREFs of ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0016150
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067318 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C01D8B5C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C03AA2C0 (-DmmReset@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetNextTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        const struct DMMVIDEOPRESENTTARGET *const a2)
{
  DMMVIDEOPRESENTTARGETSET *v4; // rdx
  struct DMMVIDEOPRESENTTARGET *result; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDEOPRESENTTARGETSET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
    return 0LL;
  return result;
}
