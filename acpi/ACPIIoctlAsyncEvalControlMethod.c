/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0040410 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C570 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C000449A (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002FD84 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002FE58 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0030194 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00304D4 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0030814 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C00319C8 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r13
  void *v5; // r15
  PVOID v6; // rdi
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r8
  __int64 result; // rax
  int v13; // esi
  int v14; // esi
  int v15; // esi
  char v16; // r8
  int v17; // eax
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0;
  P = 0LL;
  LODWORD(v20) = 0;
  switch ( v3 )
  {
    case 3325952:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)&v18, (__int64)&P, (__int64)&v19, (__int64)&v20);
      break;
    case 3325980:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(
             a1,
             (_DWORD)a2,
             a3,
             64,
             (__int64)&v18,
             (__int64)&P,
             (__int64)&v19,
             (__int64)&v20);
      break;
    case 3326016:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v18, (__int64)&P, (__int64)&v19, (__int64)&v20);
      break;
    case 3326024:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(
             a1,
             (_DWORD)a2,
             a3,
             64,
             (__int64)&v18,
             (__int64)&P,
             (__int64)&v19,
             (__int64)&v20);
      break;
    default:
      goto LABEL_11;
  }
  v6 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_27;
  v4 = v18;
  v5 = (void *)v19;
  v7 = v20;
LABEL_11:
  v10 = AMLIAsyncEvalObject(
          v4,
          (_DWORD)v6,
          v7,
          (_DWORD)v5,
          (__int64)&ACPIIoctlAsyncEvalControlMethodCompletion,
          (__int64)a2);
  AMLIDereferenceHandleEx(v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects(v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  result = 259LL;
  if ( v10 != 259 )
  {
    if ( v10 >= 0 )
    {
      v13 = v3 - 3325952;
      if ( v13 )
      {
        v14 = v13 - 28;
        if ( v14 )
        {
          v15 = v14 - 36;
          if ( v15 )
          {
            if ( v15 != 8 )
            {
LABEL_26:
              dword_1C006F938 = 0;
              pszDest = 0;
              FreeDataBuffs(v6, 1LL);
              goto LABEL_27;
            }
            v16 = 1;
          }
          else
          {
            v16 = 0;
          }
          v17 = ACPIIoctlEvalPostProcessingV2(a2, (__int64)v6, v16);
LABEL_25:
          v10 = v17;
          goto LABEL_26;
        }
        LOBYTE(v11) = 1;
      }
      else
      {
        v11 = 0LL;
      }
      v17 = ACPIIoctlEvalPostProcessingV1(a2, v6, v11);
      goto LABEL_25;
    }
LABEL_27:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x52706341u);
    a2->IoStatus.Status = v10;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v10;
  }
  return result;
}
