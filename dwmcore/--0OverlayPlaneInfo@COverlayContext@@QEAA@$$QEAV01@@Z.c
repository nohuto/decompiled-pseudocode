__int64 __fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_BYTE *)(a1 + 177) = *(_BYTE *)(a2 + 177);
  *(_BYTE *)(a1 + 178) = *(_BYTE *)(a2 + 178);
  *(_BYTE *)(a1 + 179) = *(_BYTE *)(a2 + 179);
  *(_BYTE *)(a1 + 180) = *(_BYTE *)(a2 + 180);
  *(_BYTE *)(a1 + 181) = *(_BYTE *)(a2 + 181);
  *(_BYTE *)(a1 + 182) = *(_BYTE *)(a2 + 182);
  *(_BYTE *)(a1 + 183) = *(_BYTE *)(a2 + 183);
  *(_BYTE *)(a1 + 184) = *(_BYTE *)(a2 + 184);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 188);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
  *(_BYTE *)(a1 + 204) = *(_BYTE *)(a2 + 204);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
  return a1;
}
