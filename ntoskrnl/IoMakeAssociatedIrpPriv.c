/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x1402B19E8
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x1402B19D0 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x1403A72B0 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEnabled @ 0x1402B1D90 (IopIsActivityTracingEnabled.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 *     IoSetActivityIdIrp @ 0x1402B2080 (IoSetActivityIdIrp.c)
 *     IopSetDriverFlagsExtension @ 0x1402B22A0 (IopSetDriverFlagsExtension.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  char IsActivityTracingEnabled; // al
  unsigned int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v10; // di
  __int64 v11; // rsi
  __int64 v12; // r12
  __int16 v13; // di
  _GENERAL_LOOKASIDE *L; // rsi
  PSLIST_ENTRY v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 ApcStateIndex; // cl
  __int64 v19; // rcx
  _SLIST_ENTRY **v20; // rdx
  __int64 result; // rax
  char v22; // [rsp+80h] [rbp+18h]
  char v23; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v23 = 0;
  IsActivityTracingEnabled = IopIsActivityTracingEnabled(a1, a2, a3, a2);
  v6 = 6;
  if ( IsActivityTracingEnabled && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v6)
    || (unsigned __int8)IopIrpHasExtensionType(v7, 8LL)
    || v8 && (*(_DWORD *)(v8 + 48) & 0x8000000) != 0 )
  {
    v3 += 2;
    v23 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  v10 = 72 * v3 + 208;
  if ( v3 > (char)IopLargeIrpStackLocations )
    goto LABEL_28;
  v22 = 4;
  if ( v3 == 1 )
  {
    v12 = 0LL;
    v11 = 2048LL;
  }
  else
  {
    if ( v3 <= (char)IopMediumIrpStackLocations )
    {
      v11 = 2064LL;
      v12 = 1LL;
      v13 = 9 * (char)IopMediumIrpStackLocations;
    }
    else
    {
      v11 = 2080LL;
      v12 = 2LL;
      v13 = 9 * (char)IopLargeIrpStackLocations;
    }
    v10 = 8 * v13 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v11);
  ++L->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v15 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v12].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) == 0 )
  {
    if ( v15 )
      goto LABEL_17;
LABEL_28:
    result = ExAllocatePool2(64LL, v10, 544240201LL);
    v15 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    goto LABEL_17;
  }
  if ( !v15 )
    goto LABEL_28;
  if ( *((_QWORD *)&v15[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * v3 + 208) )
  {
    ++L->TotalFrees;
    ExFreePoolWithTag(v15, 0);
    goto LABEL_28;
  }
  v10 = *((_WORD *)&v15[3].Next + 4);
LABEL_17:
  memset(v15, 0, v10);
  BYTE2(v15[4].Next) = v3;
  LOWORD(v15->Next) = 6;
  BYTE3(v15[4].Next) = v3 + 1;
  WORD1(v15->Next) = v10;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v15[2].Next + 1) = v15 + 2;
  v15[2].Next = v15 + 2;
  BYTE6(v15[4].Next) = ApcStateIndex;
  v19 = LODWORD(v15[1].Next) | 8u;
  v20 = &v15[4 * v3 + 13].Next + v3;
  *((_QWORD *)&v15[11].Next + 1) = v20;
  WORD2(v15->Next) = CurrentPrcb->Number;
  LODWORD(v15[1].Next) = v19;
  LODWORD(v15[1].Next) = v19 | *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v15[4].Next) |= v22;
  *((_QWORD *)&v15[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v15[1].Next + 1) = a1;
  if ( v23 )
  {
    BYTE3(v15[4].Next) -= 2;
    BYTE2(v15[4].Next) -= 2;
    *((_QWORD *)&v15[11].Next + 1) = v20 - 18;
    *((_QWORD *)&v15[12].Next + 1) = v20 - 18;
  }
  if ( (unsigned __int8)IopIsActivityTracingEnabled(v19, v20, v16, v17)
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
  {
    IoSetActivityIdIrp(v15, *(_QWORD *)(a1 + 200) + 24LL);
  }
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL), *((_QWORD *)&v15[9].Next + 1), 1LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 8LL) )
    IopSetDriverFlagsExtension(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  return (__int64)v15;
}
