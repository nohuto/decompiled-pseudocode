/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x140732348
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x140731FB0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402526B0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlGetAce @ 0x140347A20 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14065D3B0 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x14066C0D0 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x14067B860 (NtSetSecurityObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406EFA60 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x140767A74 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x140912020 (RtlSelfRelativeToAbsoluteSD2.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  void *v7; // rcx
  ULONG i; // r14d
  NTSTATUS v9; // eax
  _BYTE *v10; // rsi
  char v11; // al
  void *v12; // rcx
  NTSTATUS SelfRelativeSD; // eax
  ULONG v15; // r14d
  ULONG v16; // r15d
  PVOID v17; // rax
  void *v18; // rsi
  NTSTATUS v19; // r14d
  PVOID v20; // rax
  ULONG Length; // [rsp+38h] [rbp-29h] BYREF
  BOOLEAN DaclPresent; // [rsp+3Ch] [rbp-25h] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+3Dh] [rbp-24h] BYREF
  PACL Dacla; // [rsp+40h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-19h] BYREF
  PSID Owner; // [rsp+50h] [rbp-11h] BYREF
  __int16 Sid2; // [rsp+58h] [rbp-9h] BYREF
  int v28; // [rsp+5Ah] [rbp-7h]
  __int16 v29; // [rsp+5Eh] [rbp-3h]
  int v30; // [rsp+60h] [rbp-1h]
  int v31; // [rsp+64h] [rbp+3h]
  __int16 v32; // [rsp+70h] [rbp+Fh] BYREF
  int v33; // [rsp+72h] [rbp+11h]
  __int16 v34; // [rsp+76h] [rbp+15h]
  int v35; // [rsp+78h] [rbp+17h]

  v2 = 0;
  Length = 0;
  Owner = 0LL;
  DaclPresent = 0;
  Ace = 0LL;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  if ( !PoolWithTag )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, PoolWithTag, Length, &Length);
  v7 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_24;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(PoolWithTag, &DaclPresent, &Dacla, DaclDefaulted);
  v7 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_24;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(PoolWithTag, &Owner, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    v7 = PoolWithTag;
LABEL_24:
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v33 = 0;
  v28 = 0;
  v32 = 257;
  v34 = 1280;
  v35 = 18;
  Sid2 = 513;
  v29 = 1280;
  v30 = 32;
  v31 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v9 = RtlGetAce(Dacla, i, &Ace);
      v10 = Ace;
      if ( v9 < 0 )
        v10 = 0LL;
      Ace = v10;
      if ( !v10 )
        break;
      if ( !*v10 && RtlEqualSid(v10 + 8, &v32) )
      {
        v11 = v10[1];
        if ( (v11 & 1) == 0 || (v11 & 2) == 0 )
        {
          v10[1] = v11 | 3;
          SelfRelativeSD = NtSetSecurityObject(Handle, 4u, PoolWithTag);
          goto LABEL_26;
        }
        goto LABEL_18;
      }
    }
  }
  v15 = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(PoolWithTag, &Length) != -1073741789 )
    goto LABEL_30;
  v16 = Length;
  v17 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  v18 = v17;
  if ( !v17 )
    goto LABEL_37;
  memmove(v17, PoolWithTag, v15);
  ExFreePoolWithTag(PoolWithTag, 0);
  Length = v16;
  PoolWithTag = v18;
  v19 = RtlSelfRelativeToAbsoluteSD2(v18, &Length);
  if ( v19 >= 0 )
  {
LABEL_30:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(PoolWithTag, &Sid2, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(PoolWithTag, 1u, Dacl, 0), SelfRelativeSD < 0)
      || (Length = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(PoolWithTag, 0LL, &Length), SelfRelativeSD != -1073741789) )
    {
LABEL_26:
      v2 = SelfRelativeSD;
LABEL_18:
      v12 = PoolWithTag;
LABEL_19:
      ExFreePoolWithTag(v12, 0);
      return v2;
    }
    v20 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
    v18 = v20;
    if ( v20 )
    {
      v19 = RtlMakeSelfRelativeSD(PoolWithTag, v20, &Length);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v19 >= 0 )
      {
        v2 = NtSetSecurityObject(Handle, 5u, v18);
        v12 = v18;
        goto LABEL_19;
      }
      goto LABEL_36;
    }
LABEL_37:
    v2 = -1073741670;
    goto LABEL_18;
  }
LABEL_36:
  ExFreePoolWithTag(v18, 0);
  return (unsigned int)v19;
}
