void __fastcall CParticleEmitterVisual::OnEmitterTimeChanged(CParticleEmitterVisual *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_BYTE *)this + 6445) = 1;
  (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(v1 + 72))(this, 0LL, 0LL);
  (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
