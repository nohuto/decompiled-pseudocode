__int64 __fastcall RtlpCopyContext(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 result; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  if ( a2 == a1 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x1000CF;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 48) = 0;
    if ( (*(_DWORD *)(a2 + 48) & 0x100080) == 0x100080 && (v3 & 0x100080) == 0x100080 )
    {
      v6 = *(int *)(a1 + 1256);
      *(_DWORD *)(a1 + 48) = 1048704;
      v7 = *(int *)(a2 + 1256);
      *(_OWORD *)(v6 + a1 + 1232) = *(_OWORD *)(v7 + a2 + 1232);
      *(_QWORD *)(v6 + a1 + 1248) = *(_QWORD *)(v7 + a2 + 1248);
    }
    *(_DWORD *)(a1 + 48) |= *(_DWORD *)(a2 + 48) & 0x10000F;
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
    *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
    *(_OWORD *)(a1 + 512) = *(_OWORD *)(a2 + 512);
    *(_OWORD *)(a1 + 528) = *(_OWORD *)(a2 + 528);
    *(_OWORD *)(a1 + 544) = *(_OWORD *)(a2 + 544);
    *(_OWORD *)(a1 + 560) = *(_OWORD *)(a2 + 560);
    *(_OWORD *)(a1 + 576) = *(_OWORD *)(a2 + 576);
    *(_OWORD *)(a1 + 592) = *(_OWORD *)(a2 + 592);
    *(_OWORD *)(a1 + 608) = *(_OWORD *)(a2 + 608);
    *(_OWORD *)(a1 + 624) = *(_OWORD *)(a2 + 624);
    *(_OWORD *)(a1 + 640) = *(_OWORD *)(a2 + 640);
    *(_OWORD *)(a1 + 656) = *(_OWORD *)(a2 + 656);
    *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 56);
    *(_WORD *)(a1 + 66) = *(_WORD *)(a2 + 66);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
    result = a2 + 256;
    v5 = (_OWORD *)(a1 + 256);
    *v5 = *(_OWORD *)(a2 + 256);
    v5[1] = *(_OWORD *)(a2 + 272);
    v5[2] = *(_OWORD *)(a2 + 288);
    v5[3] = *(_OWORD *)(a2 + 304);
    v5[4] = *(_OWORD *)(a2 + 320);
    v5[5] = *(_OWORD *)(a2 + 336);
    v5[6] = *(_OWORD *)(a2 + 352);
    v5[7] = *(_OWORD *)(a2 + 368);
    v5[8] = *(_OWORD *)(a2 + 384);
    v5[9] = *(_OWORD *)(a2 + 400);
  }
  return result;
}
