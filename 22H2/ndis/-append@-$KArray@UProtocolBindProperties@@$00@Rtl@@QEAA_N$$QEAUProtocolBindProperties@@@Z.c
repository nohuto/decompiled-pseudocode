/*
 * XREFs of ?append@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z @ 0x1C01250FC
 * Callers:
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0126550 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?grow@?$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0125220 (-grow@-$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<ProtocolBindProperties,1>::append(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rdx
  __int64 v6; // rax

  result = Rtl::KArray<ProtocolBindProperties,1>::grow(a1, (unsigned int)(*(_DWORD *)(a1 + 4) + 1));
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 8) + ((unsigned __int64)*(unsigned int *)(a1 + 4) << 6);
    *(_OWORD *)v5 = *(_OWORD *)a2;
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(v5 + 16) = v6;
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(a2 + 28);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
    LODWORD(v6) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_DWORD *)(v5 + 40) = v6;
    result = 1;
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(a2 + 44);
    *(_QWORD *)(v5 + 48) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_BYTE *)(v5 + 56) = *(_BYTE *)(a2 + 56);
    *(_DWORD *)(v5 + 60) = *(_DWORD *)(a2 + 60);
    ++*(_DWORD *)(a1 + 4);
  }
  return result;
}
