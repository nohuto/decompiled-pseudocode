/*
 * XREFs of VrpPostOpenOrCreate @ 0x1405D4420
 * Callers:
 *     VrpRegistryCallback @ 0x1405D3FD0 (VrpRegistryCallback.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwActivityIdControl @ 0x140272110 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmAllocateExtraParameter @ 0x1405D3740 (CmAllocateExtraParameter.c)
 *     VrpFreeCallbackContext @ 0x1405D481C (VrpFreeCallbackContext.c)
 *     VrpCountPathComponents @ 0x1405D4DCC (VrpCountPathComponents.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     CmRetrieveExtraParameter @ 0x1405D5780 (CmRetrieveExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x1405D57C4 (CmpFindExtraParameterInBlock.c)
 *     CmSetCallbackObjectContext @ 0x1405D5830 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1405D5A24 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1405D5A80 (VrpFreeKeyContext.c)
 *     CmpFreeExtraParameter @ 0x1405D848C (CmpFreeExtraParameter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  __int64 v7; // r14
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  UNICODE_STRING *v10; // rdi
  __int64 v11; // r15
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v22; // rcx
  _QWORD *v23; // r11
  _QWORD *v24; // rax
  const UNICODE_STRING *v25; // r14
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING *v27; // r12
  int Buffer; // eax
  UNICODE_STRING *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  struct _DMA_ADAPTER *v33; // rcx
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rax
  void *v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v43; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v46; // [rsp+70h] [rbp-19h]
  int v47; // [rsp+78h] [rbp-11h]
  int v48; // [rsp+7Ch] [rbp-Dh]
  __int64 v49; // [rsp+80h] [rbp-9h]
  int v50; // [rsp+88h] [rbp-1h] BYREF
  int v51; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  int v53; // [rsp+98h] [rbp+Fh]
  int v54; // [rsp+9Ch] [rbp+13h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  v7 = a1[1];
  v8 = 0LL;
  OldContext = 0LL;
  v43 = v5;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(UNICODE_STRING **)(v5 + 32);
  v11 = *(_QWORD *)(v5 + 16);
  if ( v9 < 0 )
    goto LABEL_2;
  CmRetrieveExtraParameter(*(_QWORD *)(v7 + 16), v4, &OldContext);
  if ( v9 != 260 )
  {
    if ( v9 == 872 )
    {
      if ( OldContext )
        goto LABEL_2;
      if ( !v10 )
        return 0;
      ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter(v14, v13, v15, v16);
      v8 = ExtraParameter;
      if ( !ExtraParameter )
        goto LABEL_13;
      v12 = VrpBuildKeyPath(0LL, v10 + 3, ExtraParameter + 1);
      if ( v12 >= 0 )
      {
        ObfReferenceObjectWithTag(v10->Buffer, 0x67655256u);
        *(_QWORD *)&v8->Length = v10->Buffer;
        LODWORD(v8->Buffer) = *(_DWORD *)&v10[4].Length;
        ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(v7 + 16), &v8[-2], &OldContext);
        v12 = ExtraParameterInBlock;
        if ( ExtraParameterInBlock < 0 )
        {
          if ( ExtraParameterInBlock == -1073741772 )
          {
            v24 = *(_QWORD **)(v22 + 8);
            if ( *v24 != v22 )
              goto LABEL_19;
            *v23 = v22;
            v12 = 0;
            v23[1] = v24;
            *v24 = v23;
            *(_QWORD *)(v22 + 8) = v23;
          }
          if ( v12 >= 0 )
            goto LABEL_2;
        }
        else
        {
          v12 = -1073741771;
        }
      }
LABEL_31:
      if ( (unsigned int)dword_140C02168 > 2 )
      {
        v30 = &EmptyUnicodeString;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          v30 = *(__int64 **)v11;
        v31 = v30[1];
        v32 = *(unsigned __int16 *)v30;
        v48 = 0;
        v51 = 0;
        v54 = 0;
        v49 = v31;
        p_OldContext = &OldContext;
        v46 = &v50;
        v50 = v32;
        v47 = 2;
        LODWORD(OldContext) = v12;
        v53 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02168,
          (unsigned __int8 *)byte_1400244D1,
          &ActivityId,
          0LL,
          5u,
          v45);
      }
      if ( v6 )
        VrpFreeKeyContext(v6);
      if ( v8 )
        CmpFreeExtraParameter(&v8[-3]);
      goto LABEL_39;
    }
    v25 = (const UNICODE_STRING *)OldContext;
    if ( OldContext )
    {
      KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)OldContext);
      v6 = KeyContext;
      if ( KeyContext )
      {
        v27 = KeyContext + 1;
        v12 = VrpBuildKeyPath(0LL, v25 + 1, KeyContext + 1);
        if ( v12 < 0 )
          goto LABEL_31;
        Buffer = (int)v25->Buffer;
        goto LABEL_30;
      }
    }
    else
    {
      v29 = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
      v6 = v29;
      if ( v29 )
      {
        v27 = v29 + 1;
        v12 = VrpBuildKeyPath(0LL, v10 + 3, v29 + 1);
        if ( v12 < 0 )
          goto LABEL_31;
        Buffer = *(_DWORD *)&v10[4].Length;
LABEL_30:
        *(_DWORD *)(&v6[2].MaximumLength + 1) = Buffer;
        v6[2].Length = VrpCountPathComponents(v27);
        v12 = CmSetCallbackObjectContext(**(PVOID **)(v11 + 72), &VrpCallbackCookie, v6, &OldContext);
        if ( v12 >= 0 )
          goto LABEL_39;
        goto LABEL_31;
      }
    }
LABEL_13:
    v12 = -1073741670;
    goto LABEL_31;
  }
  if ( OldContext )
  {
    v17 = (char *)OldContext - 48;
    v18 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v17 + 8LL) == v17 )
    {
      v19 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v19 == v17 )
      {
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        v17[1] = 0LL;
        CmpFreeExtraParameter(v17);
        goto LABEL_2;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
LABEL_2:
  v12 = 0;
LABEL_39:
  if ( v10 )
  {
    v33 = *(struct _DMA_ADAPTER **)(v11 + 8);
    if ( v33 )
      HalPutDmaAdapter(v33);
    v34 = v43;
    *(_QWORD *)(v11 + 8) = *(_QWORD *)&v10->Length;
    *(_QWORD *)&v10->Length = 0LL;
    v35 = *(_DWORD *)(v34 + 8);
    if ( v35 == 260 || v35 == 872 )
    {
      if ( (unsigned int)dword_140C02168 > 5 )
      {
        v38 = &EmptyUnicodeString;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          v38 = *(__int64 **)v11;
        v39 = v38[1];
        v40 = *(unsigned __int16 *)v38;
        v48 = 0;
        v51 = 0;
        v54 = 0;
        v49 = v39;
        p_OldContext = &OldContext;
        v46 = &v50;
        v50 = v40;
        v47 = 2;
        LODWORD(OldContext) = v12;
        v53 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02168,
          (unsigned __int8 *)byte_140024293,
          &ActivityId,
          0LL,
          5u,
          v45);
      }
    }
    else
    {
      v36 = *(__int64 **)v11;
      v37 = *(void **)(*(_QWORD *)v11 + 8LL);
      if ( v37 )
      {
        ExFreePoolWithTag(v37, 0);
        v36 = *(__int64 **)v11;
      }
      *(UNICODE_STRING *)v36 = v10[1];
      *(UNICODE_STRING *)*(_QWORD *)(v11 + 112) = v10[2];
      v10[1].Buffer = 0LL;
      v10[2].Buffer = 0LL;
    }
    VrpFreeCallbackContext(v10);
  }
  else
  {
    v34 = v43;
  }
  if ( v12 < 0 )
  {
    *(_DWORD *)(v34 + 24) = v12;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v12;
}
