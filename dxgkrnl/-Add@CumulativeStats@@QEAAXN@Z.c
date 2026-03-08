/*
 * XREFs of ?Add@CumulativeStats@@QEAAXN@Z @ 0x1C0087FB8
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     <none>
 */

void __fastcall CumulativeStats::Add(CumulativeStats *this, double a2)
{
  double v2; // xmm0_8

  ++*(_DWORD *)this;
  *((double *)this + 3) = a2 + *((double *)this + 3);
  v2 = *((double *)this + 1);
  *((double *)this + 4) = a2 * a2 + *((double *)this + 4);
  if ( v2 > a2 )
    *((double *)this + 1) = a2;
  if ( a2 > *((double *)this + 2) )
    *((double *)this + 2) = a2;
}
