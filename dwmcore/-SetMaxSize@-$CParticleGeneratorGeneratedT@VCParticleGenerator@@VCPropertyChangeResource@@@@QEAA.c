/*
 * XREFs of ?SetMaxSize@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C42E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMaxSize(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 208) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 216) = v2;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  return 0LL;
}
