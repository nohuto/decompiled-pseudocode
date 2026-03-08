/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14072665C
 * Callers:
 *     MiDereferenceSessionGlobal @ 0x1406350F4 (MiDereferenceSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x14063510C (MiGetNextSessionGlobal.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x140A2F890 (MiSessionObjectDelete.c)
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     MiPartitionIdToPointer @ 0x14036CC64 (MiPartitionIdToPointer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140635284 (MiUnlinkSessionList.c)
 *     MiFreeSessionId @ 0x140A2F7B4 (MiFreeSessionId.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseProcessReferenceToSessionDataPage(_QWORD *P)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  _QWORD **v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 3, 0xFFFFFFFF) == 1 )
  {
    MiUnlinkSessionList(P);
    v2 = *((_DWORD *)P + 2);
    v3 = MiPartitionIdToPointer(*((_WORD *)P + 183));
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v6 = 0;
      v9 = 0;
      v7 = &v4;
      v5 = v2;
      v4 = P;
      v8 = 12;
      EtwTraceKernelEvent((__int64)&v7, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    PsDereferencePartition(*(_QWORD *)(v3 + 200));
    MiFreeSessionId(v2);
    ExFreePoolWithTag(P, 0);
  }
}
