void __fastcall ESTROBJ::ptlBaseLineAdjustSet(ESTROBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r9
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // r11

  v2 = (__int64)*a2;
  v3 = (_DWORD *)((char *)this + 244);
  v4 = 0;
  *((_QWORD *)this + 30) = v2;
  if ( ((_DWORD)v2 || *v3) && *(_DWORD *)this )
  {
    v5 = 0LL;
    v6 = 0LL;
    do
    {
      if ( *(_DWORD *)(v6 + *((_QWORD *)this + 26)) == *((_DWORD *)this + 59) )
      {
        *(_DWORD *)(*((_QWORD *)this + 8) + v5 + 16) += *((_DWORD *)this + 60);
        *(_DWORD *)(*((_QWORD *)this + 8) + v5 + 20) += *v3;
        ++v4;
      }
      v6 += 4LL;
      v5 += 24LL;
    }
    while ( v4 < *(_DWORD *)this );
  }
}
