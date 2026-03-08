/*
 * XREFs of ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x1800B9D38
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1800B9B84 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ?ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETEXTENDMODE@@@Z @ 0x18024A1CC (-ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETEX.c)
 *     ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z @ 0x18024A210 (-ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRU.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::InvalidateGradient(CGradientBrush *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_BYTE *)this + 224) = 0;
  (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v1 + 72))(this, 6LL, this);
}
