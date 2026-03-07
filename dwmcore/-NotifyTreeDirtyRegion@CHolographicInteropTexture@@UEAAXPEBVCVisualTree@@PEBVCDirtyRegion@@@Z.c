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
