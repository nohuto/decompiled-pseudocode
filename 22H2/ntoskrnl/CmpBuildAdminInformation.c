/*
 * XREFs of CmpBuildAdminInformation @ 0x1405D9BE0
 * Callers:
 *     CmpCheckAdminAccess @ 0x1405D9B08 (CmpCheckAdminAccess.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     RtlSidHashInitialize @ 0x1402D6590 (RtlSidHashInitialize.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlLengthSid @ 0x140347A80 (RtlLengthSid.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlCopyLuidAndAttributesArray @ 0x1405D9EB0 (RtlCopyLuidAndAttributesArray.c)
 *     RtlCopySidAndAttributesArray @ 0x1405DC280 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     CmpEffectiveTokenForSubject @ 0x1406ED760 (CmpEffectiveTokenForSubject.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1, __int64 a2)
{
  void *v2; // rax
  struct _LOOKASIDE_LIST_EX *v3; // r9
  unsigned int v4; // ebx
  _DWORD **v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // esi
  unsigned int v9; // r12d
  int v10; // edi
  __int64 v11; // r14
  PSID v12; // r13
  ULONG v13; // ebx
  unsigned int v14; // r12d
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // edi
  char *TransientPoolWithTag; // rax
  char *v19; // r14
  ULONG *v20; // rdi
  ULONG v21; // edx
  __int64 v22; // rax
  __int64 v23; // rbx
  ULONG v24; // ecx
  __int64 v26; // rdx
  __int64 v27; // r12
  _SID_AND_ATTRIBUTES *v28; // r14
  PVOID TokenInformation; // [rsp+40h] [rbp-40h] BYREF
  PSID RemainingSidArea; // [rsp+48h] [rbp-38h] BYREF
  PSE_EXPORTS v31; // [rsp+50h] [rbp-30h]
  _SID_AND_ATTRIBUTES Src[2]; // [rsp+58h] [rbp-28h] BYREF
  ULONG SidAreaSize; // [rsp+D0h] [rbp+50h] BYREF
  NTSTATUS v35; // [rsp+D8h] [rbp+58h]

  RemainingSidArea = 0LL;
  SidAreaSize = 0;
  TokenInformation = 0LL;
  v2 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
  v35 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v4 = v35;
  if ( v35 >= 0 )
  {
    v5 = (_DWORD **)TokenInformation;
    v6 = 0;
    v7 = -1;
    v8 = -1;
    v9 = **(_DWORD **)TokenInformation;
    v10 = 16 * v9;
    if ( v9 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v31 = SeExports;
      do
      {
        v12 = *(PSID *)v11;
        RemainingSidArea = *(PSID *)v11;
        v10 += RtlLengthSid(RemainingSidArea);
        if ( v7 == -1 && RtlEqualSid(v31->SeAliasAdminsSid, v12) )
        {
          v7 = v6;
        }
        else if ( v8 == -1 && (*(_BYTE *)(v11 + 8) & 0x60) == 0x60 )
        {
          v8 = v6;
        }
        ++v6;
        v11 += 16LL;
      }
      while ( v6 < v9 );
      v5 = (_DWORD **)TokenInformation;
    }
    v13 = 0;
    if ( v7 == -1 )
    {
      v13 = 1;
      Src[0].Attributes = 7;
      Src[0].Sid = SeExports->SeAliasAdminsSid;
    }
    if ( v8 == -1 )
    {
      v26 = v13++;
      Src[v26].Sid = SeExports->SeHighMandatorySid;
      Src[v26].Attributes = 96;
    }
    if ( v13 )
    {
      v27 = v13;
      v28 = Src;
      v10 += 16 * v13;
      do
      {
        v10 += RtlLengthSid(v28->Sid);
        ++v28;
        --v27;
      }
      while ( v27 );
    }
    v14 = (v10 + 7) & 0xFFFFFFF8;
    v15 = 12 * *v5[2];
    v16 = v15 + v14 + 920 - 12;
    if ( !v15 )
      v16 = v14 + 920;
    v17 = v16;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v16, 0x20204D43u, v3);
    v19 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v17);
      v20 = (ULONG *)(v19 + 88);
      *((_QWORD *)v19 + 3) = *((_QWORD *)TokenInformation + 3);
      *((_DWORD *)v19 + 8) = *((_DWORD *)TokenInformation + 8);
      *((_DWORD *)v19 + 9) = *((_DWORD *)TokenInformation + 9);
      *((_DWORD *)v19 + 10) = *((_DWORD *)TokenInformation + 10);
      *((_DWORD *)v19 + 11) = *((_DWORD *)TokenInformation + 11) & 0xFFFF9FFF | 0x2000;
      v21 = v13 + **(_DWORD **)TokenInformation;
      *((_QWORD *)v19 + 12) = v19 + 360;
      *((_DWORD *)v19 + 22) = v21;
      RtlCopySidAndAttributesArray(
        **(_DWORD **)TokenInformation,
        *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)TokenInformation + 8LL),
        v14 - 16 * v21,
        (PSID_AND_ATTRIBUTES)(v19 + 360),
        &v19[16 * v21 + 360],
        &RemainingSidArea,
        &SidAreaSize);
      if ( v7 != -1 )
        *(_DWORD *)(*((_QWORD *)v19 + 12) + 16LL * v7 + 8) = 7;
      if ( v8 != -1 )
        *(_DWORD *)(*((_QWORD *)v19 + 12) + 16LL * v8 + 8) = 96;
      if ( v13 )
        RtlCopySidAndAttributesArray(
          v13,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v19 + 12) + 16LL * **(unsigned int **)TokenInformation),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v19 + 12), *v20, (PSID_AND_ATTRIBUTES_HASH)(v19 + 88));
      *(_QWORD *)v19 = v20;
      v22 = *((_QWORD *)v19 + 12) + v14;
      *(_DWORD *)v22 = 0;
      *(_QWORD *)(v22 + 8) = 0LL;
      *((_QWORD *)v19 + 1) = v22;
      v22 += 272LL;
      *(_DWORD *)v22 = 0;
      v23 = v22 + 272;
      *(_QWORD *)(v22 + 8) = 0LL;
      *((_QWORD *)v19 + 8) = v22;
      *((_QWORD *)v19 + 7) = 0LL;
      v24 = **((_DWORD **)TokenInformation + 2);
      *(_DWORD *)(v22 + 272) = v24;
      RtlCopyLuidAndAttributesArray(
        v24,
        (PLUID_AND_ATTRIBUTES)(*((_QWORD *)TokenInformation + 2) + 4LL),
        (PLUID_AND_ATTRIBUTES)(v22 + 276));
      *((_QWORD *)v19 + 2) = v23;
      v4 = v35;
      *a1 = v19;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v4;
}
