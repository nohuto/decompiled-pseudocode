/*
 * XREFs of ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1802A7C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::NotifyTreeDirtyRegion(
        RTL_SRWLOCK *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = this + 43;
  AcquireSRWLockExclusive(this + 43);
  this[6].Ptr = a3;
  ReleaseSRWLockExclusive(v3);
}
