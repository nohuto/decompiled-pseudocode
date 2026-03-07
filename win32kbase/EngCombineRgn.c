INT __stdcall EngCombineRgn(HANDLE hrgnTrg, HANDLE hrgnSrc1, HANDLE hrgnSrc2, INT iMode)
{
  INT v8; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  if ( (unsigned int)GreGetObjectOwner(hrgnTrg, 4LL)
    || (unsigned int)GreGetObjectOwner(hrgnSrc1, 4LL)
    || (unsigned int)GreGetObjectOwner(hrgnSrc2, 4LL) )
  {
    v8 = 0;
  }
  else
  {
    v8 = GreCombineRgn((HRGN)hrgnTrg, (HRGN)hrgnSrc1, (HRGN)hrgnSrc2, iMode);
  }
  if ( v10[0] )
    *(_DWORD *)(v10[0] + 328LL) &= ~0x10u;
  return v8;
}
