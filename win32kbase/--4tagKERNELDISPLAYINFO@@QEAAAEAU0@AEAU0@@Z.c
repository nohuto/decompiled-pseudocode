__int64 __fastcall tagKERNELDISPLAYINFO::operator=(__int64 a1)
{
  _QWORD *v1; // r9
  __int64 v2; // r9
  __int64 v3; // r10
  _DWORD **v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  int v7; // ecx

  v1 = gpDispInfo;
  *(_OWORD *)a1 = *(_OWORD *)gpDispInfo;
  *(_QWORD *)(a1 + 16) = v1[2];
  *(_QWORD *)(a1 + 24) = v1[3];
  *(_QWORD *)(a1 + 32) = v1[4];
  *(_QWORD *)(a1 + 40) = v1[5];
  *(_QWORD *)(a1 + 48) = v1[6];
  *(_QWORD *)(a1 + 56) = v1[7];
  *(_QWORD *)(a1 + 64) = v1[8];
  *(_QWORD *)(a1 + 72) = v1[9];
  *(_QWORD *)(a1 + 80) = v1[10];
  *(_DWORD *)(a1 + 88) = *((_DWORD *)v1 + 22);
  *(_DWORD *)(a1 + 92) = *((_DWORD *)v1 + 23);
  tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=((_QWORD *)(a1 + 96), v1[12]);
  tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
    (_QWORD *)(v3 + 104),
    *(_QWORD *)(v2 + 104));
  *(_DWORD *)(*(_QWORD *)v5 + 24LL) = (*v4)[6];
  *(_DWORD *)(*(_QWORD *)v5 + 28LL) = (*v4)[7];
  *(_DWORD *)(*(_QWORD *)v5 + 32LL) = (*v4)[8];
  *(_DWORD *)(*(_QWORD *)v5 + 36LL) = (*v4)[9];
  v6 = *(_DWORD *)(v5 + 132);
  *(_QWORD *)(v5 + 120) = v4[15];
  *(_WORD *)(v5 + 128) = *((_WORD *)v4 + 64);
  v7 = *(_DWORD *)(v5 + 132) ^ (*((_DWORD *)v4 + 33) ^ v6) & 1;
  *(_DWORD *)(v5 + 132) = v7;
  *(_DWORD *)(v5 + 132) = v7 ^ (*((_DWORD *)v4 + 33) ^ v7) & 2;
  *(_DWORD *)(v5 + 136) = *((_DWORD *)v4 + 34);
  *(_OWORD *)(v5 + 144) = *((_OWORD *)v4 + 9);
  *(_WORD *)(v5 + 160) = *((_WORD *)v4 + 80);
  *(_WORD *)(v5 + 162) = *((_WORD *)v4 + 81);
  **(_DWORD **)v5 = **v4;
  return v5;
}
