void __fastcall UNDOENGUPDATEDEVICESURFACE::~UNDOENGUPDATEDEVICESURFACE(UNDOENGUPDATEDEVICESURFACE *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 328) ^= (*(_DWORD *)(v1 + 328) ^ *(unsigned __int8 *)this) & 1;
}
