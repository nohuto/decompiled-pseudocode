void __fastcall VIDSCH_VSYNC_SMOOTHER::ResetSmoother(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  int v4; // ebx

  v4 = a3;
  if ( (byte_1C00769C4 & 1) != 0 )
    McTemplateK0xx_EtwWriteTransfer(this, a2, a3, (unsigned int)a2, (unsigned int)a3);
  *((double *)this + 4) = (double)v4;
  LinearFitT<256>::Reset(this, a2, a3);
}
