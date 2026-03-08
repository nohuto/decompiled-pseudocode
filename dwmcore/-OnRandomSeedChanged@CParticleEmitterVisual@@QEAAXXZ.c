/*
 * XREFs of ?OnRandomSeedChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x1801C29C4
 * Callers:
 *     ?SetRandomSeed@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x1801C6588 (-SetRandomSeed@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CParticleEmitterVisual::OnRandomSeedChanged(CParticleEmitterVisual *this)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rdx
  int Src; // [rsp+20h] [rbp-13A8h] BYREF
  _DWORD v5[1251]; // [rsp+24h] [rbp-13A4h]

  v5[1248] = -1;
  v2 = *((_DWORD *)this + 179);
  v3 = 1LL;
  v5[0] = v2;
  do
  {
    v2 = v3 + 1812433253 * (v2 ^ (v2 >> 30));
    v5[v3++] = v2;
  }
  while ( v3 < 0x270 );
  Src = 624;
  memcpy_0((char *)this + 1388, &Src, 0x1388uLL);
  (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
