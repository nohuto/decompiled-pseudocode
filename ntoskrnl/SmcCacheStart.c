/*
 * XREFs of SmcCacheStart @ 0x1409D812C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D50AC (SmcProcessCreateRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x14035A46C (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D75D8 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409D79A8 (SmKmVolumeQueryUniqueId.c)
 */

__int64 __fastcall SmcCacheStart(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rsi
  int v6; // edx
  int UniqueId; // ebx
  __int64 v10; // rax
  unsigned int v11; // r8d
  struct _DEVICE_OBJECT *v12; // rcx
  int v13; // eax
  int v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF

  LODWORD(v19) = 0;
  v4 = 0LL;
  Object = 0LL;
  v6 = *(_DWORD *)(a3 + 8);
  if ( !v6 || ((v6 - 1) & v6) != 0 )
  {
    UniqueId = -1073741811;
  }
  else
  {
    if ( !*(_QWORD *)a3 )
      return (unsigned int)-1073741811;
    if ( *(_QWORD *)a3 > 0x800000000uLL )
      return (unsigned int)-1073739516;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)a3;
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 16);
    LODWORD(v16) = *(_DWORD *)(a3 + 12) & 1;
    v10 = *(_QWORD *)a3;
    v11 = *(_DWORD *)(a2 + 24);
    v18 = v10;
    UniqueId = SmKmStoreFileCreate(
                 a2 + 4,
                 a4,
                 v11,
                 v11,
                 &v18,
                 v15,
                 a1,
                 (unsigned int *)&v16,
                 (_OWORD *)(a2 + 40),
                 (_DWORD *)(a2 + 4),
                 (_DWORD *)(a2 + 8),
                 (__int64)&v19);
    if ( UniqueId < 0 )
      return (unsigned int)UniqueId;
    if ( (-(__int64)((a4 & 1) != 0) & a4 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && v18 != *(_QWORD *)a3 )
      return (unsigned int)-1073741792;
    *(_DWORD *)(a2 + 28) = v16 & 1 | *(_DWORD *)(a2 + 28) & 0xFFFFFFFC | (2 * (v19 & 1));
    v12 = *(struct _DEVICE_OBJECT **)(a2 + 64);
    v19 = (__int64)v12;
    if ( v12 )
      goto LABEL_14;
    v13 = SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 48), &Object, (PDEVICE_OBJECT *)&v19);
    v4 = Object;
    UniqueId = v13;
    if ( v13 >= 0 )
    {
      v12 = (struct _DEVICE_OBJECT *)v19;
LABEL_14:
      UniqueId = SmKmVolumeQueryUniqueId(v12, (unsigned __int16 *)(a2 + 552), 0x200u);
      if ( UniqueId >= 0 )
      {
        UniqueId = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a2 + 104), *(_DWORD *)(a2 + 24));
        if ( UniqueId >= 0 )
          UniqueId = 0;
      }
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)UniqueId;
}
