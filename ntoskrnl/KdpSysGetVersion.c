/*
 * XREFs of KdpSysGetVersion @ 0x140AB1C98
 * Callers:
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpSysGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8

  v1 = xmmword_140C099B0;
  *(_OWORD *)a1 = KdVersionBlock;
  v2 = qword_140C099C0;
  *(_OWORD *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 32) = v2;
}
