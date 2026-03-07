__int64 __fastcall ACPIIoctlEvalPreProcessingV2(
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
  unsigned int v11; // r15d
  int v12; // ecx
  unsigned int v13; // eax
  __int64 result; // rax
  int *v15; // rbx
  void *Pool2; // rbp
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r14
  __int16 v23; // ax
  int v24; // ebx
  __int64 v25; // rax
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
  if ( (unsigned int)(v12 - 1) <= 0x16 )
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
    if ( Pool2 )
    {
      v17 = *v15;
      if ( *v15 == 1265198401 )
        goto LABEL_43;
      if ( v17 != 1281975617 && v17 != 1298752833 )
      {
        if ( v17 != 1315530049 )
          return 3221225711LL;
        v18 = (unsigned int)v15[3];
        if ( (_DWORD)v18 )
        {
          v19 = v15 + 4;
          v11 = v15[3];
          v20 = ExAllocatePool2(a4, 40 * v18, 1097884481LL);
          v8 = (void *)v20;
          if ( v20 )
          {
            v21 = 0LL;
            v22 = v20 + 24;
            while ( 1 )
            {
              if ( *(_WORD *)v19 == 4 )
                v23 = 4;
              else
                v23 = *(_WORD *)v19 + 1;
              *(_WORD *)(v22 - 22) = v23;
              if ( *(_WORD *)v19 )
              {
                if ( *(_WORD *)v19 != 1 && *(_WORD *)v19 != 2 )
                {
                  if ( *(_WORD *)v19 == 4 )
                  {
                    v24 = AcpiIoctlArgumentToPackageObjV2(
                            (_DWORD)v19,
                            a4,
                            0,
                            (int)v8 + 8 * (5 * (int)v21 + 3),
                            (__int64)v8 + 40 * v21 + 32);
                    if ( v24 < 0 )
                      goto LABEL_35;
                    goto LABEL_29;
                  }
                  *(_WORD *)(v22 - 22) = 3;
                }
                *(_DWORD *)v22 = v19[1];
                *(_QWORD *)(v22 + 8) = (unsigned __int64)(v19 + 2) & -(__int64)(v19[1] != 0);
              }
              else
              {
                *(_QWORD *)(v22 - 8) = (unsigned int)v19[2];
              }
LABEL_29:
              v25 = (unsigned int)v19[1];
              if ( (unsigned int)v25 < 4 )
                v25 = 4LL;
              v21 = (unsigned int)(v21 + 1);
              v19 = (_DWORD *)((char *)v19 + v25 + 8);
              v22 += 40LL;
              if ( (unsigned int)v21 >= v11 )
                goto LABEL_43;
            }
          }
          goto LABEL_34;
        }
LABEL_43:
        *a5 = 0LL;
        *a6 = Pool2;
        *a7 = v8;
        *a8 = v11;
        return 0LL;
      }
      v11 = 1;
      v26 = ExAllocatePool2(a4, 40LL, 1097884481LL);
      v8 = (void *)v26;
      if ( v26 )
      {
        if ( *v15 == 1281975617 )
        {
          *(_WORD *)(v26 + 2) = 1;
          *(_QWORD *)(v26 + 16) = (unsigned int)v15[2];
        }
        else
        {
          *(_WORD *)(v26 + 2) = 2;
          *(_DWORD *)(v26 + 24) = v15[2];
          *(_QWORD *)(v26 + 32) = (unsigned __int64)(v15 + 3) & -(__int64)(v15[2] != 0);
        }
        goto LABEL_43;
      }
    }
LABEL_34:
    v24 = -1073741670;
LABEL_35:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x52706341u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x52706341u);
    return (unsigned int)v24;
  }
  return result;
}
