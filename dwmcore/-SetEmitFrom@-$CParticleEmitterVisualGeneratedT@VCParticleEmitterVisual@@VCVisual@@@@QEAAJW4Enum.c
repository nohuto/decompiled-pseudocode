__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitFrom(__int64 a1, int a2)
{
  __int64 v3; // rdx

  if ( a2 != *(_DWORD *)(a1 + 720) )
  {
    *(_DWORD *)(a1 + 720) = a2;
    v3 = *(_QWORD *)(a1 + 6400);
    *(_QWORD *)(a1 + 6400) = 0LL;
    if ( v3 )
      std::default_delete<EmitterShapes::CSpawner>::operator()(a1, v3);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
