__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned int v2; // ebx
  char *Pool2; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  char *v8; // rcx
  ULONG i; // r14d
  NTSTATUS v10; // eax
  _BYTE *v11; // rsi
  int SelfRelativeSD; // eax
  ULONG v13; // r14d
  ULONG v14; // r12d
  char *v15; // rax
  char *v16; // rsi
  int v17; // r14d
  char *v18; // rax
  char *v19; // rcx
  ULONG Length; // [rsp+38h] [rbp-29h] BYREF
  BOOLEAN DaclPresent; // [rsp+3Ch] [rbp-25h] BYREF
  BOOLEAN DaclDefaulted[3]; // [rsp+3Dh] [rbp-24h] BYREF
  PACL Dacla; // [rsp+40h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-19h] BYREF
  PSID Owner; // [rsp+50h] [rbp-11h] BYREF
  __int16 Sid2; // [rsp+58h] [rbp-9h] BYREF
  int v27; // [rsp+5Ah] [rbp-7h]
  __int16 v28; // [rsp+5Eh] [rbp-3h]
  int v29; // [rsp+60h] [rbp-1h]
  int v30; // [rsp+64h] [rbp+3h]
  __int16 v31; // [rsp+70h] [rbp+Fh] BYREF
  int v32; // [rsp+72h] [rbp+11h]
  __int16 v33; // [rsp+76h] [rbp+15h]
  int v34; // [rsp+78h] [rbp+17h]

  v2 = 0;
  Length = 0;
  Owner = 0LL;
  DaclPresent = 0;
  Ace = 0LL;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, Length, 1399615318LL);
  if ( !Pool2 )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Pool2, Length, &Length);
  v8 = Pool2;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, &DaclPresent, &Dacla, DaclDefaulted);
  v8 = Pool2;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Pool2, &Owner, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    v8 = Pool2;
LABEL_6:
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v32 = 0;
  v27 = 0;
  v31 = 257;
  v33 = 1280;
  v34 = 18;
  Sid2 = 513;
  v28 = 1280;
  v29 = 32;
  v30 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v10 = RtlGetAce(Dacla, i, &Ace);
      v11 = Ace;
      if ( v10 < 0 )
        v11 = 0LL;
      Ace = v11;
      if ( !v11 )
        break;
      if ( !*v11 && RtlEqualSid(v11 + 8, &v31) )
      {
        if ( (v11[1] & 3) == 3 )
          goto LABEL_33;
        v11[1] |= 3u;
        SelfRelativeSD = NtSetSecurityObject(Handle, 4u, Pool2);
        goto LABEL_28;
      }
    }
  }
  v13 = Length;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2((__int64)Pool2, &Length) == -1073741789 )
  {
    v14 = Length;
    v15 = (char *)ExAllocatePool2(256LL, Length, 1399615318LL);
    v16 = v15;
    if ( !v15 )
      goto LABEL_32;
    memmove(v15, Pool2, v13);
    ExFreePoolWithTag(Pool2, 0);
    Length = v14;
    Pool2 = v16;
    v17 = RtlSelfRelativeToAbsoluteSD2((__int64)v16, &Length);
    if ( v17 < 0 )
    {
LABEL_26:
      ExFreePoolWithTag(v16, 0);
      return (unsigned int)v17;
    }
  }
  SelfRelativeSD = RtlSetOwnerSecurityDescriptor(Pool2, &Sid2, 0);
  if ( SelfRelativeSD < 0
    || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(Pool2, 1u, Dacl, 0), SelfRelativeSD < 0)
    || (Length = 0, SelfRelativeSD = RtlMakeSelfRelativeSD((int *)Pool2, 0LL, &Length), SelfRelativeSD != -1073741789) )
  {
LABEL_28:
    v2 = SelfRelativeSD;
LABEL_33:
    v19 = Pool2;
    goto LABEL_36;
  }
  v18 = (char *)ExAllocatePool2(256LL, Length, 1399615318LL);
  v16 = v18;
  if ( !v18 )
  {
LABEL_32:
    v2 = -1073741670;
    goto LABEL_33;
  }
  v17 = RtlMakeSelfRelativeSD((int *)Pool2, v18, &Length);
  ExFreePoolWithTag(Pool2, 0);
  if ( v17 < 0 )
    goto LABEL_26;
  v2 = NtSetSecurityObject(Handle, 5u, v16);
  v19 = v16;
LABEL_36:
  ExFreePoolWithTag(v19, 0);
  return v2;
}
