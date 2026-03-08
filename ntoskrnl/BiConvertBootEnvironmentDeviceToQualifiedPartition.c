/*
 * XREFs of BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140A5A2E4
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x14082F010 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToQualifiedPartition(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 Pool2; // rcx
  int v8; // eax

  if ( *(_DWORD *)a1 == 6 )
  {
    v6 = 0;
    Pool2 = ExAllocatePool2(258LL, 60LL, 1262764866LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_DWORD *)(Pool2 + 56) = 0;
    *(_DWORD *)Pool2 = 6;
    if ( *(_DWORD *)(a1 + 32) )
    {
      v6 = -1073741637;
LABEL_13:
      ExFreePoolWithTag((PVOID)Pool2, 0x4B444342u);
      return v6;
    }
    v8 = *(_DWORD *)(a1 + 36);
    if ( v8 == 1 )
    {
      *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      if ( v8 )
      {
        v6 = -1073741811;
        goto LABEL_13;
      }
      *(_DWORD *)(Pool2 + 20) = 1;
      *(_OWORD *)(Pool2 + 28) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(Pool2 + 44) = *(_OWORD *)(a1 + 16);
    }
    *a2 = Pool2;
    *a3 = 60;
    return v6;
  }
  return (unsigned int)-1073741811;
}
