void __fastcall CTouchProcessor::InitializeQFrame(__int64 a1, __int64 a2, int a3, __int64 a4, CInputDest *a5, int a6)
{
  CTouchProcessor *v7; // rcx

  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  CInputDest::operator=(a2 + 16, a5);
  *(_DWORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 140) &= 0xFFFFFFE7;
  CTouchProcessor::InitializeQFrameCoalesceState(v7, (struct CPointerQFrame *)a2, a6);
  CInputDest::SetEmpty(a5);
}
