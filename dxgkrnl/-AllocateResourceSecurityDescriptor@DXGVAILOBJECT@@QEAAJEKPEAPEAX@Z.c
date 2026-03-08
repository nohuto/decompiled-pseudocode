/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C035C26C
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CB2C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C035D350 (-GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x1C035D458 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        char a2,
        ACCESS_MASK a3,
        void **a4)
{
  ULONG v5; // r12d
  NTSTATUS ObjectSecurity; // eax
  __int64 v8; // rbx
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v10; // rdx
  int HandleProcessSession; // eax
  unsigned int v12; // eax
  unsigned int v13; // r15d
  WORD v14; // di
  NTSTATUS OwnerSecurityDescriptor; // eax
  ULONG v16; // r14d
  __int64 v17; // rsi
  NTSTATUS GroupSecurityDescriptor; // eax
  struct _ACL *v19; // rax
  DXGVAILOBJECT *v20; // rcx
  int v21; // r13d
  NTSTATUS v22; // eax
  ULONG v23; // r13d
  char *v24; // rax
  char *v25; // rdi
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  char *v28; // rbx
  NTSTATUS v29; // eax
  struct _ACL *v30; // r14
  NTSTATUS Acl; // eax
  struct _ACL *v32; // rax
  unsigned __int16 v33; // si
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int8 MemoryAllocated[6]; // [rsp+32h] [rbp-47h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-39h] BYREF
  PVOID AceList; // [rsp+48h] [rbp-31h] BYREF
  PACL Dacl; // [rsp+50h] [rbp-29h] BYREF
  ACCESS_MASK AccessMask; // [rsp+58h] [rbp-21h]
  PSID Owner; // [rsp+60h] [rbp-19h] BYREF
  PSID Group; // [rsp+68h] [rbp-11h] BYREF
  void **v49; // [rsp+70h] [rbp-9h]
  _BYTE Sid[24]; // [rsp+78h] [rbp-1h] BYREF

  LODWORD(Ace) = -1;
  AccessMask = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  v5 = 0;
  Owner = 0LL;
  Group = 0LL;
  v49 = a4;
  ObjectSecurity = ObGetObjectSecurity(this, &SecurityDescriptor, MemoryAllocated);
  LODWORD(v8) = ObjectSecurity;
  if ( !SecurityDescriptor )
    goto LABEL_40;
  if ( ObjectSecurity < 0 )
    goto LABEL_42;
  DaclPresent = 0;
  DaclDefaulted = 0;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
  v8 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_4;
  if ( !DaclPresent || DaclDefaulted )
  {
LABEL_40:
    v10 = -1073741786LL;
    LODWORD(v8) = -1073741786;
    goto LABEL_41;
  }
  HandleProcessSession = DXGVAILOBJECT::GetHandleProcessSession(this, (unsigned int *)&Ace);
  v8 = HandleProcessSession;
  if ( HandleProcessSession >= 0 )
  {
    v12 = *((_DWORD *)this + 34);
    v13 = (unsigned int)Ace;
    if ( v12 != (_DWORD)Ace )
    {
      LODWORD(v8) = -1073741790;
      WdLogSingleEntry3(3LL, -1073741790LL, v12, (unsigned int)Ace);
      goto LABEL_42;
    }
    v14 = 0;
    if ( !a2 )
      goto LABEL_14;
    DaclDefaulted = 0;
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &DaclDefaulted);
    v8 = OwnerSecurityDescriptor;
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_4;
    if ( Owner )
    {
      v16 = RtlLengthSid(Owner);
      v17 = v16;
    }
    else
    {
LABEL_14:
      v17 = 0LL;
      v16 = 0;
      if ( !a2 )
        goto LABEL_18;
    }
    DaclPresent = 0;
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &DaclPresent);
    v8 = GroupSecurityDescriptor;
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( Group )
        v5 = RtlLengthSid(Group);
LABEL_18:
      v19 = Dacl;
      v20 = 0LL;
      Ace = 0LL;
      v21 = 0;
      if ( Dacl->AceCount )
      {
        do
        {
          v22 = RtlGetAce(v19, v14, &Ace);
          v8 = v22;
          if ( v22 < 0 )
            goto LABEL_4;
          v21 += RtlLengthSid((char *)Ace + 8) + 12;
          ++v14;
          v19 = Dacl;
        }
        while ( v14 < Dacl->AceCount );
      }
      DXGVAILOBJECT::InitializeDWMSid(v20, v13, Sid);
      v23 = RtlLengthSid(Sid) + 12 + v21;
      v24 = (char *)operator new[](v23 + v5 + v16 + 48, 0x4B677844u, 256LL);
      v25 = v24;
      if ( !v24 )
      {
        LODWORD(v8) = -1073741801;
        WdLogSingleEntry2(3LL, v23 + v5 + v16 + 48, -1073741801LL);
        goto LABEL_42;
      }
      v26 = RtlCreateSecurityDescriptor(v24, 1u);
      v8 = v26;
      if ( v26 < 0 )
        goto LABEL_37;
      if ( Owner )
      {
        RtlCopySid(v16, v25 + 40, Owner);
        v27 = RtlSetOwnerSecurityDescriptor(v25, v25 + 40, 0);
        v8 = v27;
        if ( v27 < 0 )
          goto LABEL_37;
      }
      if ( Group )
      {
        v17 = v16;
        v28 = &v25[v16];
        RtlCopySid(v5, v28 + 40, Group);
        v29 = RtlSetGroupSecurityDescriptor(v25, v28 + 40, 0);
        v8 = v29;
        if ( v29 < 0 )
        {
LABEL_37:
          WdLogSingleEntry1(3LL, v8);
          goto LABEL_38;
        }
      }
      else if ( (int)v8 < 0 )
      {
LABEL_38:
        operator delete(v25);
        goto LABEL_42;
      }
      v30 = (struct _ACL *)&v25[v17 + 40 + v5];
      Acl = RtlCreateAcl(v30, v23, 4u);
      v8 = Acl;
      if ( Acl >= 0 )
      {
        v32 = Dacl;
        v33 = 0;
        AceList = 0LL;
        if ( Dacl->AceCount )
        {
          while ( 1 )
          {
            v34 = RtlGetAce(v32, v33, &AceList);
            v8 = v34;
            if ( v34 < 0 )
              break;
            v35 = RtlAddAce(v30, 4u, 0, AceList, *((unsigned __int16 *)AceList + 1));
            v8 = v35;
            if ( v35 < 0 )
              break;
            v32 = Dacl;
            if ( ++v33 >= Dacl->AceCount )
              goto LABEL_35;
          }
        }
        else
        {
LABEL_35:
          v36 = RtlAddAccessAllowedAce(v30, 4u, AccessMask, Sid);
          v8 = v36;
          if ( v36 >= 0 )
          {
            v37 = RtlSetDaclSecurityDescriptor(v25, 1u, v30, 0);
            v8 = v37;
            if ( v37 >= 0 )
            {
              *v49 = v25;
              goto LABEL_42;
            }
          }
        }
      }
      goto LABEL_37;
    }
  }
LABEL_4:
  v10 = v8;
LABEL_41:
  WdLogSingleEntry1(3LL, v10);
LABEL_42:
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  return (unsigned int)v8;
}
