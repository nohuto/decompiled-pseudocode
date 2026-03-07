void __fastcall SAFE_DELETE<std::vector<CVisual *>>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      std::_Deallocate<16,0>(*(void **)v1, (*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)v1 = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
  }
}
