__int64 __fastcall RtlCaptureContext2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int128 v20; // xmm5
  __int128 v21; // xmm6
  __int128 v22; // xmm7
  __int128 v23; // xmm8
  __int128 v24; // xmm9
  __int128 v25; // xmm10
  __int128 v26; // xmm11
  __int128 v27; // xmm12
  __int128 v28; // xmm13
  __int128 v29; // xmm14
  __int128 v30; // xmm15
  __int64 result; // rax
  unsigned int v33; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v35; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 120) = v4;
  *(_QWORD *)(a1 + 128) = a1;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 184) = a3;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 200) = v9;
  *(_QWORD *)(a1 + 208) = v10;
  *(_OWORD *)(a1 + 416) = v15;
  *(_OWORD *)(a1 + 432) = v16;
  *(_OWORD *)(a1 + 448) = v17;
  *(_OWORD *)(a1 + 464) = v18;
  *(_OWORD *)(a1 + 480) = v19;
  *(_OWORD *)(a1 + 496) = v20;
  *(_WORD *)(a1 + 56) = __CS__;
  *(_WORD *)(a1 + 58) = __DS__;
  *(_WORD *)(a1 + 60) = __ES__;
  *(_WORD *)(a1 + 66) = __SS__;
  *(_WORD *)(a1 + 62) = __FS__;
  *(_WORD *)(a1 + 64) = __GS__;
  *(_QWORD *)(a1 + 144) = v5;
  *(_QWORD *)(a1 + 160) = v6;
  *(_QWORD *)(a1 + 168) = v8;
  *(_QWORD *)(a1 + 176) = v7;
  *(_QWORD *)(a1 + 216) = v11;
  *(_QWORD *)(a1 + 224) = v12;
  *(_QWORD *)(a1 + 232) = v13;
  *(_QWORD *)(a1 + 240) = v14;
  *(_DWORD *)(a1 + 258) = 0;
  *(_OWORD *)(a1 + 512) = v21;
  *(_OWORD *)(a1 + 528) = v22;
  *(_OWORD *)(a1 + 544) = v23;
  *(_OWORD *)(a1 + 560) = v24;
  *(_OWORD *)(a1 + 576) = v25;
  *(_OWORD *)(a1 + 592) = v26;
  *(_OWORD *)(a1 + 608) = v27;
  *(_OWORD *)(a1 + 624) = v28;
  *(_OWORD *)(a1 + 640) = v29;
  *(_OWORD *)(a1 + 656) = v30;
  *(_DWORD *)(a1 + 280) = _mm_getcsr();
  *(_DWORD *)(a1 + 52) = _mm_getcsr();
  *(_QWORD *)(a1 + 152) = &v35;
  *(_QWORD *)(a1 + 248) = retaddr;
  result = v33;
  *(_DWORD *)(a1 + 68) = v33;
  *(_DWORD *)(a1 + 48) &= 0x100080u;
  if ( *(_DWORD *)(a1 + 48) == 1048704 )
  {
    __asm { rdsspq  rdx }
    if ( _RDX )
      _RDX += 8LL;
    result = a1 + *(int *)(a1 + 1256) + 1232;
    *(_QWORD *)result = _RDX;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(result + 16) = 0LL;
    *(_WORD *)(result + 16) = *(_WORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 48) |= 0x10000Fu;
  return result;
}
