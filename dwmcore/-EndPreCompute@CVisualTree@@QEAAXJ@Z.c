void __fastcall CVisualTree::EndPreCompute(CVisualTree *this, int a2)
{
  __int64 v4; // rax
  __int64 i; // rdi
  __int64 v6; // rcx

  v4 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 216LL))(this);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( a2 >= 0 || (CDirtyRegion::SetFullDirty((CVisualTree *)((char *)this + 104)), a2 != -2147467260) )
  {
    CVisualTree::CollectInvalidClientRects(this);
    CDirtyRegion::Optimize((CVisualTree *)((char *)this + 104));
    for ( i = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(i - 1));
      (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v6 + 16LL))(v6, this, (char *)this + 104);
    }
  }
}
