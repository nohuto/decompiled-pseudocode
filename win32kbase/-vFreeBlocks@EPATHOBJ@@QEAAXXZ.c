void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rbx

  v2 = *(_DWORD **)(*((_QWORD *)this + 1) + 24LL);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD **)v2;
      if ( v2[4] == 4032 )
        freepathalloc(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = 0LL;
}
