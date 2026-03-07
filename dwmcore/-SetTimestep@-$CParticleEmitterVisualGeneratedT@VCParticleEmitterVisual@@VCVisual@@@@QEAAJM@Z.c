__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetTimestep(float *a1, float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[177] )
  {
    v2 = *(_QWORD *)a1;
    a1[177] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
