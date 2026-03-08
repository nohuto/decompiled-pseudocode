/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x1C002FE58
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C003157C (AcpiIoctlArgumentToPackageObjV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  void *v8; // rdi
  unsigned int v11; // ebp
  int v12; // ecx
  unsigned int v13; // eax
  __int64 result; // rax
  int *v15; // rbx
  void *Pool2; // r15
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int16 v25; // ax
  __int64 v26; // rax
  int Src; // [rsp+58h] [rbp-50h] BYREF
  char v28; // [rsp+5Ch] [rbp-4Ch]

  v8 = 0LL;
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v13 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v12 - 1) <= 0x12 )
    return 3221225507LL;
  v15 = *(int **)(a2 + 24);
  v28 = 0;
  Src = v15[1];
  if ( !*(_QWORD *)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 760) )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src);
  if ( (int)result >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(a4, 40LL, 1383097153LL);
    if ( !Pool2 )
      goto LABEL_9;
    v18 = *v15;
    if ( *v15 == 1114203457 )
    {
LABEL_23:
      *a5 = 0LL;
      *a6 = Pool2;
      *a7 = v8;
      *a8 = v11;
      return 0LL;
    }
    if ( v18 != 1130980673 )
    {
      if ( v18 != 1231643969 && v18 != 1399416129 )
        return 3221225711LL;
      v11 = 1;
      v19 = ExAllocatePool2(a4, 40LL, 1097884481LL);
      v8 = (void *)v19;
      if ( !v19 )
        goto LABEL_9;
      if ( *v15 == 1231643969 )
      {
        *(_WORD *)(v19 + 2) = 1;
        *(_QWORD *)(v19 + 16) = (unsigned int)v15[2];
      }
      else
      {
        *(_WORD *)(v19 + 2) = 2;
        *(_DWORD *)(v19 + 24) = v15[2];
        *(_QWORD *)(v19 + 32) = (unsigned __int64)(v15 + 3) & -(__int64)(v15[2] != 0);
      }
      goto LABEL_23;
    }
    v20 = (unsigned int)v15[3];
    if ( !(_DWORD)v20 )
      goto LABEL_23;
    v21 = v15 + 4;
    v11 = v15[3];
    v22 = ExAllocatePool2(a4, 40 * v20, 1097884481LL);
    v8 = (void *)v22;
    if ( !v22 )
    {
LABEL_9:
      v17 = -1073741670;
LABEL_10:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x52706341u);
      if ( v8 )
        ExFreePoolWithTag(v8, 0x52706341u);
      return (unsigned int)v17;
    }
    v23 = 0LL;
    v24 = v22 + 24;
    while ( 1 )
    {
      if ( *(_WORD *)v21 == 4 )
        v25 = 4;
      else
        v25 = *(_WORD *)v21 + 1;
      *(_WORD *)(v24 - 22) = v25;
      if ( *(_WORD *)v21 )
      {
        if ( *(_WORD *)v21 != 1 && *(_WORD *)v21 != 2 )
        {
          if ( *(_WORD *)v21 == 4 )
          {
            v17 = AcpiIoctlArgumentToPackageObjV1(
                    (_DWORD)v21,
                    a4,
                    0,
                    (int)v8 + 8 * (5 * (int)v23 + 3),
                    (__int64)v8 + 40 * v23 + 32);
            if ( v17 < 0 )
              goto LABEL_10;
            goto LABEL_41;
          }
          *(_WORD *)(v24 - 22) = 3;
        }
        *(_DWORD *)v24 = *((unsigned __int16 *)v21 + 1);
        *(_QWORD *)(v24 + 8) = (unsigned __int64)(v21 + 1) & -(__int64)(*((_WORD *)v21 + 1) != 0);
      }
      else
      {
        *(_QWORD *)(v24 - 8) = (unsigned int)v21[1];
      }
LABEL_41:
      v26 = *((unsigned __int16 *)v21 + 1);
      if ( (unsigned __int16)v26 < 4u )
        v26 = 4LL;
      v23 = (unsigned int)(v23 + 1);
      v21 = (_DWORD *)((char *)v21 + v26 + 4);
      v24 += 40LL;
      if ( (unsigned int)v23 >= v11 )
        goto LABEL_23;
    }
  }
  return result;
}
