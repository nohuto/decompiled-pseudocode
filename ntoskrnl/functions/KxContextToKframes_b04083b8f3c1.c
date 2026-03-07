char __fastcall KxContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  char v6; // r12
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int16 v13; // ax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // r8
  _QWORD *SparePtr; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // r15

  v6 = 0;
  if ( (a4 & 0x100001) == 0x100001 )
  {
    v10 = *(_DWORD *)(a3 + 68);
    if ( a5 )
      v11 = v10 & 0x210DD5 | 0x200;
    else
      v11 = v10 & 0x250FD5;
    *(_DWORD *)(a1 + 376) = v11;
    v12 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v12;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a5 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v13 = 35;
      if ( *(_WORD *)(a3 + 56) == 51 )
        v13 = 51;
    }
    else
    {
      *(_WORD *)(a1 + 392) = 24;
      v13 = 16;
    }
    *(_WORD *)(a1 + 368) = v13;
    if ( a5 == 1 )
    {
      if ( v13 == 35 )
        v12 = (unsigned int)v12;
      else
        v12 = v12 << 16 >> 16;
    }
    *(_QWORD *)(a1 + 360) = v12;
  }
  if ( (a4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(a3 + 160);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a3 + 144);
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a3 + 168);
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a3 + 176);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a3 + 216);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 224);
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a3 + 232);
    *(_QWORD *)(a2 + 304) = *(_QWORD *)(a3 + 240);
  }
  if ( (a4 & 0x100040) == 0x100040 && a5 == 1 )
  {
    v25 = *(int *)(a3 + 1248) + a3 + 720;
    SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
    if ( !SparePtr )
      goto LABEL_45;
    v28 = (_QWORD *)*SparePtr;
    if ( *SparePtr )
    {
      do
      {
        SparePtr = v28;
        v28 = (_QWORD *)*v28;
      }
      while ( v28 );
    }
    v27 = SparePtr[5];
    if ( v27 )
      KiCopyXStateArea(v27, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, v25);
    else
LABEL_45:
      RtlXRestoreS(
        *(int *)(a3 + 1248) + a3 + 720,
        (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( (a4 & 0x100080) == 0x100080 && !a5 )
  {
    v29 = *(int *)(a3 + 1256);
    _R14 = *(_QWORD **)(a1 + 216);
    _RCX = *(_QWORD *)(v29 + a3 + 1240);
    if ( _R14[1] != _RCX )
    {
      if ( (*(_BYTE *)(v29 + a3 + 1250) & 1) != 0 )
        __asm { wrssq   qword ptr [r14+8], rcx }
      else
        VslKernelShadowStackAssist(3, (_DWORD)_R14, 0, 0, _RCX, 4);
    }
    if ( (*(_BYTE *)(v29 + a3 + 1250) & 2) != 0 )
    {
      _RAX = *_R14 + 8LL;
      __asm { wrssq   qword ptr [r14], rax }
    }
  }
  if ( (a4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    if ( a5 == 1 )
    {
      v6 = 1;
      *(_DWORD *)(a3 + 280) = _mm_getcsr();
      *(_WORD *)(a3 + 256) &= 0x1F3Fu;
    }
  }
  if ( (a4 & 0x100010) == 0x100010 )
  {
    v14 = *(_QWORD *)(a3 + 72);
    if ( a5 )
    {
      v15 = 0LL;
      if ( v14 <= 0x7FFFFFFEFFFFLL )
        v15 = *(_QWORD *)(a3 + 72);
      v14 = v15;
    }
    *(_QWORD *)(a1 + 216) = v14;
    v16 = *(_QWORD *)(a3 + 80);
    if ( a5 )
    {
      v17 = 0LL;
      if ( v16 <= 0x7FFFFFFEFFFFLL )
        v17 = *(_QWORD *)(a3 + 80);
      v16 = v17;
    }
    *(_QWORD *)(a1 + 224) = v16;
    v18 = *(_QWORD *)(a3 + 88);
    if ( a5 )
    {
      v19 = 0LL;
      if ( v18 <= 0x7FFFFFFEFFFFLL )
        v19 = *(_QWORD *)(a3 + 88);
      v18 = v19;
    }
    *(_QWORD *)(a1 + 232) = v18;
    v20 = *(_QWORD *)(a3 + 96);
    if ( a5 )
    {
      v21 = 0LL;
      if ( v20 <= 0x7FFFFFFEFFFFLL )
        v21 = *(_QWORD *)(a3 + 96);
      v20 = v21;
    }
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 240) = v20;
    v22 = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
    *(_QWORD *)(a1 + 256) = v22;
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (v22 & 0x355) != 0 )
        _interlockedbittestandset(&CurrentThread->Header.Lock, 0x18u);
      else
        _interlockedbittestandreset(&CurrentThread->Header.Lock, 0x18u);
    }
  }
  return v6;
}
