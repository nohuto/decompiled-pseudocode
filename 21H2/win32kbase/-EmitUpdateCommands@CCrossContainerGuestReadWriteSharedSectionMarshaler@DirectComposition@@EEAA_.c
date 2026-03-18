/*
 * XREFs of ?EmitUpdateCommands@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0238630
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02386DC (-PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@.c)
 */

char __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::EmitUpdateCommands(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  _DWORD *v5; // r8
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x1CuLL, (void **)&v7) )
  {
    v5 = v7;
    *v7 = 28;
    *(_OWORD *)(v5 + 1) = 0LL;
    *(_QWORD *)(v5 + 5) = 0LL;
    v5[1] = 123;
    v5[2] = *((_DWORD *)this + 8);
    *(_OWORD *)(v5 + 3) = *((_OWORD *)this + 5);
    return DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::PrivateEmitUpdateCommand(this, a2);
  }
  return v3;
}
