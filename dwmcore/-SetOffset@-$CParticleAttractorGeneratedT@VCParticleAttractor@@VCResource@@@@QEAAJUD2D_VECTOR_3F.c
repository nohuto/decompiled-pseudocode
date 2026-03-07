__int64 __fastcall CParticleAttractorGeneratedT<CParticleAttractor,CResource>::SetOffset(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 72) = v2;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  return 0LL;
}
