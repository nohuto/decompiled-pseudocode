/*
 * XREFs of ?Scale@RollingStats@@QEAAXN@Z @ 0x1C0088480
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C0359510 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RollingStats::Scale(RollingStats *this, double a2)
{
  unsigned int v2; // r9d
  unsigned int v4; // edx
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 5);
  if ( v2 >= *((_DWORD *)this + 6) )
    v2 = *((_DWORD *)this + 6);
  v4 = 0;
  if ( v2 )
  {
    v5 = 0LL;
    do
    {
      ++v4;
      *(double *)(v5 + *(_QWORD *)this) = a2 * *(double *)(v5 + *(_QWORD *)this);
      v5 += 8LL;
    }
    while ( v4 < v2 );
  }
  *((_BYTE *)this + 64) = 1;
}
