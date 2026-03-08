/*
 * XREFs of IvtProcessDeviceExceptions @ 0x140A95E14
 * Callers:
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpIommuGetExceptionList @ 0x140513048 (HalpIommuGetExceptionList.c)
 *     IvtAllocateTranslationStructures @ 0x1405292FC (IvtAllocateTranslationStructures.c)
 *     IvtUpdateTranslationStructures @ 0x14052BCBC (IvtUpdateTranslationStructures.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140A968B8 (HalpIvtpInitializeReservedDomain.c)
 */

__int64 __fastcall IvtProcessDeviceExceptions(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // edi
  unsigned int v4; // ebx
  __int64 *ExceptionList; // r14
  __int64 j; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-59h]
  __int64 v13; // [rsp+28h] [rbp-51h]
  __int64 v14; // [rsp+38h] [rbp-41h]
  _DWORD v15[28]; // [rsp+50h] [rbp-29h] BYREF
  __int64 i; // [rsp+E0h] [rbp+67h] BYREF
  __int64 *v17; // [rsp+E8h] [rbp+6Fh] BYREF

  memset(v15, 0, sizeof(v15));
  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0;
  v17 = 0LL;
  v4 = 0;
  for ( i = 0LL; v4 < *v2; ++v4 )
  {
    v3 = HalpIvtpInitializeReservedDomain(a1, &v2[4 * v4 + 2]);
    if ( v3 < 0 )
      break;
    v2 = *(unsigned int **)(a1 + 352);
  }
  if ( v3 >= 0 )
  {
    ExceptionList = HalpIommuGetExceptionList();
    for ( j = *ExceptionList; (__int64 *)j != ExceptionList; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 16) == *(_DWORD *)(a1 + 252) )
      {
        memset(&v15[2], 0, 0x68uLL);
        v7 = *(_QWORD *)(j + 24);
        v15[1] = 0;
        v15[0] = 1;
        result = IvtAllocateTranslationStructures(a1, v7, v8, v9, (__int64 *)&v17);
        v3 = result;
        if ( (int)result < 0 )
          return result;
        i = *(unsigned int *)(j + 24);
        IvtUpdateTranslationStructures(a1, (int *)&i, v11, v17, v12, v13, (__int64)v15, v14, 1);
      }
    }
  }
  return (unsigned int)v3;
}
