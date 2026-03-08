/*
 * XREFs of ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265024
 * Callers:
 *     ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02651A0 (-EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitCreate(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v3; // rcx
  __int64 v4; // r9
  char *v5; // rdx
  int Object; // [rsp+20h] [rbp-18h]
  PVOID v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  v9 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
  {
    v10 = 0LL;
    v3 = (void *)*((_QWORD *)this + 9);
    if ( v3 )
    {
      v8 = 0LL;
      if ( ObReferenceObjectByHandle(v3, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &v8, 0LL) >= 0 )
        OpenDwmHandle(v8, (POBJECT_TYPE)ExEventObjectType, 2u, v4, Object, &v10);
    }
    v5 = (char *)v9;
    *(_DWORD *)v9 = 28;
    *(_OWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *((_DWORD *)v5 + 1) = 170;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v5 + 5) = *((_DWORD *)this + 15);
    *((_DWORD *)v5 + 6) = *((_DWORD *)this + 14);
    *(_QWORD *)(v5 + 12) = v10;
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
