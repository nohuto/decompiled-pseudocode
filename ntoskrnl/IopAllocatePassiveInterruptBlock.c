/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x1408472F4
 * Callers:
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IopInsertPassiveInterruptBlock @ 0x14039E0A0 (IopInsertPassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14039E808 (IopFindPassiveInterruptBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, _OWORD *a2)
{
  bool v2; // zf
  int v5; // eax
  unsigned int v6; // esi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  int v9; // eax
  int inserted; // edi
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 == 1;
  v12 = 0;
  if ( v2 && ((v5 = a1[2]) == 0 || v5 == 3) )
  {
    v6 = a1[3];
    if ( IopFindPassiveInterruptBlock(v6) )
    {
      return 0;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 200LL, 1651077195LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_DWORD *)(Pool2 + 16) = a1[2];
        *(_DWORD *)(Pool2 + 20) = v6;
        *(_DWORD *)(Pool2 + 32) = a1[6];
        *(_OWORD *)(Pool2 + 40) = *a2;
        v9 = a1[2];
        if ( v9 )
        {
          if ( v9 == 3 )
            *(_BYTE *)(v8 + 28) = 0;
        }
        else
        {
          *(_DWORD *)(v8 + 24) = a1[16];
          *(_BYTE *)(v8 + 28) = ((__int64 (__fastcall *)(_QWORD))off_140C01B90[0])(0LL);
        }
        KeInitializeEvent((PRKEVENT)(v8 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v8 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v8);
        *(_QWORD *)(v8 + 56) = 0LL;
        *(_QWORD *)(v8 + 72) = 0LL;
        *(_QWORD *)(v8 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v8 + 96) = v8;
        *(_BYTE *)(v8 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v8, &v12);
        if ( inserted < 0 || !v12 )
          ExFreePoolWithTag((PVOID)v8, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
