void __fastcall CDirtyRegion::ForceFullDirty(CDirtyRegion *this)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, gsl::details *, char *); // rbx
  gsl::details *DirtyRects; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 4420) )
  {
    CDirtyRegion::SetFullDirty(this);
    if ( COcclusionContext::IsCurrent((CDirtyRegion *)((char *)this + 16)) )
    {
      v2 = *(_QWORD *)this;
      v3 = *(void (__fastcall **)(__int64, gsl::details *, char *))(**(_QWORD **)this + 200LL);
      DirtyRects = CDirtyRegion::GetDirtyRects((__int64)this, (gsl::details *)v5);
      v3(v2, DirtyRects, (char *)this + 16);
    }
  }
}
