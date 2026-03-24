/*
 * XREFs of ?SetRadius@?$CParticleAttractorGeneratedT@VCParticleAttractor@@VCResource@@@@QEAAJM@Z @ 0x180172CDC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleAttractorGeneratedT<CParticleAttractor,CResource>::SetRadius(float *a1, float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[17] )
  {
    v2 = *(_QWORD *)a1;
    a1[17] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
