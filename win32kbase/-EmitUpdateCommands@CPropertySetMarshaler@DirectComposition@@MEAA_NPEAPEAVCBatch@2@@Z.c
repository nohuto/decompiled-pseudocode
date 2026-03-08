/*
 * XREFs of ?EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062470
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00624D8 (-EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062558 (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5668 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitUpdateCommands(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CPropertyChangeResourceMarshaler::EmitSetPropertyIdSet(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v6 = (char *)v7;
      *(_DWORD *)v7 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 310;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 26);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CPropertySetMarshaler::EmitSetProperties(this, a2) )
      return 1;
  }
  return v4;
}
