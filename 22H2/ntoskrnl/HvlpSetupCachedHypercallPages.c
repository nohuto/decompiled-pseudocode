/*
 * XREFs of HvlpSetupCachedHypercallPages @ 0x1404F3CA8
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CF458 (HvlPhase1Initialize.c)
 *     HvlInitializeProcessor @ 0x1407A0160 (HvlInitializeProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140301020 (MmGetPhysicalAddress.c)
 *     InitializeSListHead @ 0x140352660 (InitializeSListHead.c)
 *     InterlockedPushListSList @ 0x140407060 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY __fastcall HvlpSetupCachedHypercallPages(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // r14
  __int64 v2; // rdi
  PHYSICAL_ADDRESS *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v7; // rax

  v1 = a1 + 2100;
  v2 = a1[2104].Alignment + 0x2000;
  InitializeSListHead(a1 + 2100);
  v3 = (PHYSICAL_ADDRESS *)v2;
  v4 = (char *)v2;
  v5 = 3LL;
  do
  {
    PhysicalAddress = MmGetPhysicalAddress(v4);
    v4 += 4096;
    v3[2] = PhysicalAddress;
    v3->QuadPart = (LONGLONG)v4;
    v3 += 512;
    --v5;
  }
  while ( v5 );
  v7 = MmGetPhysicalAddress((PVOID)(v2 + 12288));
  *(_QWORD *)(v2 + 12288) = 0LL;
  *(PHYSICAL_ADDRESS *)(v2 + 12304) = v7;
  return InterlockedPushListSList(v1, (PSLIST_ENTRY)v2, (PSLIST_ENTRY)(v2 + 12288), 4u);
}
