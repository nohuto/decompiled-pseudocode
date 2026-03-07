__int64 __fastcall CGraphWalker<CVisual>::BeginWalk(__int64 a1, __int64 a2, const void *a3)
{
  unsigned int v3; // edi
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  if ( a3 && (v6 = CThreadContext::RegisterGraphWalkRoot(a3), v3 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3Eu, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = a2;
  }
  return v3;
}
