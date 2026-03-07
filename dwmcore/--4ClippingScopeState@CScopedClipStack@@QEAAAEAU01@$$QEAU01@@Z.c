__int64 __fastcall CScopedClipStack::ClippingScopeState::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

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
  v4 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  wil::com_ptr_t<CCpuClipAntialiasSinkContext,wil::err_returncode_policy>::attach(a1 + 168, v4);
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  return a1;
}
