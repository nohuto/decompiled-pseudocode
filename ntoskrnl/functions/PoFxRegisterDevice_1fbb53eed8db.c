__int64 __fastcall PoFxRegisterDevice(_QWORD *Object, int *a2, __int64 a3)
{
  int *v3; // r14
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // r12
  int v13; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-29h]
  __int64 v18; // [rsp+58h] [rbp-21h]
  __int64 v19; // [rsp+60h] [rbp-19h]
  __int64 v20; // [rsp+68h] [rbp-11h]
  __int64 v21; // [rsp+70h] [rbp-9h]
  __int64 *v22; // [rsp+F0h] [rbp+77h]
  __int64 v23; // [rsp+F8h] [rbp+7Fh]

  v22 = (__int64 *)a3;
  v3 = 0LL;
  if ( !Object )
    return (unsigned int)-1073741811;
  v6 = *a2;
  v7 = 0LL;
  v8 = 0LL;
  if ( *a2 != 1 )
  {
    if ( v6 == 2 )
    {
      v9 = a2 + 20;
      v10 = *((_QWORD *)a2 + 8);
      v17 = *((_QWORD *)a2 + 2);
      v18 = *((_QWORD *)a2 + 3);
      v19 = *((_QWORD *)a2 + 4);
      v20 = *((_QWORD *)a2 + 5);
      v21 = *((_QWORD *)a2 + 6);
      goto LABEL_6;
    }
    if ( v6 == 3 )
    {
      v9 = a2 + 26;
      v7 = *((_QWORD *)a2 + 8);
      v3 = a2;
      v8 = *((_QWORD *)a2 + 9);
      v17 = *((_QWORD *)a2 + 2);
      v18 = *((_QWORD *)a2 + 3);
      v19 = *((_QWORD *)a2 + 4);
      v20 = *((_QWORD *)a2 + 5);
      v21 = *((_QWORD *)a2 + 6);
      v10 = *((_QWORD *)a2 + 11);
LABEL_6:
      v11 = *((_QWORD *)a2 + 1);
      goto LABEL_7;
    }
    return (unsigned int)-1073741811;
  }
  PopPrintEx(1LL, (__int64)"Device using PO_FX_VERSION_V1: devobj 0x%p", Object);
  PopPrintEx(1LL, (__int64)" - Driver: \"%wZ\"", Object[1] + 56LL);
  PopPrintEx(1LL, (__int64)"\n");
  v23 = *((_QWORD *)a2 + 7);
  v17 = *((_QWORD *)a2 + 1);
  v18 = *((_QWORD *)a2 + 2);
  v19 = *((_QWORD *)a2 + 3);
  v20 = *((_QWORD *)a2 + 4);
  v21 = *((_QWORD *)a2 + 5);
  v9 = PopFxConvertV1Components((__int64)(a2 + 16), a2[1]);
  v11 = 0LL;
  a3 = (__int64)v22;
  v10 = v23;
LABEL_7:
  v12 = 0;
  if ( v7 )
  {
    if ( v8 )
    {
      v12 = 1;
      goto LABEL_9;
    }
  }
  else if ( !v8 )
  {
LABEL_9:
    v13 = PopFxRegisterDevice(Object, v10, v11, a3);
    if ( v13 >= 0 && v12 )
    {
      v15 = v3[20];
      v16 = *v22;
      if ( v15 == -1 )
      {
        *(_DWORD *)(v16 + 912) = 0;
      }
      else
      {
        if ( !v15 )
          v15 = PopFxDirectedFxDefaultTimeout;
        *(_DWORD *)(v16 + 912) = v15;
      }
      if ( (v3[2] & 2) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x200u);
      if ( (v3[2] & 4) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x400u);
      _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x20u);
      if ( !v17 && !v18 && !v19 && !v20 && !v21 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 1u);
    }
    goto LABEL_11;
  }
  v13 = -1073741811;
LABEL_11:
  if ( v9 && *a2 == 1 )
    ExFreePoolWithTag(v9, 0x4D584650u);
  return (unsigned int)v13;
}
