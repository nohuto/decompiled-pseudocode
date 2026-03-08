/*
 * XREFs of ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0098E0C
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0098DC0 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // r9
  _DWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // edx
  DirectComposition::CEvent *v10; // rcx
  _QWORD *v11; // rax
  struct DirectComposition::CBatch *v12; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  _DWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  v15 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, (void **)&v15) )
  {
    v5 = v15;
    *v15 = 36;
    *(_OWORD *)(v5 + 1) = 0LL;
    *(_OWORD *)(v5 + 5) = 0LL;
    v5[1] = 60;
    v5[2] = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 8);
    if ( v6 )
      LODWORD(v6) = *(_DWORD *)(v6 + 32);
    v5[3] = v6;
    v5[4] = *((_DWORD *)this + 18);
    v5[5] = *((_DWORD *)this + 19);
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
    {
      v8 = v5 + 7;
      if ( (int)OpenDwmHandle(*(PVOID *)(v7 + 8), (POBJECT_TYPE)ExEventObjectType, 2u, v4, v14, (PHANDLE)(v5 + 7)) < 0 )
      {
        *v8 = 0LL;
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 11) + 8LL), 1, 0);
      }
      v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
      if ( v10 )
        DirectComposition::CEvent::`scalar deleting destructor'(v10, v9);
      *((_QWORD *)this + 11) = 0LL;
    }
    v11 = (_QWORD *)*((_QWORD *)this + 12);
    if ( v11 )
    {
      v12 = (*a2)[1];
      *v11 = *((_QWORD *)v12 + 26);
      *((_QWORD *)v12 + 26) = v11;
      *((_QWORD *)this + 12) = 0LL;
    }
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return 0;
}
