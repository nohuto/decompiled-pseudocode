__int64 __fastcall CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::SetOrAppendBindings(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 11;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<ParticleBindingData>::insert<ParticleBindingData const *,0>(
    v4,
    &v6,
    a1[12],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 24LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **))*a1 + 25))(a1);
  return 0LL;
}
