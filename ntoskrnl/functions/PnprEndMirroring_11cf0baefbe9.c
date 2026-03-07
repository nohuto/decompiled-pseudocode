__int64 __fastcall PnprEndMirroring(int a1)
{
  int v1; // ebx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v1 = PnprSwap();
      if ( v1 >= 0 )
      {
        PnprWakeProcessors();
        return 1073742484;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD))off_140C01A98[0])(3LL, *(_QWORD *)(PnprContext + 33160));
        PnprWakeProcessors();
      }
    }
  }
  else
  {
    *(_BYTE *)(PnprContext + 208) = 1;
    return (unsigned int)PnprQuiesce();
  }
  return (unsigned int)v1;
}
