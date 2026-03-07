__int64 __fastcall VrpPreOpenOrCreate(__int64 a1, void *a2)
{
  PCUNICODE_STRING *v2; // rdi
  __int64 ExtraParameter; // r14
  _OWORD *v6; // rax
  PCUNICODE_STRING v7; // rbx
  __int64 v8; // rsi
  _OWORD *v9; // r15
  const UNICODE_STRING *v10; // rcx
  int v11; // ebx
  PCUNICODE_STRING v12; // rdx
  int Length; // ecx
  wchar_t *v14; // rax
  unsigned __int8 *v15; // rdx
  PCUNICODE_STRING v16; // rdx
  int v18; // eax
  int v19; // r15d
  __int128 v20; // xmm0
  int ExtraParameterInBlock; // eax
  __int64 v22; // rcx
  _QWORD *v23; // r11
  _QWORD *v24; // rax
  wchar_t *Buffer; // rcx
  __int64 Pool2; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  int v29; // eax
  UNICODE_STRING v30; // xmm1
  const UNICODE_STRING *v31; // rax
  UNICODE_STRING v32; // xmm0
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v36[2]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD *v37; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  GUID ActivityId; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  wchar_t *v45; // [rsp+F0h] [rbp-10h]
  _DWORD v46[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]

  v2 = *(PCUNICODE_STRING **)a1;
  ExtraParameter = 0LL;
  LODWORD(v34) = 0;
  v6 = v2[1];
  v7 = *v2;
  v8 = 0LL;
  v9 = v2[11];
  Object = 0LL;
  *(_OWORD *)v36 = 0LL;
  v37 = v6;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v40 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v10 = 0LL;
  if ( !v7->Length || *v7->Buffer != 92 )
  {
    if ( !v9 )
      return 0;
    v10 = (const UNICODE_STRING *)((unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL));
  }
  v11 = VrpBuildKeyPath(v10, *v2, (PUNICODE_STRING)v36);
  if ( v11 >= 0 )
  {
    v33 = 0LL;
    String1 = 0LL;
    VrpGetNextToken(v36, &v33, &String1);
    if ( RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    {
      VrpGetNextToken(v36, &v33, &String1);
      if ( RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
      {
        v11 = -1073741790;
        goto LABEL_15;
      }
    }
    LODWORD(v33) = 0;
    v18 = VrpTranslatePath(a2, (__int64)P, (__int64)&Object, (__int64)v40, (__int64)&v34, (__int64)&v33);
    v11 = v18;
    if ( v18 == -1073741772 )
      return 0;
    if ( v18 >= 0 )
    {
      v19 = v34;
      if ( (v34 & 4) == 0 )
      {
        *((_WORD *)Object + 25) = *((_WORD *)v37 + 25);
        Pool2 = ExAllocatePool2(256LL, 72LL, 1734693462LL);
        v8 = Pool2;
        if ( Pool2 )
        {
          v27 = *(_OWORD *)v36;
          v2[10] = (PCUNICODE_STRING)Pool2;
          *(_QWORD *)Pool2 = v2[1];
          *(UNICODE_STRING *)(Pool2 + 16) = **v2;
          v28 = (__int128)*v2[14];
          v29 = v33;
          *(_OWORD *)(v8 + 48) = v27;
          *(_DWORD *)(v8 + 64) = v19;
          v30 = *(UNICODE_STRING *)v40;
          *(_OWORD *)(v8 + 32) = v28;
          *(_DWORD *)(a1 + 8) = v29;
          v31 = (const UNICODE_STRING *)Object;
          v32 = *(UNICODE_STRING *)P;
          *(_QWORD *)(v8 + 8) = a2;
          v2[1] = v31;
          **v2 = v32;
          *v2[14] = v30;
          return (unsigned int)v11;
        }
        goto LABEL_36;
      }
      ExtraParameter = CmAllocateExtraParameter();
      if ( !ExtraParameter )
      {
LABEL_36:
        v11 = -1073741670;
        goto LABEL_15;
      }
      ObfReferenceObjectWithTag(a2, 0x67655256u);
      v20 = *(_OWORD *)v36;
      *(_QWORD *)ExtraParameter = a2;
      *(_DWORD *)(ExtraParameter + 8) = v19 & 0xFFFFFFFB;
      *(_OWORD *)(ExtraParameter + 16) = v20;
      RtlInitUnicodeString((PUNICODE_STRING)v36, 0LL);
      ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(a1 + 16), ExtraParameter - 48 + 16, &v37);
      v11 = ExtraParameterInBlock;
      if ( ExtraParameterInBlock >= 0 )
      {
        v11 = -1073741771;
        goto LABEL_15;
      }
      if ( ExtraParameterInBlock == -1073741772 )
      {
        v24 = *(_QWORD **)(v22 + 8);
        if ( *v24 != v22 )
          __fastfail(3u);
        *v23 = v22;
        ExtraParameter = 0LL;
        v23[1] = v24;
        *v24 = v23;
        *(_QWORD *)(v22 + 8) = v23;
        Buffer = (*v2)->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0x67655256u);
        **v2 = *(PCUNICODE_STRING)P;
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
        *(_DWORD *)(a1 + 12) = 872;
        v11 = -1073740541;
LABEL_5:
        if ( (unsigned int)dword_140C043C0 > 5 )
        {
          v12 = (PCUNICODE_STRING)&EmptyUnicodeString;
          if ( (*v2)->Buffer )
            v12 = *v2;
          Length = v12->Length;
          v14 = v12->Buffer;
          v43 = v46;
          v15 = (unsigned __int8 *)byte_14003A34D;
          LODWORD(v33) = -1073740541;
LABEL_19:
          v45 = v14;
          v46[0] = Length;
          v47 = &v33;
          v44 = 2LL;
          v46[1] = 0;
          v48 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C043C0, v15, &ActivityId, 0LL, 5u, &v42);
          goto LABEL_20;
        }
        goto LABEL_20;
      }
    }
  }
  if ( v11 == -1073740541 )
    goto LABEL_5;
LABEL_15:
  if ( (unsigned int)dword_140C043C0 > 2 )
  {
    v16 = (PCUNICODE_STRING)&EmptyUnicodeString;
    if ( (*v2)->Buffer )
      v16 = *v2;
    Length = v16->Length;
    v14 = v16->Buffer;
    v43 = v46;
    v15 = (unsigned __int8 *)&unk_14003A1F0;
    LODWORD(v33) = v11;
    goto LABEL_19;
  }
LABEL_20:
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v36[1] )
    ExFreePoolWithTag(v36[1], 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 48);
  return (unsigned int)v11;
}
