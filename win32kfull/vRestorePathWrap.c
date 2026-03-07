void __fastcall vRestorePathWrap(__int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax

  v1 = *a1;
  if ( *(_QWORD *)(v1 + 200) )
  {
    v2 = *(_DWORD *)(v1 + 248);
    if ( (v2 & 2) == 0 )
    {
      *(_DWORD *)(v1 + 248) = v2 & 0xFFFFFFFE;
      DC::hpath((DC *)v1, 0LL);
    }
  }
}
