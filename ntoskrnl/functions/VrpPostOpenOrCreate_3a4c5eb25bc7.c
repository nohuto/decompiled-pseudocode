__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  __int64 v7; // r14
  UNICODE_STRING *v8; // r12
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r15
  NTSTATUS v12; // ebx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v18; // rcx
  _QWORD *v19; // r11
  _QWORD *v20; // rax
  const UNICODE_STRING *v21; // r14
  UNICODE_STRING *KeyContext; // rax
  int Buffer; // eax
  UNICODE_STRING *v24; // rax
  __int64 *v25; // rcx
  int v26; // edx
  void *v27; // rcx
  __int64 v28; // rsi
  int v29; // eax
  void *v30; // rcx
  __int64 *v31; // rcx
  int v32; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v35; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v38; // [rsp+70h] [rbp-19h]
  __int64 v39; // [rsp+78h] [rbp-11h]
  __int64 v40; // [rsp+80h] [rbp-9h]
  int v41; // [rsp+88h] [rbp-1h] BYREF
  int v42; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  __int64 v44; // [rsp+98h] [rbp+Fh]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  v7 = a1[1];
  v8 = 0LL;
  OldContext = 0LL;
  v35 = v5;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(_QWORD *)(v5 + 32);
  v11 = *(_QWORD *)(v5 + 16);
  if ( v9 < 0 )
    goto LABEL_2;
  CmRetrieveExtraParameter(*(_QWORD *)(v7 + 16), v4, &OldContext);
  if ( v9 == 260 )
  {
    if ( !OldContext )
    {
LABEL_2:
      v12 = 0;
      goto LABEL_37;
    }
    v13 = (char *)OldContext - 48;
    v14 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v13 + 8LL) == v13 )
    {
      v15 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v15 == v13 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = 0LL;
        v13[1] = 0LL;
        CmpFreeExtraParameter(v13);
        goto LABEL_2;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( v9 == 872 )
  {
    if ( OldContext )
      goto LABEL_2;
    if ( !v10 )
      return 0;
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter();
    v8 = ExtraParameter;
    if ( ExtraParameter )
    {
      v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), ExtraParameter + 1);
      if ( v12 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v10 + 8), 0x67655256u);
        *(_QWORD *)&v8->Length = *(_QWORD *)(v10 + 8);
        LODWORD(v8->Buffer) = *(_DWORD *)(v10 + 64);
        ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(v7 + 16), &v8[-2], &OldContext);
        v12 = ExtraParameterInBlock;
        if ( ExtraParameterInBlock < 0 )
        {
          if ( ExtraParameterInBlock == -1073741772 )
          {
            v20 = *(_QWORD **)(v18 + 8);
            if ( *v20 == v18 )
            {
              *v19 = v18;
              v12 = 0;
              v19[1] = v20;
              *v20 = v19;
              *(_QWORD *)(v18 + 8) = v19;
LABEL_38:
              v27 = *(void **)(v11 + 8);
              if ( v27 )
                ObfDereferenceObject(v27);
              v28 = v35;
              *(_QWORD *)(v11 + 8) = *(_QWORD *)v10;
              *(_QWORD *)v10 = 0LL;
              v29 = *(_DWORD *)(v28 + 8);
              if ( v29 == 260 || v29 == 872 )
              {
                if ( (unsigned int)dword_140C043C0 > 5 )
                {
                  v31 = &EmptyUnicodeString;
                  if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
                    v31 = *(__int64 **)v11;
                  v32 = *(unsigned __int16 *)v31;
                  v40 = v31[1];
                  p_OldContext = &OldContext;
                  v38 = &v41;
                  v41 = v32;
                  v39 = 2LL;
                  v42 = 0;
                  LODWORD(OldContext) = v12;
                  v44 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140C043C0,
                    (unsigned __int8 *)&dword_14003A224,
                    &ActivityId,
                    0LL,
                    5u,
                    v37);
                }
              }
              else
              {
                v30 = *(void **)(*(_QWORD *)v11 + 8LL);
                if ( v30 )
                  ExFreePoolWithTag(v30, 0);
                *(_OWORD *)*(_QWORD *)v11 = *(_OWORD *)(v10 + 16);
                *(_OWORD *)*(_QWORD *)(v11 + 112) = *(_OWORD *)(v10 + 32);
                *(_QWORD *)(v10 + 24) = 0LL;
                *(_QWORD *)(v10 + 40) = 0LL;
              }
              VrpFreeCallbackContext((PVOID)v10);
              goto LABEL_51;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v12 = -1073741771;
        }
      }
      goto LABEL_29;
    }
    goto LABEL_13;
  }
  v21 = (const UNICODE_STRING *)OldContext;
  if ( OldContext )
  {
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)OldContext);
    v6 = KeyContext;
    if ( KeyContext )
    {
      v12 = VrpBuildKeyPath(0LL, v21 + 1, KeyContext + 1);
      if ( v12 < 0 )
        goto LABEL_29;
      Buffer = (int)v21->Buffer;
LABEL_28:
      *(_DWORD *)(&v6[2].MaximumLength + 1) = Buffer;
      v6[2].Length = VrpCountPathComponents((__int64)&v6[1]);
      v12 = CmSetCallbackObjectContext(**(PVOID **)(v11 + 72), &VrpCallbackCookie, v6, &OldContext);
      if ( v12 >= 0 )
        goto LABEL_37;
      goto LABEL_29;
    }
  }
  else
  {
    v24 = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
    v6 = v24;
    if ( v24 )
    {
      v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), v24 + 1);
      if ( v12 < 0 )
        goto LABEL_29;
      Buffer = *(_DWORD *)(v10 + 64);
      goto LABEL_28;
    }
  }
LABEL_13:
  v12 = -1073741670;
LABEL_29:
  if ( (unsigned int)dword_140C043C0 > 2 )
  {
    v25 = &EmptyUnicodeString;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
      v25 = *(__int64 **)v11;
    v26 = *(unsigned __int16 *)v25;
    v40 = v25[1];
    p_OldContext = &OldContext;
    v38 = &v41;
    v41 = v26;
    v39 = 2LL;
    v42 = 0;
    LODWORD(OldContext) = v12;
    v44 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)&word_14003A16E,
      &ActivityId,
      0LL,
      5u,
      v37);
  }
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( v8 )
    CmpFreeExtraParameter(&v8[-3]);
LABEL_37:
  if ( v10 )
    goto LABEL_38;
  v28 = v35;
LABEL_51:
  if ( v12 < 0 )
  {
    *(_DWORD *)(v28 + 24) = v12;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v12;
}
