void __fastcall FillFailedStatus(struct D3DKMT_VIDPN_SOURCE_MASKS *a1, int a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // r9
  int v4; // eax

  v2 = 0;
  v3 = (_DWORD *)((char *)a1 + 88);
  do
  {
    v4 = *((_DWORD *)a1 + 21);
    if ( _bittest(&v4, v2) )
      *v3 = a2;
    ++v2;
    ++v3;
  }
  while ( v2 < 0x10 );
}
