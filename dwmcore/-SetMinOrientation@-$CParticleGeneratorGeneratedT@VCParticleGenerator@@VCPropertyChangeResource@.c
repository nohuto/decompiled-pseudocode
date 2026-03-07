__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMinOrientation(
        __int64 *a1,
        _OWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  *(_OWORD *)((char *)a1 + 124) = *a2;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  return 0LL;
}
