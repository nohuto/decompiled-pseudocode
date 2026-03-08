/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C0030F58
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002FD84 (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C0048828 (AMLIIsObjectInGivenScope.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ebx
  _IRP *MasterIrp; // r13
  __int64 v9; // rsi
  __int64 Pool2; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned int v19; // eax
  SIZE_T v20; // rax

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v7 = -1073741820;
    goto LABEL_24;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v7 = -1073741789;
    goto LABEL_24;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v7 = -1073741585;
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v9 )
  {
    v7 = -1073741810;
    goto LABEL_24;
  }
  v7 = AMLIGetNameSpaceObject("_DSD");
  if ( v7 >= 0 )
  {
    v7 = AMLIIsObjectInGivenScope(0LL, v9);
    if ( v7 >= 0 )
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1383097153LL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v7 = -1073741670;
        goto LABEL_22;
      }
      v7 = AMLIEvalNameSpaceObject(0LL, Pool2, 0LL, 0LL);
      if ( v7 >= 0 )
      {
        if ( *(_WORD *)(v6 + 2) != 4 )
          goto LABEL_20;
        v11 = *(_DWORD **)(v6 + 32);
        v12 = 0LL;
        if ( *v11 <= 1u )
          goto LABEL_20;
        while ( HIWORD(v11[10 * v12 + 2]) != 3
             || v11[10 * v12 + 8] != 16
             || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v11[10 * v12 + 10], 0x10uLL) != 16 )
        {
          v12 = (unsigned int)(v12 + 2);
          if ( (unsigned int)(v12 + 1) >= *v11 )
            goto LABEL_20;
        }
        if ( *(&MasterIrp->Flags + 1) )
        {
          if ( HIWORD(v11[10 * (unsigned int)(v12 + 1) + 2]) != 4 )
            goto LABEL_20;
          v15 = *(_DWORD **)&v11[10 * (unsigned int)(v12 + 1) + 10];
          v16 = 0LL;
          if ( !*v15 )
            goto LABEL_20;
          LODWORD(v17) = *(&MasterIrp->Flags + 1);
          while ( 1 )
          {
            if ( HIWORD(v15[10 * v16 + 2]) == 4 )
            {
              v18 = *(_QWORD *)&v15[10 * v16 + 10];
              if ( *(_DWORD *)v18 > 1u && *(_WORD *)(v18 + 10) == 2 )
              {
                v19 = *(_DWORD *)(v18 + 32);
                if ( (_DWORD)v17 == v19 )
                {
                  v20 = RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v18 + 40), v19);
                  v17 = *(&MasterIrp->Flags + 1);
                  if ( v17 == v20 )
                    break;
                }
              }
            }
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= *v15 )
              goto LABEL_20;
          }
          v14 = v18 + 48;
        }
        else
        {
          v14 = (__int64)&v11[10 * (unsigned int)(v12 + 1) + 2];
        }
        if ( v14 )
        {
          v7 = ACPIIoctlEvalPostProcessingV1(a2, v14, 1);
          goto LABEL_21;
        }
LABEL_20:
        v7 = -1073741275;
LABEL_21:
        dword_1C006F938 = 0;
        pszDest = 0;
        FreeDataBuffs(v6, 1LL);
      }
    }
  }
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_24:
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
