__int64 __fastcall CScopedClipStack::ClippingScopeState::ClippingScopeState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 100) = *(_OWORD *)(a2 + 100);
  *(_OWORD *)(a1 + 116) = *(_OWORD *)(a2 + 116);
  *(_OWORD *)(a1 + 132) = *(_OWORD *)(a2 + 132);
  *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
  v2 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_QWORD *)(a1 + 168) = v2;
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  return a1;
}
