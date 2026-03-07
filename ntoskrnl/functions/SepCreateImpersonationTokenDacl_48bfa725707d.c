__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v4; // r13
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v8; // r15
  ULONG v9; // r12d
  ACL *Pool2; // rax
  ACL *v11; // rbx
  void *Src; // [rsp+60h] [rbp+8h]

  v4 = 0LL;
  v5 = 0LL;
  Src = **(void ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v5 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v4 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (*(unsigned __int8 *)(**(_QWORD **)(a2 + 152) + 1LL)
      + v8[1]
      + *((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1))
     + 88;
  if ( v4 )
    v9 += 4 * v4[1] + 16;
  if ( v5 )
  {
    if ( v4 && RtlEqualSid(v5, v4) )
      v5 = 0LL;
    else
      v9 += 4 * v5[1] + 16;
  }
  Pool2 = (ACL *)ExAllocatePool2(256LL, v9, 538994003LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v9, 2u);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, Src, 0);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, v8, 0);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, SeAliasAdminsSid, 0);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, SeLocalSystemSid, 0);
    if ( v4 )
      RtlpAddKnownAce((int)v11, 2, 0, 983551, v4, 0);
    if ( v5 )
      RtlpAddKnownAce((int)v11, 2, 0, 983551, v5, 0);
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlpAddKnownAce((int)v11, 2, 0, 983551, SeRestrictedSid, 0);
    *a3 = v11;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
