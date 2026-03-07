__int64 __fastcall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // r14
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v5; // rsi
  unsigned int v6; // ebp

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  v2 = 0;
  v3 = *((_QWORD *)this + 15);
  if ( !v3 )
    return 1LL;
  if ( !*((_BYTE *)this + 137) )
    return 1LL;
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    return 1LL;
  v5 = *(_QWORD *)(v3 + 496);
  if ( !v5 )
    return 1LL;
  v6 = SURFACE::Map(*(_QWORD *)(v3 + 496), this);
  if ( v6 <= 1 )
  {
    if ( (*(_DWORD *)(v5 + 112) & 0x800) != 0 )
    {
      if ( *(_QWORD *)(v5 + 248) )
      {
        if ( (unsigned int)bHookRedir(v1) )
          *((_DWORD *)this + 28) |= 0x400u;
      }
    }
    if ( (*(_DWORD *)(v5 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
      *((_DWORD *)this + 28) |= 0x2000u;
    if ( v6 == 1 )
      *((_DWORD *)this + 28) |= 0x40u;
    return 1LL;
  }
  LOBYTE(v2) = v6 != 2;
  return v2;
}
