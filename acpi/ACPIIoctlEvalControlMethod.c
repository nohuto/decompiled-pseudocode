__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r13
  void *v5; // r15
  PVOID v6; // rbx
  unsigned int v7; // r12d
  int v8; // edi
  int v10; // eax
  int v11; // edi
  __int64 v12; // r8
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // eax
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+50h] BYREF
  PVOID P; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+60h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v6 = 0LL;
  v18[0] = 0LL;
  v7 = 0;
  P = 0LL;
  LODWORD(v20) = 0;
  v8 = a3;
  KeEnterCriticalRegion();
  switch ( v3 )
  {
    case 3325956:
      v10 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)&v22, (__int64)&P, (__int64)v18, (__int64)&v20);
      break;
    case 3325976:
      v10 = ACPIIoctlEvalPreProcessingV1Ex(
              a1,
              (_DWORD)a2,
              v8,
              256,
              (__int64)&v22,
              (__int64)&P,
              (__int64)v18,
              (__int64)&v20);
      break;
    case 3326012:
      v10 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v22, (__int64)&P, (__int64)v18, (__int64)&v20);
      break;
    case 3326020:
      v10 = ACPIIoctlEvalPreProcessingV2Ex(
              a1,
              (_DWORD)a2,
              v8,
              256,
              (__int64)&v22,
              (__int64)&P,
              (__int64)v18,
              (__int64)&v20);
      break;
    default:
      goto LABEL_11;
  }
  v6 = P;
  v11 = v10;
  if ( v10 < 0 )
    goto LABEL_26;
  v4 = v22;
  v5 = (void *)v18[0];
  v7 = v20;
LABEL_11:
  v11 = AMLIEvalNameSpaceObject(v4, v6, v7, v5);
  AMLIDereferenceHandleEx(v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects(v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  if ( v11 >= 0 )
  {
    v13 = v3 - 3325956;
    if ( v13 )
    {
      v14 = v13 - 20;
      if ( v14 )
      {
        v15 = v14 - 36;
        if ( v15 )
        {
          if ( v15 != 8 )
          {
LABEL_25:
            dword_1C006F938 = 0;
            pszDest = 0;
            FreeDataBuffs(v6, 1LL);
            goto LABEL_26;
          }
          LOBYTE(v12) = 1;
        }
        else
        {
          v12 = 0LL;
        }
        v16 = ACPIIoctlEvalPostProcessingV2(a2, v6, v12);
LABEL_24:
        v11 = v16;
        goto LABEL_25;
      }
      LOBYTE(v12) = 1;
    }
    else
    {
      v12 = 0LL;
    }
    v16 = ACPIIoctlEvalPostProcessingV1(a2, v6, v12);
    goto LABEL_24;
  }
LABEL_26:
  KeLeaveCriticalRegion();
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52706341u);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
