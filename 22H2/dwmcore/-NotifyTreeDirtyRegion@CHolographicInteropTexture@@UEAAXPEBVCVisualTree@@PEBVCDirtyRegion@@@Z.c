/*
 * XREFs of ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180259300
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

  v3 = this + 42;
  AcquireSRWLockExclusive(this + 42);
  this[5].Ptr = a3;
  ReleaseSRWLockExclusive(v3);
}
