/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x1C000B5F4
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000BAC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C00572F4 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000C2C8 (AcpiIoctlArgumentToPackageObjV1.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _OWORD *v9; // rbx
  unsigned int v10; // r15d
  unsigned int v11; // eax
  int v13; // ecx
  int *v14; // rdi
  __int64 *v15; // rdx
  __int64 result; // rax
  PVOID PoolWithTag; // rbp
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  size_t v21; // rdi
  _OWORD *v22; // rax
  unsigned int v23; // r13d
  char *v24; // r14
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  int v28; // edi
  unsigned __int64 v30; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-68h]
  _QWORD *v32; // [rsp+48h] [rbp-60h]
  _QWORD *v33; // [rsp+50h] [rbp-58h]
  unsigned int *v34; // [rsp+58h] [rbp-50h]
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v36; // [rsp+64h] [rbp-44h]

  v31 = a5;
  v9 = 0LL;
  v32 = a6;
  v10 = 0;
  v33 = a7;
  v34 = a8;
  v11 = *(_DWORD *)(a3 + 16);
  v13 = *(_DWORD *)(a3 + 8);
  v30 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v13 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v36 = 0;
  Src = v14[1];
  v15 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 720);
  if ( !v15 )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src, v15, &v30, 1);
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
    if ( PoolWithTag )
    {
      v18 = *v14;
      if ( *v14 == 1130980673 )
      {
        v19 = (unsigned int)v14[3];
        if ( (_DWORD)v19 )
        {
          v20 = v14 + 4;
          v21 = 40 * v19;
          v10 = v19;
          v22 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
          v9 = v22;
          if ( v22 )
          {
            memset(v22, 0, v21);
            v23 = 0;
            v24 = (char *)v9 + 24;
            while ( 1 )
            {
              if ( *(_WORD *)v20 == 4 )
                v25 = 4;
              else
                v25 = *(_WORD *)v20 + 1;
              *((_WORD *)v24 - 11) = v25;
              v26 = *(_WORD *)v20;
              if ( *(_WORD *)v20 )
              {
                if ( v26 > 2u )
                {
                  if ( v26 == 4 )
                  {
                    v28 = AcpiIoctlArgumentToPackageObjV1(
                            (_DWORD)v20,
                            a4,
                            0,
                            (unsigned int)v9 + 8 * (5 * v23 + 3),
                            (__int64)v9 + 40 * v23 + 32);
                    if ( v28 < 0 )
                      goto LABEL_33;
                    goto LABEL_15;
                  }
                  *((_WORD *)v24 - 11) = 3;
                }
                *(_DWORD *)v24 = *((unsigned __int16 *)v20 + 1);
                *((_QWORD *)v24 + 1) = (unsigned __int64)(v20 + 1) & -(__int64)(*((_WORD *)v20 + 1) != 0);
              }
              else
              {
                *((_QWORD *)v24 - 1) = (unsigned int)v20[1];
              }
LABEL_15:
              v27 = *((unsigned __int16 *)v20 + 1);
              if ( (unsigned __int16)v27 < 4u )
                v27 = 4LL;
              ++v23;
              v20 = (_DWORD *)((char *)v20 + v27 + 4);
              v24 += 40;
              if ( v23 >= v10 )
                goto LABEL_18;
            }
          }
          goto LABEL_32;
        }
      }
      else if ( v18 != 1114203457 )
      {
        if ( v18 != 1231643969 && v18 != 1399416129 )
          return 3221225711LL;
        v10 = 1;
        v9 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        if ( !v9 )
          goto LABEL_32;
        *v9 = 0LL;
        v9[1] = 0LL;
        *((_QWORD *)v9 + 4) = 0LL;
        if ( *v14 == 1231643969 )
        {
          *((_WORD *)v9 + 1) = 1;
          *((_QWORD *)v9 + 2) = (unsigned int)v14[2];
        }
        else
        {
          *((_WORD *)v9 + 1) = 2;
          *((_DWORD *)v9 + 6) = v14[2];
          *((_QWORD *)v9 + 4) = (unsigned __int64)(v14 + 3) & -(__int64)(v14[2] != 0);
        }
      }
LABEL_18:
      *v31 = v30;
      *v32 = PoolWithTag;
      *v33 = v9;
      *v34 = v10;
      return 0LL;
    }
LABEL_32:
    v28 = -1073741670;
LABEL_33:
    if ( v30 )
      AMLIDereferenceHandleEx(v30);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x52706341u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    return (unsigned int)v28;
  }
  return result;
}
