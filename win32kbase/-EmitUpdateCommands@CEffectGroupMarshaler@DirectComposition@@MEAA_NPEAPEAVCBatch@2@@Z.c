/*
 * XREFs of ?EmitUpdateCommands@CEffectGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C780
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOpacityCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C7F0 (-EmitSetOpacityCommand@CEffectGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061EBC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // ebx
  int v5; // eax
  char *v7; // rcx
  char *v8; // rcx
  __int64 v9; // rax
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CEffectGroupMarshaler::EmitSetOpacityCommand(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x100) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v7 = (char *)v10;
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 504;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 19);
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v8 = (char *)v10;
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 505;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      v9 = *((_QWORD *)this + 10);
      if ( v9 )
        v4 = *(_DWORD *)(v9 + 32);
      *((_DWORD *)v8 + 3) = v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    LOBYTE(v4) = 1;
  }
  return v4;
}
