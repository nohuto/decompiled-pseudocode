/*
 * XREFs of ?NotifyTreeDirtyRegion@CDDARenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18012D7F0
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
  *((_BYTE *)this + 2009) = 0;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 72LL))((char *)this - 72, 0LL, 0LL);
}
