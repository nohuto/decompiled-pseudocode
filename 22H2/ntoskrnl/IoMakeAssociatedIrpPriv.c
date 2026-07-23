/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x1402E6098
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x1402E6080 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x1405058D0 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402E6690 (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEnabled @ 0x1402E66C0 (IopIsActivityTracingEnabled.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402E66DC (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402E6758 (IopSetDriverFlagsExtension.c)
 *     IoSetActivityIdIrp @ 0x140378C70 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  char IsActivityTracingEnabled; // al
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v13; // di
  __int64 v14; // rsi
  __int64 v15; // r12
  __int16 v16; // di
  _GENERAL_LOOKASIDE *L; // rsi
  PSLIST_ENTRY v18; // rbx
  __int64 v19; // r8
  unsigned __int8 ApcStateIndex; // cl
  _SLIST_ENTRY **v21; // rdx
  __int16 Number; // ax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  _SLIST_ENTRY *result; // rax
  char v29; // [rsp+80h] [rbp+18h]
  char v30; // [rsp+88h] [rbp+20h]

  v30 = 0;
  IsActivityTracingEnabled = IopIsActivityTracingEnabled(a1, a2, a2);
  v7 = 6LL;
  if ( IsActivityTracingEnabled && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL, v6, 6LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, (unsigned int)v7, v6, v7)
    || (unsigned __int8)IopIrpHasExtensionType(v8, 8LL, v9, v10)
    || v11 && (*(_DWORD *)(v11 + 48) & 0x8000000) != 0 )
  {
    a3 += 2;
    v30 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v29 = 0;
  v13 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_29;
  v29 = 4;
  if ( a3 == 1 )
  {
    v15 = 0LL;
    v14 = 2048LL;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v14 = 2064LL;
      v15 = 1LL;
      v16 = 9 * (char)IopMediumIrpStackLocations;
    }
    else
    {
      v14 = 2080LL;
      v15 = 2LL;
      v16 = 9 * (char)IopLargeIrpStackLocations;
    }
    v13 = 8 * v16 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v14);
  ++L->TotalAllocates;
  v18 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v18 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v15].L;
    ++L->TotalAllocates;
    v18 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v18 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v18 )
      goto LABEL_29;
    if ( *((_QWORD *)&v18[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v13 = *((_WORD *)&v18[3].Next + 4);
      goto LABEL_17;
    }
    ++L->TotalFrees;
    ExFreePoolWithTag(v18, 0);
LABEL_29:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x20707249u);
    v18 = result;
    if ( !result )
      return result;
    goto LABEL_18;
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_29;
LABEL_18:
  memset(v18, 0, v13);
  BYTE2(v18[4].Next) = a3;
  LOWORD(v18->Next) = 6;
  BYTE3(v18[4].Next) = a3 + 1;
  WORD1(v18->Next) = v13;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v18[2].Next + 1) = v18 + 2;
  v18[2].Next = v18 + 2;
  BYTE6(v18[4].Next) = ApcStateIndex;
  v21 = &v18[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v18[11].Next + 1) = v21;
  Number = CurrentPrcb->Number;
  LODWORD(v18[1].Next) |= 8u;
  WORD2(v18->Next) = Number;
  v23 = *(_DWORD *)(a1 + 16) & 0xE0002;
  LODWORD(v18[1].Next) |= v23;
  HIBYTE(v18[4].Next) |= v29;
  *((_QWORD *)&v18[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v18[1].Next + 1) = a1;
  if ( v30 )
  {
    BYTE3(v18[4].Next) -= 2;
    BYTE2(v18[4].Next) -= 2;
    *((_QWORD *)&v18[11].Next + 1) = v21 - 18;
    *((_QWORD *)&v18[12].Next + 1) = v21 - 18;
  }
  if ( (unsigned __int8)IopIsActivityTracingEnabled(v23, v21, v19)
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL, v24, v25) )
  {
    IoSetActivityIdIrp(v18, *(_QWORD *)(a1 + 200) + 24LL);
  }
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL, v24, v25) )
    IopSetDiskIoAttributionExtension(v18, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL), *((_QWORD *)&v18[9].Next + 1), 1LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 8LL, v26, v27) )
    IopSetDriverFlagsExtension(v18, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  return v18;
}
