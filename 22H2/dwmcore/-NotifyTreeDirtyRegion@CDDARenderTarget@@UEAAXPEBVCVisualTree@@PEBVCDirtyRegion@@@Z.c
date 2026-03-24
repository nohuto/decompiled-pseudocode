/*
 * XREFs of ?NotifyTreeDirtyRegion@CDDARenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180198FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDARenderTarget::NotifyTreeDirtyRegion(
        CDDARenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  *((_QWORD *)this + 29) = a3;
  *((_BYTE *)this + 1825) = 0;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 8) + 72LL))((char *)this - 64, 0LL, 0LL);
}
