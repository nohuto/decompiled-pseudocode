__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  KPRIORITY v3; // eax
  PVOID *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  PVOID ModWriterEntry; // rax
  __int64 v13; // rdi
  __int16 *p_SpecialApcDisable; // rsi
  __int16 *v15; // r15
  __int64 v16; // rbp
  unsigned __int32 v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  _QWORD *v21; // rsi
  __int16 *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  __int64 *v26; // rax
  unsigned int v27; // [rsp+40h] [rbp-448h]
  int v28; // [rsp+50h] [rbp-438h]
  PVOID Object[18]; // [rsp+60h] [rbp-428h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+F0h] [rbp-398h] BYREF

  memset(&Object[1], 0, 0x88uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = Object;
  v28 = v3;
  v5 = 0LL;
  v6 = 16LL;
  do
  {
    v7 = (void *)(v5 + a1 + 7032);
    v5 += 24LL;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = 0xFFFFFFFFLL;
  Object[16] = (PVOID)(a1 + 104);
  Object[17] = (PVOID)(a1 + 832);
  v27 = -1;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  if ( (_DWORD)v8 == -1
    || (v9 = *(_QWORD *)(a1 + 17600), v10 = *(_QWORD *)(a1 + 17824), v9 <= v10)
    || v9 - v10 < 0x10 && !*(_DWORD *)(a1 + 828) )
  {
LABEL_20:
    v19 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    v8 = v19;
    v27 = v19;
    goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_7:
      v11 = *(unsigned int *)(a1 + 108);
      if ( !(_DWORD)v11 && (unsigned int)v8 < 0x10 && *(_QWORD *)(88LL * (unsigned int)v8 + a1 + 5328) == 0x3FFFFFFFFFLL )
        goto LABEL_20;
      if ( *(_QWORD *)(a1 + 17600) == *(_QWORD *)(a1 + 17824) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 664) >= *(_QWORD *)(a1 + 656) )
      {
        v13 = 0LL;
      }
      else
      {
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
        v13 = (__int64)ModWriterEntry;
        if ( ModWriterEntry )
        {
          memset(ModWriterEntry, 0, 0x108uLL);
          p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
          *(_QWORD *)v13 = 97LL;
          v15 = &CurrentThread->SpecialApcDisable;
          *(_QWORD *)(v13 + 192) = a1;
          v16 = a1 + 672;
LABEL_13:
          v17 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 664));
          if ( v17 > *(_DWORD *)(a1 + 668) )
            *(_DWORD *)(a1 + 668) = v17;
          *(_QWORD *)(v13 + 200) = 0LL;
          v18 = MiGatherMappedPages(a1, v27, v13);
          v8 = v27;
          if ( !v18 )
          {
            _InterlockedAdd((volatile signed __int32 *)(a1 + 664), 0xFFFFFFFF);
            if ( (*(_DWORD *)(v13 + 40) & 1) == 0 )
            {
              MiFreeModWriterEntry((_QWORD *)v13, 1u);
LABEL_18:
              v8 = v27;
              goto LABEL_4;
            }
            --*p_SpecialApcDisable;
            v26 = *(__int64 **)(v16 + 8);
            if ( *v26 != v16 )
LABEL_44:
              __fastfail(3u);
            *(_QWORD *)v13 = v16;
            *(_QWORD *)(v13 + 8) = v26;
            *v26 = v13;
            *(_QWORD *)(v16 + 8) = v13;
            v25 = (*v15)++ == -1;
            if ( v25
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
              goto LABEL_18;
            }
          }
          goto LABEL_4;
        }
      }
      v21 = (_QWORD *)(a1 + 672);
      v22 = &CurrentThread->SpecialApcDisable;
      --CurrentThread->SpecialApcDisable;
      v23 = *(__int64 **)(a1 + 672);
      if ( v23 == (__int64 *)(a1 + 672) )
      {
        *(_BYTE *)(a1 + 712) = 1;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 672);
        if ( (_QWORD *)v23[1] != v21 )
          goto LABEL_44;
        v24 = *v23;
        if ( *(_QWORD *)(v24 + 8) != v13 )
          goto LABEL_44;
        *v21 = v24;
        *(_QWORD *)(v24 + 8) = v21;
      }
      v15 = &CurrentThread->SpecialApcDisable;
      v25 = (*v22)++ == -1;
      v16 = a1 + 672;
      if ( v25
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
      if ( v13 )
        goto LABEL_13;
      KeWaitForGate(a1 + 688, 19LL, 0);
      v8 = v27;
    }
    if ( !(_DWORD)v11 )
      goto LABEL_20;
    if ( !*(_DWORD *)(a1 + 664) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 664) );
    v8 = v27;
  }
  MiDeleteMappedMdls(a1, v11, 17824LL, v8);
  return KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v28);
}
