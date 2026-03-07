int __fastcall PspGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  _WORD *v5; // r8
  __int64 v8; // rsi
  int result; // eax
  char v10; // cl
  __int64 v11; // r9
  _QWORD *SparePtr; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx

  v3 = *(_DWORD *)(a3 + 48);
  v5 = (_WORD *)(a1 + 368);
  if ( (v3 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *v5;
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v3 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v3 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 144) = **(_QWORD **)(a2 + 152);
    *(_QWORD *)(a3 + 160) = **(_QWORD **)(a2 + 168);
    *(_QWORD *)(a3 + 168) = **(_QWORD **)(a2 + 176);
    *(_QWORD *)(a3 + 176) = **(_QWORD **)(a2 + 184);
    *(_QWORD *)(a3 + 216) = **(_QWORD **)(a2 + 224);
    *(_QWORD *)(a3 + 224) = **(_QWORD **)(a2 + 232);
    *(_QWORD *)(a3 + 232) = **(_QWORD **)(a2 + 240);
    *(_QWORD *)(a3 + 240) = **(_QWORD **)(a2 + 248);
  }
  v8 = 0LL;
  if ( (v3 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)v5 & 1) != 0 )
    {
      v11 = *(int *)(a3 + 1248);
      SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
      if ( !SparePtr )
        goto LABEL_24;
      v14 = (_QWORD *)*SparePtr;
      if ( *SparePtr )
      {
        do
        {
          SparePtr = v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
      v13 = SparePtr[5];
      if ( v13 )
        KiCopyXStateArea(v11 + a3 + 720, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, v13);
      else
LABEL_24:
        RtlXSaveS(v11 + a3 + 720, (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
    }
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  if ( (v3 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(a3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(a3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a3 + 512) = *(_OWORD *)*(_QWORD *)(a2 + 48);
    *(_OWORD *)(a3 + 528) = *(_OWORD *)*(_QWORD *)(a2 + 56);
    *(_OWORD *)(a3 + 544) = *(_OWORD *)*(_QWORD *)(a2 + 64);
    *(_OWORD *)(a3 + 560) = *(_OWORD *)*(_QWORD *)(a2 + 72);
    *(_OWORD *)(a3 + 576) = *(_OWORD *)*(_QWORD *)(a2 + 80);
    *(_OWORD *)(a3 + 592) = *(_OWORD *)*(_QWORD *)(a2 + 88);
    *(_OWORD *)(a3 + 608) = *(_OWORD *)*(_QWORD *)(a2 + 96);
    *(_OWORD *)(a3 + 624) = *(_OWORD *)*(_QWORD *)(a2 + 104);
    *(_OWORD *)(a3 + 640) = *(_OWORD *)*(_QWORD *)(a2 + 112);
    *(_OWORD *)(a3 + 656) = *(_OWORD *)*(_QWORD *)(a2 + 120);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  result = v3 & 0x100010;
  if ( (v3 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a3 + 104) = *(_QWORD *)(a1 + 248);
      v8 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      *(_QWORD *)(a3 + 80) = 0LL;
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
      *(_QWORD *)(a3 + 104) = 0LL;
    }
    *(_QWORD *)(a3 + 112) = v8;
    result = KeCopyLastBranchInformation(a3, a1);
  }
  if ( (v3 & 0x40000000) != 0 )
  {
    result = *(_DWORD *)(a3 + 48) & 0x67FFFFFF | 0x80000000;
    *(_DWORD *)(a3 + 48) = result;
    v10 = *(_BYTE *)(a1 + 43);
    if ( v10 == 1 )
    {
      result |= 0x8000000u;
    }
    else
    {
      if ( v10 != 2 )
        return result;
      result |= 0x10000000u;
    }
    *(_DWORD *)(a3 + 48) = result;
  }
  return result;
}
