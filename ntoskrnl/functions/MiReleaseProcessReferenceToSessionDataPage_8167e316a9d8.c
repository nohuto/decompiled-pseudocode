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
