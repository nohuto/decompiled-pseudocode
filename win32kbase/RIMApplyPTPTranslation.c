/*
 * XREFs of RIMApplyPTPTranslation @ 0x1C00EFD5E
 * Callers:
 *     rimTransformGeometry @ 0x1C00F1872 (rimTransformGeometry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C00EFCCC (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 */

void __fastcall RIMApplyPTPTranslation(struct tagHID_POINTER_DEVICE_INFO *a1, __int64 a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  struct tagPOINT v6; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2095);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 4), (struct tagPOINT *)(a2 + 120));
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 120);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 12), (struct tagPOINT *)(a2 + 32));
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 28);
    if ( v5 )
    {
      v6 = 0LL;
      TransformPTPLogicalUnitsToPhysical(a1, (struct tagPOINT)__PAIR64__(v5, v4), &v6);
      *(struct tagPOINT *)(a2 + 40) = v6;
    }
  }
}
