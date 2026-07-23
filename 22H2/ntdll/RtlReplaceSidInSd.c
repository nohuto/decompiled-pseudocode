/*
 * XREFs of RtlReplaceSidInSd @ 0x1800E6B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x180071D50 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x180076C20 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800795B0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x18007AA50 (RtlGetGroupSecurityDescriptor.c)
 *     memcmp @ 0x1800906D0 (memcmp.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

NTSTATUS __cdecl RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  int v5; // r14d
  size_t v7; // r14
  PSECURITY_DESCRIPTOR v9; // r13
  NTSTATUS result; // eax
  int v11; // eax
  int v12; // ecx
  char *v13; // rsi
  int v14; // eax
  int v15; // ecx
  char *v16; // rsi
  __int64 AceCount; // rsi
  PACL v18; // rdi
  PACL v19; // rdx
  int v20; // eax
  int v21; // ecx
  ACL *v22; // r15
  __int64 v23; // rsi
  PACL v24; // rdi
  PACL v25; // rdx
  int v26; // eax
  int v27; // ecx
  ACL *v28; // r15
  unsigned int v29; // [rsp+20h] [rbp-18h]
  PACL Dacl[2]; // [rsp+28h] [rbp-10h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+88h] [rbp+50h] BYREF
  char *v33; // [rsp+90h] [rbp+58h]
  PSID Owner; // [rsp+98h] [rbp+60h] BYREF

  v33 = (char *)NewSid;
  *NumChanges = 0;
  v5 = *((unsigned __int8 *)OldSid + 1);
  Owner = 0LL;
  v7 = (unsigned int)(4 * v5);
  v29 = v7;
  v9 = SecurityDescriptor;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    if ( Owner )
    {
      if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
      {
        v11 = *((unsigned __int8 *)OldSid + 1);
        if ( *((_BYTE *)Owner + 1) == (_BYTE)v11 || *((unsigned __int8 *)Owner + 1) == v11 + 1 )
        {
          v12 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v12 )
            v12 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v12 )
          {
            v13 = (char *)Owner + 8;
            if ( !memcmp((char *)Owner + 8, (char *)OldSid + 8, (unsigned int)v7) )
            {
              memmove(v13, (char *)NewSid + 8, (unsigned int)v7);
              ++*NumChanges;
            }
          }
        }
      }
    }
    Owner = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, &Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      if ( Owner )
      {
        if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
        {
          v14 = *((unsigned __int8 *)OldSid + 1);
          if ( *((_BYTE *)Owner + 1) == (_BYTE)v14 || *((unsigned __int8 *)Owner + 1) == v14 + 1 )
          {
            v15 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v15 )
              v15 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v15 )
            {
              v16 = (char *)Owner + 8;
              if ( !memcmp((char *)Owner + 8, (char *)OldSid + 8, (unsigned int)v7) )
              {
                memmove(v16, (char *)NewSid + 8, (unsigned int)v7);
                ++*NumChanges;
              }
            }
          }
        }
      }
      Dacl[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, (PBOOLEAN)&Owner, Dacl, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( (_BYTE)Owner )
        {
          if ( Dacl[0] )
          {
            AceCount = Dacl[0]->AceCount;
            v18 = Dacl[0] + 1;
            if ( Dacl[0]->AceCount )
            {
              while ( v18->AclRevision > 3u )
              {
                if ( v18->AclRevision == 4 )
                {
                  v19 = (PACL)((char *)v18 + 4 * HIBYTE(v18[1].AceCount) + 20);
                  goto LABEL_29;
                }
LABEL_37:
                v18 = (PACL)((char *)v18 + v18->AclSize);
                if ( !--AceCount )
                {
                  v9 = SecurityDescriptor;
                  v7 = (unsigned int)v7;
                  goto LABEL_39;
                }
              }
              v19 = v18 + 1;
LABEL_29:
              if ( v19->AclRevision == *(_BYTE *)OldSid )
              {
                v20 = *((unsigned __int8 *)OldSid + 1);
                if ( v19->Sbz1 == (_BYTE)v20 || v19->Sbz1 == v20 + 1 )
                {
                  v21 = *(_DWORD *)&v19->AclSize - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v21 )
                    v21 = v19->Sbz2 - *((unsigned __int16 *)OldSid + 3);
                  if ( !v21 )
                  {
                    v22 = v19 + 1;
                    if ( !memcmp(&v19[1], (char *)OldSid + 8, (unsigned int)v7) )
                    {
                      memmove(v22, v33 + 8, (unsigned int)v7);
                      ++*NumChanges;
                    }
                  }
                }
              }
              goto LABEL_37;
            }
          }
        }
LABEL_39:
        Dacl[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, (PBOOLEAN)&Owner, Dacl, &OwnerDefaulted);
        if ( result >= 0 && (_BYTE)Owner && Dacl[0] )
        {
          v23 = Dacl[0]->AceCount;
          v24 = Dacl[0] + 1;
          if ( Dacl[0]->AceCount )
          {
            while ( v24->AclRevision > 3u )
            {
              if ( v24->AclRevision == 4 )
              {
                v25 = (PACL)((char *)v24 + 4 * HIBYTE(v24[1].AceCount) + 20);
                goto LABEL_47;
              }
LABEL_55:
              v7 = v29;
              v24 = (PACL)((char *)v24 + v24->AclSize);
              if ( !--v23 )
                return 0;
            }
            v25 = v24 + 1;
LABEL_47:
            if ( v25->AclRevision == *(_BYTE *)OldSid )
            {
              v26 = *((unsigned __int8 *)OldSid + 1);
              if ( v25->Sbz1 == (_BYTE)v26 || v25->Sbz1 == v26 + 1 )
              {
                v27 = *(_DWORD *)&v25->AclSize - *(_DWORD *)((char *)OldSid + 2);
                if ( !v27 )
                  v27 = v25->Sbz2 - *((unsigned __int16 *)OldSid + 3);
                if ( !v27 )
                {
                  v28 = v25 + 1;
                  if ( !memcmp(&v25[1], (char *)OldSid + 8, v7) )
                  {
                    memmove(v28, v33 + 8, v7);
                    ++*NumChanges;
                  }
                }
              }
            }
            goto LABEL_55;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
