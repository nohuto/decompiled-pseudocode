/*
 * XREFs of NdisMFreeMapRegisters @ 0x1C0137860
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0060264 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __stdcall NdisMFreeMapRegisters(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // r15
  unsigned int v5; // r14d
  KIRQL v6; // bp

  v1 = *((_QWORD *)MiniportAdapterHandle + 63);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Du,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      MiniportAdapterHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) != 0 && *(_QWORD *)(v1 + 136) )
  {
    v3 = (unsigned int)(*(_DWORD *)(v1 + 52) - 2) >> 12;
    v4 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL) + 56LL);
    v5 = 0;
    v6 = KfRaiseIrql(2u);
    while ( v5 < *(unsigned __int16 *)(v1 + 154) )
      v4(*(_QWORD *)(v1 + 24), *(_QWORD *)(*(_QWORD *)(v1 + 136) + 16LL * v5++), v3 + 2);
    if ( v6 != 2 )
      KeLowerIrql(v6);
    ExFreePoolWithTag(*(PVOID *)(v1 + 136), 0);
    *(_QWORD *)(v1 + 136) = 0LL;
    ndisDereferenceDmaAdapter((PVOID)v1);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Eu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      MiniportAdapterHandle);
}
