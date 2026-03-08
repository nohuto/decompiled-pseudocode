/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x14058779C
 * Callers:
 *     PoFxUnregisterDevice @ 0x140981B50 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PopFxDestroyDeviceCommon @ 0x140587740 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rcx
  __int64 i; // rsi
  __int64 v10; // rbp

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x78466F50u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x78466F50u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x78466F50u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  v7 = *(void **)(a2 + 1200);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D584650u);
  v8 = *(_QWORD **)(a2 + 832);
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 828); i = (unsigned int)(i + 1) )
    {
      v10 = v8[i];
      if ( *(_QWORD *)(v10 + 424) )
      {
        ExFreePoolWithTag(*(PVOID *)(v10 + 424), 0x4D584650u);
        *(_QWORD *)(v10 + 424) = 0LL;
        v8 = *(_QWORD **)(a2 + 832);
      }
    }
    ExFreePoolWithTag(v8, 0x4D584650u);
    *(_QWORD *)(a2 + 832) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( a1 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFBF);
  PopFxDestroyDeviceCommon((PVOID *)a2, 1);
}
