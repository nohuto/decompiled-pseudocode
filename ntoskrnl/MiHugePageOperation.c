/*
 * XREFs of MiHugePageOperation @ 0x14061E158
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x1403BF1C4 (MiGetHugeRangeFromNode.c)
 *     MiHotAddHugeRange @ 0x140A2B158 (MiHotAddHugeRange.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x140244548 (MiCreateUltraThreadContext.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1402A9850 (MiAllocateAcceleratorDescriptor.c)
 *     MiSelectEngine @ 0x1402B4AF8 (MiSelectEngine.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeZeroPages @ 0x14041BBF0 (KeZeroPages.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteAcceleratorDescriptor @ 0x14065241C (MiDeleteAcceleratorDescriptor.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 */

void __fastcall MiHugePageOperation(__int64 a1, __int64 a2)
{
  unsigned __int64 ValidPte; // rdi
  int v4; // esi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 *v7; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __m128i *v18; // rbx
  unsigned __int64 v19; // rbx
  int v20; // r14d
  __int64 v21; // r8
  bool v22; // zf
  unsigned __int8 v23; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // edx
  unsigned __int8 v27; // cl
  _DWORD *v28; // r9
  __int64 v29; // rdx
  unsigned __int64 *v30; // rbx
  int v31; // r14d
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  bool v34; // zf
  unsigned __int64 v35; // rbx
  int v36; // edi
  __int64 v37; // r8
  bool v38; // zf
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  int v43; // [rsp+24h] [rbp-A5h] BYREF
  unsigned __int64 *MmInternal; // [rsp+28h] [rbp-A1h]
  __int64 v45; // [rsp+30h] [rbp-99h]
  unsigned int v46; // [rsp+38h] [rbp-91h] BYREF
  __int64 v47; // [rsp+40h] [rbp-89h] BYREF
  __int64 v48; // [rsp+48h] [rbp-81h]
  __int128 v49; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v50[16]; // [rsp+60h] [rbp-69h] BYREF

  v45 = a1;
  v49 = 0LL;
  memset(v50, 0, sizeof(v50));
  ValidPte = 0LL;
  v4 = *((_DWORD *)MiSearchNumaNodeTable((unsigned __int64)(a2 & 0x3FFFFF) << 18) + 2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
    v4 + 1,
    (__int64)&v49);
  MmInternal = 0LL;
  CurrentIrql = 17;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v50, (__int64)&v49, 1, 0) )
  {
    UltraMapping = MiGetUltraMapping(v50, 0, 0x40000LL, 0);
    v7 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
  }
  else
  {
    v7 = 0LL;
    UltraMapping = MmMapIoSpaceEx((unsigned __int64)(a2 & 0x3FFFFF) << 30, 0x40000000LL, 4u);
    if ( UltraMapping )
      goto LABEL_24;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v9) = 4;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
    UltraMapping = MiGetUltraMapping(MmInternal + 1544, 0, 0x40000LL, 0);
    v7 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    MmInternal[1543] = (unsigned __int64)v7;
  }
  if ( v7 )
  {
    ValidPte = MiMakeValidPte((unsigned __int64)v7, (unsigned __int64)(a2 & 0x3FFFFF) << 18, -2080374780);
    v10 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( MiPteHasShadow() )
      {
        v12 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v13 = (ValidPte & 1) == 0;
          goto LABEL_17;
        }
      }
      else
      {
        v12 = 0;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = (ValidPte & 1) == 0;
LABEL_17:
          if ( !v13 )
            v10 = ValidPte | 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      v12 = 0;
    }
    *v7 = v10;
    if ( v12 )
      MiWritePteShadow((__int64)v7, v10, v11);
  }
LABEL_24:
  if ( KeGetCurrentIrql() != 2 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 && (MiFlags & 0x30) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
      && (unsigned int)MiZeroHugeRangeCore(v45, UltraMapping, a2, 0LL) )
    {
      goto LABEL_77;
    }
  }
  v43 = 0;
  v46 = 0;
  v47 = 0LL;
  v15 = 0LL;
  v45 = 0LL;
  if ( !(unsigned int)MiSelectEngine(v4, 0, &v43, &v46)
    && v43 == v4
    && (unsigned int)MiAllocateAcceleratorDescriptor(0LL, v43, v16, &v47) )
  {
    v45 = v47 + 32;
  }
  v17 = 0x40000000LL;
  if ( CurrentIrql < 2u && v7 )
    v17 = 0x200000LL;
  v18 = (__m128i *)UltraMapping;
  while ( 1 )
  {
    KeZeroPages(v18, v17);
    v15 += v17;
    v48 = v15;
    if ( v15 == 0x40000000 )
      break;
    v18 = (__m128i *)((char *)v18 + v17);
    if ( KeShouldYieldProcessor() )
    {
      v19 = ZeroPte;
      v20 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v7) )
        goto LABEL_48;
      if ( MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_48;
        v22 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_48;
        v22 = (ZeroPte & 1) == 0;
      }
      if ( !v22 )
        v19 = ZeroPte | 0x8000000000000000uLL;
LABEL_48:
      *v7 = v19;
      if ( v20 )
        MiWritePteShadow((__int64)v7, v19, v21);
      MmInternal[1543] = 0LL;
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v28 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v27 == 2 )
          LODWORD(v29) = 4;
        else
          v29 = (-1LL << (v27 + 1)) & 4;
        v28[5] |= v29;
      }
      v30 = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
      MmInternal = v30;
      UltraMapping = MiGetUltraMapping(v30 + 1544, 0, 0x40000LL, 0);
      v7 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
      v31 = 0;
      v30[1543] = (unsigned __int64)v7;
      v32 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v7) )
      {
        if ( MiPteHasShadow() )
        {
          v31 = 1;
          if ( HIBYTE(word_140C6697C) )
            goto LABEL_72;
          v34 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_72;
          v34 = (ValidPte & 1) == 0;
        }
        if ( !v34 )
          v32 = ValidPte | 0x8000000000000000uLL;
      }
LABEL_72:
      *v7 = v32;
      if ( v31 )
        MiWritePteShadow((__int64)v7, v32, v33);
      v15 = v48;
      v18 = (__m128i *)(v17 + UltraMapping);
    }
  }
  if ( v45 )
    MiDeleteAcceleratorDescriptor(v45);
LABEL_77:
  if ( v7 )
  {
    v35 = ZeroPte;
    v36 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( MiPteHasShadow() )
      {
        v36 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v38 = (ZeroPte & 1) == 0;
LABEL_84:
          if ( !v38 )
            v35 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v38 = (ZeroPte & 1) == 0;
        goto LABEL_84;
      }
    }
    *v7 = v35;
    if ( v36 )
      MiWritePteShadow((__int64)v7, v35, v37);
    if ( CurrentIrql == 17 )
    {
      MiDeleteUltraThreadContext((__int64)v50);
    }
    else
    {
      MmInternal[1543] = 0LL;
      if ( KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v40);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    MmUnmapIoSpace((PVOID)UltraMapping, 0x40000000uLL);
  }
}
