/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1403CD788
 * Callers:
 *     PopFxUnregisterDevice @ 0x1407B46BC (PopFxUnregisterDevice.c)
 *     PoFxUnregisterDevice @ 0x1407D52D0 (PoFxUnregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     PopFxDestroyDeviceCommon @ 0x1403CD8A4 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbp
  void *v11; // rcx

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
  v8 = *(void **)(a2 + 832);
  if ( v8 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)(a2 + 828) )
    {
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 832) + 8 * v9);
        v11 = *(void **)(v10 + 424);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0x4D584650u);
          *(_QWORD *)(v10 + 424) = 0LL;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(a2 + 828) );
      v8 = *(void **)(a2 + 832);
    }
    ExFreePoolWithTag(v8, 0x4D584650u);
    *(_QWORD *)(a2 + 832) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( a1 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFBF);
  return PopFxDestroyDeviceCommon((PVOID)a2);
}
