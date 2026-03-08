/*
 * XREFs of ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0030814
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C00317A8 (AcpiIoctlArgumentToPackageObjV2.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C0048828 (AMLIIsObjectInGivenScope.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  char *v9; // rdi
  int v10; // r10d
  void *Pool2; // r12
  unsigned int v12; // r15d
  int *v15; // rsi
  __int64 v16; // rbp
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  int *v20; // rsi
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rbp
  __int64 v24; // r14
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rcx
  int v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  Pool2 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v12 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v10 - 1) <= 0x16 )
    return 3221225507LL;
  v15 = *(int **)(a2 + 24);
  v16 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v16 )
    return 3221225486LL;
  _strupr((char *)v15 + 4);
  v17 = AMLIGetNameSpaceObject(v15 + 1);
  if ( v17 < 0 )
    goto LABEL_11;
  v17 = AMLIIsObjectInGivenScope(0LL, v16);
  if ( v17 < 0 )
    goto LABEL_11;
  Pool2 = (void *)ExAllocatePool2(a4, 40LL, 1383097153LL);
  if ( !Pool2 )
    goto LABEL_10;
  v18 = *v15;
  if ( *v15 == 1332307265 )
    goto LABEL_44;
  if ( v18 == 1349084481 || v18 == 1365861697 )
  {
    v12 = 1;
    v27 = ExAllocatePool2(a4, 40LL, 1097884481LL);
    v9 = (char *)v27;
    if ( !v27 )
      goto LABEL_10;
    v28 = v15 + 66;
    if ( *v15 == 1349084481 )
    {
      *(_WORD *)(v27 + 2) = 1;
      *(_QWORD *)(v27 + 16) = *v28;
    }
    else
    {
      *(_WORD *)(v27 + 2) = 2;
      *(_DWORD *)(v27 + 24) = v15[65];
      *(_QWORD *)(v27 + 32) = v28;
    }
LABEL_44:
    *a5 = 0LL;
    *a6 = Pool2;
    *a7 = v9;
    *a8 = v12;
    return 0LL;
  }
  if ( v18 != 1382638913 )
  {
    v17 = -1073741585;
    goto LABEL_11;
  }
  v19 = (unsigned int)v15[66];
  if ( !(_DWORD)v19 )
    goto LABEL_44;
  v12 = v15[66];
  v20 = v15 + 67;
  v21 = ExAllocatePool2(a4, 40 * v19, 1097884481LL);
  v9 = (char *)v21;
  if ( v21 )
  {
    v23 = 0LL;
    v24 = v21 + 24;
    while ( 1 )
    {
      if ( *(_WORD *)v20 == 4 )
        v25 = 4;
      else
        v25 = *(_WORD *)v20 + 1;
      *(_WORD *)(v24 - 22) = v25;
      if ( *(_WORD *)v20 )
      {
        if ( *(_WORD *)v20 != 1 && *(_WORD *)v20 != 2 )
        {
          if ( *(_WORD *)v20 == 4 )
          {
            LOBYTE(v22) = 1;
            v17 = AcpiIoctlArgumentToPackageObjV2(
                    (_DWORD)v20,
                    v29,
                    v22,
                    (int)v9 + 8 * (5 * (int)v23 + 3),
                    (__int64)&v9[40 * v23 + 32]);
            if ( v17 < 0 )
              goto LABEL_11;
            goto LABEL_36;
          }
          *(_WORD *)(v24 - 22) = 3;
        }
        *(_DWORD *)v24 = v20[1];
        *(_QWORD *)(v24 + 8) = (unsigned __int64)(v20 + 2) & -(__int64)(v20[1] != 0);
      }
      else
      {
        *(_QWORD *)(v24 - 8) = 0LL;
        memmove(&v9[32 * v23 + 16 + 8 * (unsigned int)v23], v20 + 2, (unsigned int)v20[1]);
      }
LABEL_36:
      v26 = (unsigned int)v20[1];
      if ( (unsigned int)v26 < 4 )
        v26 = 4LL;
      v20 = (int *)((char *)v20 + v26 + 8);
      v23 = (unsigned int)(v23 + 1);
      v24 += 40LL;
      if ( (unsigned int)v23 >= v12 )
        goto LABEL_44;
    }
  }
LABEL_10:
  v17 = -1073741670;
LABEL_11:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x52706341u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52706341u);
  return (unsigned int)v17;
}
