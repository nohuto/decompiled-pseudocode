/*
 * XREFs of Lanczos::Lanczos @ 0x1801FC1C0
 * Callers:
 *     ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x1801FBFC8 (-ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z.c)
 *     ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x1801FC0E0 (-ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z.c)
 * Callees:
 *     Lanczos::Sinc @ 0x1801FC228 (Lanczos--Sinc.c)
 */

double __fastcall Lanczos::Lanczos(double a1)
{
  double v1; // xmm0_8

  if ( COERCE_DOUBLE(*(_QWORD *)&a1 & _xmm) >= 3.0 )
    return 0.0;
  v1 = Lanczos::Sinc();
  return Lanczos::Sinc() * v1;
}
