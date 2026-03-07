void __fastcall CVisualTree::CollectInvalidClientRects(CVisualTree *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(i - 1));
    (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v3 + 24LL))(v3, this, (char *)this + 104);
  }
}
