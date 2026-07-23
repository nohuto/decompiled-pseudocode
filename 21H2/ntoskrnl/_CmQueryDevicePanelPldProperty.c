/*
 * XREFs of _CmQueryDevicePanelPldProperty @ 0x1407482E0
 * Callers:
 *     _CmUpdateDevicePanel @ 0x140747868 (_CmUpdateDevicePanel.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979000 (_CmUpdateDevicePanelInterface.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmQueryDevicePanelPldProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        PVOID *a6,
        int *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  PVOID v13; // r10
  int ObjectProperty; // ecx
  unsigned int v16; // eax
  PVOID PoolWithTag; // rax
  int v18; // edx
  _BYTE *v19; // r8
  unsigned int v20; // eax
  SIZE_T NumberOfBytes[2]; // [rsp+60h] [rbp-38h] BYREF

  *a8 = 0LL;
  *a9 = 0;
  v13 = *a6;
  NumberOfBytes[0] = 0LL;
  while ( 1 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       a3,
                       a4,
                       0LL,
                       a5,
                       (__int64)NumberOfBytes + 4,
                       (__int64)v13,
                       *a7,
                       (__int64)NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    v16 = NumberOfBytes[0];
    if ( LODWORD(NumberOfBytes[0]) <= *a7 )
      return (unsigned int)-1073741823;
    if ( *a6 )
    {
      ExFreePoolWithTag(*a6, 0);
      v16 = NumberOfBytes[0];
    }
    *a7 = v16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x52504E50u);
    *a6 = PoolWithTag;
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      ObjectProperty = -1073741801;
      break;
    }
  }
  if ( ObjectProperty < 0 )
    return (unsigned int)ObjectProperty;
  if ( HIDWORD(NumberOfBytes[0]) != 4099 || (v18 = NumberOfBytes[0]) == 0 )
    return (unsigned int)-1073741823;
  v19 = *a6;
  v20 = *(_DWORD *)*a6 & 0x7F;
  if ( v20
    && (v20 != 1 || LODWORD(NumberOfBytes[0]) >= 0x10)
    && (v20 < 2 || LODWORD(NumberOfBytes[0]) >= 0x14)
    && (v19[8] & 0x38u) < 0x30 )
  {
    *a8 = v19;
    *a9 = v18;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ObjectProperty;
}
