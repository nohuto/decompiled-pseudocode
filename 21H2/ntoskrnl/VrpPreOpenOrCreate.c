/*
 * XREFs of VrpPreOpenOrCreate @ 0x1405D4868
 * Callers:
 *     VrpRegistryCallback @ 0x1405D3FD0 (VrpRegistryCallback.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     EtwActivityIdControl @ 0x140272110 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmAllocateExtraParameter @ 0x1405D3740 (CmAllocateExtraParameter.c)
 *     VrpTranslatePath @ 0x1405D4E34 (VrpTranslatePath.c)
 *     VrpGetNextToken @ 0x1405D52F4 (VrpGetNextToken.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     CmpFindExtraParameterInBlock @ 0x1405D57C4 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1405D848C (CmpFreeExtraParameter.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(__int64 a1, void *a2)
{
  PCUNICODE_STRING *v2; // rdi
  _QWORD *ExtraParameter; // rsi
  _OWORD *v6; // rax
  PCUNICODE_STRING v7; // rbx
  UNICODE_STRING *v8; // r14
  _OWORD *v9; // r15
  int v10; // ebx
  PCUNICODE_STRING v11; // rdx
  int Length; // ecx
  wchar_t *v13; // rax
  char *v14; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _LOOKASIDE_LIST_EX *v20; // r9
  int v21; // r15d
  __int128 v22; // xmm0
  int ExtraParameterInBlock; // eax
  __int64 v24; // rcx
  _QWORD *v25; // r11
  _QWORD *v26; // rax
  UNICODE_STRING *v27; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING v30; // xmm1
  UNICODE_STRING v31; // xmm0
  int v32; // eax
  UNICODE_STRING v33; // xmm1
  PADAPTER_OBJECT v34; // rax
  UNICODE_STRING v35; // xmm0
  PCUNICODE_STRING v36; // rdx
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v40[2]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD *v41; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  GUID ActivityId; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  wchar_t *v49; // [rsp+F0h] [rbp-10h]
  _DWORD v50[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]

  v2 = *(PCUNICODE_STRING **)a1;
  ExtraParameter = 0LL;
  LODWORD(v38) = 0;
  v6 = v2[1];
  v7 = *v2;
  v8 = 0LL;
  v9 = v2[11];
  DmaAdapter = 0LL;
  *(_OWORD *)v40 = 0LL;
  v41 = v6;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v44 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v7->Length && *v7->Buffer == 92 )
  {
    v10 = VrpBuildKeyPath(0LL, *v2, (PUNICODE_STRING)v40);
    if ( v10 < 0 )
    {
LABEL_45:
      if ( v10 >= 0 )
        return (unsigned int)v10;
      goto LABEL_46;
    }
LABEL_8:
    v37 = 0LL;
    String1 = 0LL;
    VrpGetNextToken(v40, &v37, &String1);
    if ( RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    {
      VrpGetNextToken(v40, &v37, &String1);
      if ( RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
      {
        v10 = -1073741790;
        goto LABEL_11;
      }
    }
    LODWORD(v37) = 0;
    v16 = VrpTranslatePath(a2, (__int64)P, (__int64)&DmaAdapter, (__int64)v44, (__int64)&v38, (__int64)&v37);
    v10 = v16;
    if ( v16 == -1073741772 )
      return 0;
    if ( v16 < 0 )
      goto LABEL_46;
    v21 = v38;
    if ( (v38 & 4) != 0 )
    {
      ExtraParameter = CmAllocateExtraParameter(v18, v17, v19, v20);
      if ( ExtraParameter )
      {
        ObfReferenceObjectWithTag(a2, 0x67655256u);
        v22 = *(_OWORD *)v40;
        *ExtraParameter = a2;
        *((_DWORD *)ExtraParameter + 2) = v21 & 0xFFFFFFFB;
        *((_OWORD *)ExtraParameter + 1) = v22;
        RtlInitUnicodeString((PUNICODE_STRING)v40, 0LL);
        ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(a1 + 16), ExtraParameter - 4, &v41);
        v10 = ExtraParameterInBlock;
        if ( ExtraParameterInBlock < 0 )
        {
          if ( ExtraParameterInBlock == -1073741772 )
          {
            v26 = *(_QWORD **)(v24 + 8);
            if ( *v26 != v24 )
              __fastfail(3u);
            *v25 = v24;
            v10 = 0;
            v25[1] = v26;
            *v26 = v25;
            *(_QWORD *)(v24 + 8) = v25;
          }
          if ( v10 >= 0 )
          {
            v27 = (UNICODE_STRING *)*v2;
            ExtraParameter = 0LL;
            Buffer = (*v2)->Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0x67655256u);
              v27 = (UNICODE_STRING *)*v2;
            }
            *v27 = *(UNICODE_STRING *)P;
            RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
            *(_DWORD *)(a1 + 12) = 872;
            v10 = -1073740541;
            goto LABEL_47;
          }
        }
        else
        {
          v10 = -1073741771;
        }
        goto LABEL_46;
      }
    }
    else
    {
      DmaAdapter[3].Size = *((_WORD *)v41 + 25);
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v30 = *(UNICODE_STRING *)v40;
        v2[10] = PoolWithTag;
        *(_QWORD *)&PoolWithTag->Length = v2[1];
        PoolWithTag[1] = **v2;
        v31 = *v2[14];
        v32 = v37;
        v8[3] = v30;
        *(_DWORD *)&v8[4].Length = v21;
        v33 = *(UNICODE_STRING *)v44;
        v8[2] = v31;
        *(_DWORD *)(a1 + 8) = v32;
        v34 = DmaAdapter;
        v35 = *(UNICODE_STRING *)P;
        v8->Buffer = (wchar_t *)a2;
        v2[1] = (PCUNICODE_STRING)v34;
        **v2 = v35;
        *v2[14] = v33;
        goto LABEL_45;
      }
    }
    v10 = -1073741670;
    goto LABEL_11;
  }
  if ( !v9 )
    return 0;
  v10 = VrpBuildKeyPath(
          (PCUNICODE_STRING)((unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL)),
          *v2,
          (PUNICODE_STRING)v40);
  if ( v10 >= 0 )
    goto LABEL_8;
LABEL_46:
  if ( v10 == -1073740541 )
  {
LABEL_47:
    if ( (unsigned int)dword_140C02168 <= 5 )
      goto LABEL_16;
    v36 = (PCUNICODE_STRING)&EmptyUnicodeString;
    if ( (*v2)->Buffer )
      v36 = *v2;
    Length = v36->Length;
    v13 = v36->Buffer;
    v47 = v50;
    v14 = byte_140024300;
    LODWORD(v37) = -1073740541;
    goto LABEL_15;
  }
LABEL_11:
  if ( (unsigned int)dword_140C02168 > 2 )
  {
    v11 = (PCUNICODE_STRING)&EmptyUnicodeString;
    if ( (*v2)->Buffer )
      v11 = *v2;
    Length = v11->Length;
    v13 = v11->Buffer;
    v47 = v50;
    v14 = byte_14002450B;
    LODWORD(v37) = v10;
LABEL_15:
    v49 = v13;
    v50[0] = Length;
    v51 = &v37;
    v48 = 2LL;
    v50[1] = 0;
    v52 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)v14, &ActivityId, 0LL, 5u, &v46);
  }
LABEL_16:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v40[1] )
    ExFreePoolWithTag(v40[1], 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 6);
  return (unsigned int)v10;
}
