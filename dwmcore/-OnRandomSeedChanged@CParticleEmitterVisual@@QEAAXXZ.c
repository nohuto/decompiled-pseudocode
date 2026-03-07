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
