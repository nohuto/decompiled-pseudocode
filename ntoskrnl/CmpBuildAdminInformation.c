__int64 __fastcall CmpBuildAdminInformation(__int64 *a1, __int64 *a2)
{
  void *v2; // rax
  unsigned int v3; // ebx
  _DWORD **v4; // r13
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // esi
  unsigned int v8; // r12d
  int v9; // edi
  __int64 v10; // r14
  PSID v11; // r13
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r12
  int *v15; // r14
  unsigned int v16; // r12d
  int v17; // edx
  unsigned int v18; // eax
  __int64 Pool; // rax
  __int64 v20; // r14
  unsigned int *v21; // rdi
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ecx
  PVOID TokenInformation; // [rsp+40h] [rbp-40h] BYREF
  PSID DestinationSid; // [rsp+48h] [rbp-38h] BYREF
  PSE_EXPORTS v29; // [rsp+50h] [rbp-30h]
  int v30[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v31[8]; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+D0h] [rbp+50h] BYREF
  NTSTATUS v34; // [rsp+D8h] [rbp+58h]

  DestinationSid = 0LL;
  LODWORD(v33) = 0;
  TokenInformation = 0LL;
  v2 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
  v34 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v3 = v34;
  if ( v34 >= 0 )
  {
    v4 = (_DWORD **)TokenInformation;
    v5 = 0;
    v6 = -1;
    v7 = -1;
    v8 = **(_DWORD **)TokenInformation;
    v9 = 16 * v8;
    if ( v8 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v29 = SeExports;
      do
      {
        v11 = *(PSID *)v10;
        DestinationSid = *(PSID *)v10;
        v9 += RtlLengthSid(DestinationSid);
        if ( v6 == -1 && RtlEqualSid(v29->SeAliasAdminsSid, v11) )
        {
          v6 = v5;
        }
        else if ( v7 == -1 && (*(_BYTE *)(v10 + 8) & 0x60) == 0x60 )
        {
          v7 = v5;
        }
        ++v5;
        v10 += 16LL;
      }
      while ( v5 < v8 );
      v4 = (_DWORD **)TokenInformation;
    }
    v12 = 0;
    if ( v6 == -1 )
    {
      v12 = 1;
      v31[0] = 7;
      *(_QWORD *)v30 = SeExports->SeAliasAdminsSid;
    }
    if ( v7 == -1 )
    {
      v13 = 2LL * v12++;
      *(_QWORD *)&v30[2 * v13] = SeExports->SeHighMandatorySid;
      v31[2 * v13] = 96;
    }
    if ( v12 )
    {
      v14 = v12;
      v15 = v30;
      v9 += 16 * v12;
      do
      {
        v9 += RtlLengthSid(*(PSID *)v15);
        v15 += 4;
        --v14;
      }
      while ( v14 );
    }
    v16 = (v9 + 7) & 0xFFFFFFF8;
    v17 = 12 * *v4[2];
    v18 = v17 + v16 + 920 - 12;
    if ( !v17 )
      v18 = v16 + 920;
    Pool = CmpAllocatePool(256LL, v18, 538987843LL);
    v20 = Pool;
    if ( Pool )
    {
      v21 = (unsigned int *)(Pool + 88);
      *(_QWORD *)(Pool + 24) = *((_QWORD *)TokenInformation + 3);
      *(_DWORD *)(Pool + 32) = *((_DWORD *)TokenInformation + 8);
      *(_DWORD *)(Pool + 36) = *((_DWORD *)TokenInformation + 9);
      *(_DWORD *)(Pool + 40) = *((_DWORD *)TokenInformation + 10);
      *(_DWORD *)(Pool + 44) = *((_DWORD *)TokenInformation + 11) & 0xFFFF9FFF | 0x2000;
      v22 = v12 + **(_DWORD **)TokenInformation;
      *(_QWORD *)(Pool + 96) = Pool + 360;
      *(_DWORD *)(Pool + 88) = v22;
      RtlCopySidAndAttributesArray(
        **(_DWORD **)TokenInformation,
        *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL),
        v16 - 16 * v22,
        Pool + 360,
        (char *)(Pool + 360 + 16 * v22),
        &DestinationSid,
        (ULONG *)&v33);
      if ( v6 != -1 )
        *(_DWORD *)(*(_QWORD *)(v20 + 96) + 16LL * v6 + 8) = 7;
      if ( v7 != -1 )
        *(_DWORD *)(*(_QWORD *)(v20 + 96) + 16LL * v7 + 8) = 96;
      if ( v12 )
        RtlCopySidAndAttributesArray(
          v12,
          (__int64)v30,
          v33,
          *(_QWORD *)(v20 + 96) + 16LL * **(unsigned int **)TokenInformation,
          (char *)DestinationSid,
          &DestinationSid,
          (ULONG *)&v33);
      RtlSidHashInitialize(*(__int64 **)(v20 + 96), *v21, (_QWORD *)(v20 + 88));
      *(_QWORD *)v20 = v21;
      v23 = *(_QWORD *)(v20 + 96) + v16;
      *(_DWORD *)v23 = 0;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v20 + 8) = v23;
      v23 += 272LL;
      *(_DWORD *)v23 = 0;
      v24 = v23 + 272;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v20 + 64) = v23;
      *(_QWORD *)(v20 + 56) = 0LL;
      v25 = **((_DWORD **)TokenInformation + 2);
      *(_DWORD *)(v23 + 272) = v25;
      RtlCopyLuidAndAttributesArray(v25, *((_QWORD *)TokenInformation + 2) + 4LL, v23 + 276);
      *(_QWORD *)(v20 + 16) = v24;
      v3 = v34;
      *a1 = v20;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v3;
}
