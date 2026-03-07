__int64 __fastcall PspSetContext(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ebp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int16 v12; // ax
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *SparePtr; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rcx

  v4 = *(_DWORD *)(a3 + 48);
  if ( (v4 & 0x100001) == 0x100001 )
  {
    v9 = *(_DWORD *)(a3 + 68);
    if ( a4 )
      v10 = v9 & 0x210DD5 | 0x200;
    else
      v10 = v9 & 0x250FD5;
    *(_DWORD *)(a1 + 376) = v10;
    v11 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v11;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a4 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v12 = 35;
      if ( *(_WORD *)(a3 + 56) == 51 )
        v12 = 51;
    }
    else
    {
      *(_WORD *)(a1 + 392) = 0;
      v12 = 16;
    }
    *(_WORD *)(a1 + 368) = v12;
    if ( a4 == 1 )
    {
      if ( v12 == 35 )
        v11 = (unsigned int)v11;
      else
        v11 = v11 << 16 >> 16;
    }
    *(_QWORD *)(a1 + 360) = v11;
  }
  if ( (v4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    **(_QWORD **)(a2 + 152) = *(_QWORD *)(a3 + 144);
    **(_QWORD **)(a2 + 168) = *(_QWORD *)(a3 + 160);
    **(_QWORD **)(a2 + 176) = *(_QWORD *)(a3 + 168);
    **(_QWORD **)(a2 + 184) = *(_QWORD *)(a3 + 176);
    **(_QWORD **)(a2 + 224) = *(_QWORD *)(a3 + 216);
    **(_QWORD **)(a2 + 232) = *(_QWORD *)(a3 + 224);
    **(_QWORD **)(a2 + 240) = *(_QWORD *)(a3 + 232);
    **(_QWORD **)(a2 + 248) = *(_QWORD *)(a3 + 240);
  }
  if ( (v4 & 0x100040) == 0x100040 && a4 == 1 )
  {
    v23 = *(int *)(a3 + 1248) + a3 + 720;
    SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
    if ( !SparePtr )
      goto LABEL_46;
    v25 = (_QWORD *)*SparePtr;
    if ( *SparePtr )
    {
      do
      {
        SparePtr = v25;
        v25 = (_QWORD *)*v25;
      }
      while ( v25 );
    }
    v26 = SparePtr[5];
    if ( v26 )
      KiCopyXStateArea(v26, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, v23);
    else
LABEL_46:
      RtlXRestoreS(
        *(int *)(a3 + 1248) + a3 + 720,
        (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( (v4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)*(_QWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)*(_QWORD *)(a2 + 56) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)*(_QWORD *)(a2 + 64) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)*(_QWORD *)(a2 + 72) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)*(_QWORD *)(a2 + 80) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)*(_QWORD *)(a2 + 88) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)*(_QWORD *)(a2 + 96) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)*(_QWORD *)(a2 + 104) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)*(_QWORD *)(a2 + 112) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)*(_QWORD *)(a2 + 120) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a3 + 280) = _mm_getcsr();
    *(_WORD *)(a3 + 256) &= 0x1F3Fu;
  }
  result = 1048592LL;
  if ( (v4 & 0x100010) == 0x100010 )
  {
    v14 = *(_QWORD *)(a3 + 72);
    if ( a4 )
    {
      v15 = 0LL;
      if ( v14 <= 0x7FFFFFFEFFFFLL )
        v15 = *(_QWORD *)(a3 + 72);
      v14 = v15;
    }
    *(_QWORD *)(a1 + 216) = v14;
    v16 = *(_QWORD *)(a3 + 80);
    if ( a4 )
    {
      v17 = 0LL;
      if ( v16 <= 0x7FFFFFFEFFFFLL )
        v17 = *(_QWORD *)(a3 + 80);
      v16 = v17;
    }
    *(_QWORD *)(a1 + 224) = v16;
    v18 = *(_QWORD *)(a3 + 88);
    if ( a4 )
    {
      v19 = 0LL;
      if ( v18 <= 0x7FFFFFFEFFFFLL )
        v19 = *(_QWORD *)(a3 + 88);
      v18 = v19;
    }
    *(_QWORD *)(a1 + 232) = v18;
    v20 = *(_QWORD *)(a3 + 96);
    if ( a4 )
    {
      v21 = 0LL;
      if ( v20 <= 0x7FFFFFFEFFFFLL )
        v21 = *(_QWORD *)(a3 + 96);
      v20 = v21;
    }
    *(_QWORD *)(a1 + 240) = v20;
    result = 4294902613LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    v22 = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
    *(_QWORD *)(a1 + 256) = v22;
    if ( a4 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( (v22 & 0x355) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)result, 0x18u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)result, 0x18u);
    }
  }
  return result;
}
