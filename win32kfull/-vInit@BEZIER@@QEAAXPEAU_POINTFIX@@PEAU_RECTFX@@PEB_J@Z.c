void __fastcall BEZIER::vInit(BEZIER *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  BOOL v7; // eax

  v7 = a4 == gpeqErrorLow && BEZIER32::bInit(this, a2, 0LL);
  *((_DWORD *)this + 42) = v7;
  if ( !v7 )
    BEZIER64::vInit(this, a2, 0LL, a4);
}
