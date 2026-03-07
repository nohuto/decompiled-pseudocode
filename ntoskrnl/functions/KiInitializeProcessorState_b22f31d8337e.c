__int64 __fastcall KiInitializeProcessorState(unsigned __int64 *a1, _QWORD *a2, __int64 a3)
{
  KPCR *Pcr; // rbx
  unsigned int v7; // edi
  __int64 v8; // r12
  unsigned __int16 Limit; // ax
  unsigned __int64 v10; // r13
  const void *v11; // rdx
  void *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  _OWORD *v20; // rcx
  int v21; // ecx
  _QWORD *v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  char v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // r9
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0

  Pcr = KeGetPcr();
  v7 = (((*(_DWORD *)(a3 + 28) - 1) << 6) + 49343) & 0xFFFFFFC0;
  memset(*(void **)(a3 + 8), 0, *(unsigned int *)(a3 + 16));
  v8 = *(_QWORD *)(a3 + 8);
  memset(a1, 0, 0x5C0uLL);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v10 = v8 + *(unsigned int *)(a3 + 36);
  a1[11] = v10;
  *((_WORD *)a1 + 43) = Limit;
  memmove(
    (void *)v10,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  v11 = KiBootProcessorIdt;
  *((_WORD *)a1 + 51) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v12 = (void *)(v8 + *(unsigned int *)(a3 + 40));
  a1[13] = (unsigned __int64)v12;
  memmove(v12, v11, (unsigned int)KiBootProcessorIdtSize);
  *(_BYTE *)(v8 + 82) = *(_BYTE *)(a3 + 24);
  v13 = v8;
  *(_DWORD *)(v8 + 420) = *(_DWORD *)(a3 + 24);
  v14 = 4LL;
  *(_DWORD *)(v8 + 452) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(v8 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v15 = (_QWORD *)(v10 - 8112 + 36);
  *(_QWORD *)(v10 - 8000) = v8;
  v16 = v7 + v8;
  *(_WORD *)(v10 + 66) = v10 - 8112;
  *(_BYTE *)(v10 + 68) = (unsigned int)(v10 - 8112) >> 16;
  *(_BYTE *)(v10 + 71) = (unsigned int)(v10 - 8112) >> 24;
  *(_DWORD *)(v10 + 72) = (v10 - 8112) >> 32;
  do
  {
    *v15 = *(_QWORD *)((char *)v15 + a3 - (v10 - 8112) + 60);
    ++v15;
    --v14;
  }
  while ( v14 );
  v17 = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(v17 - 40) = &KiExceptionDispatchOnExceptionStackContinue;
  v18 = *(_QWORD *)(a3 + 72);
  *(_QWORD *)(v13 + 33768) = v17 - 80;
  *(_QWORD *)(v13 + 35672) = v18;
  *(_QWORD *)(v10 - 8112 + 4) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 56LL);
  v19 = *(unsigned int *)(a3 + 20);
  v20 = (_OWORD *)((char *)&KiNodeInit + 304 * v19);
  if ( (_OWORD *)KeNodeBlock[v19] == v20 )
  {
    v30 = 2LL;
    v31 = (_OWORD *)v16;
    do
    {
      *v31 = *v20;
      v31[1] = v20[1];
      v31[2] = v20[2];
      v31[3] = v20[3];
      v31[4] = v20[4];
      v31[5] = v20[5];
      v31[6] = v20[6];
      v31 += 8;
      v32 = v20[7];
      v20 += 8;
      *(v31 - 1) = v32;
      --v30;
    }
    while ( v30 );
    v33 = *v20;
    KeNodeBlock[v19] = v16;
    *v31 = v33;
    v31[1] = v20[1];
    v31[2] = v20[2];
  }
  if ( !(unsigned int)KiEnableKvaShadowing(v13 + 384, v10 - 12208) )
    return 0LL;
  KiAssignProcessorNumberToPrcb(v13 + 384, (char *)(a3 + 32), *(_DWORD *)a3);
  v21 = *(unsigned __int8 *)(v13 + 592) | (*(unsigned __int8 *)(v13 + 593) << 14) | 0x3C00;
  *(_WORD *)(v10 + 80) = v21;
  *(_DWORD *)(v10 + 84) ^= (*(_DWORD *)(v10 + 84) ^ v21) & 0xF0000;
  v22 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) + 56LL) - 8LL);
  *v22 = 0LL;
  a1[61] = (unsigned __int64)KiSystemStartup;
  v23 = 0;
  a1[49] = (unsigned __int64)v22;
  a1[38] = 1572907LL;
  a1[46] = (unsigned __int64)a2;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  if ( KeSmapEnabled )
    v23 = 0x40000;
  *((_DWORD *)a1 + 77) = v23;
  v24 = __readcr0();
  *a1 = v24;
  v25 = __readcr3();
  a1[2] = v25 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v10 + 69) = -119;
  v26 = *(_BYTE *)(v10 + 69);
  if ( VslVsmEnabled )
    v26 = -117;
  *(_BYTE *)(v10 + 69) = v26;
  v27 = __readcr4();
  a1[3] = v27 & 0xFFFFFFFFFF7FFFFFuLL;
  v28 = *(_QWORD *)(a3 + 48);
  a2[16] = *(_QWORD *)(a3 + 64);
  a2[19] = v28;
  a2[18] = &KiInitialProcess;
  a2[17] = v13 + 384;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    *(_QWORD *)(a2[30] + 3712LL) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 1032LL);
    *(_QWORD *)(a2[30] + 3720LL) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a2[30] + 3728LL) = *(_QWORD *)(a3 + 224);
  }
  return v13 + 384;
}
