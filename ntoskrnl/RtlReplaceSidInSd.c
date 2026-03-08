/*
 * XREFs of RtlReplaceSidInSd @ 0x1409B94C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     RtlSubAuthorityCountSid @ 0x1402BE730 (RtlSubAuthorityCountSid.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14071C1D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140750BE0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140750C20 (RtlGetGroupSecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  PSECURITY_DESCRIPTOR v4; // r13
  unsigned int v8; // r14d
  NTSTATUS result; // eax
  char *v10; // rdi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  char *v14; // rdi
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rsi
  unsigned __int8 *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  void *v25; // r14
  __int64 v26; // rsi
  unsigned __int8 *v27; // rdi
  __int64 v28; // rdx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // r15d
  void *v33; // r14
  BOOLEAN OwnerDefaulted[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+24h] [rbp-Ch]
  PSID Owner; // [rsp+28h] [rbp-8h] BYREF
  BOOLEAN DaclPresent; // [rsp+88h] [rbp+58h] BYREF

  *NumChanges = 0;
  v4 = SecurityDescriptor;
  DaclPresent = 0;
  Owner = 0LL;
  v8 = 4 * *RtlSubAuthorityCountSid(OldSid);
  v35 = v8;
  result = RtlGetOwnerSecurityDescriptor(v4, &Owner, OwnerDefaulted);
  if ( result >= 0 )
  {
    v10 = (char *)Owner;
    if ( Owner )
    {
      if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
      {
        v11 = *((unsigned __int8 *)Owner + 1);
        v12 = *((unsigned __int8 *)OldSid + 1);
        if ( (_BYTE)v11 == (_BYTE)v12 || v11 == v12 + 1 )
        {
          v13 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v13 )
            v13 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v13 && !memcmp((char *)Owner + 8, (char *)OldSid + 8, v8) )
          {
            memmove(v10 + 8, (char *)NewSid + 8, v8);
            ++*NumChanges;
          }
        }
      }
    }
    Owner = 0LL;
    result = RtlGetGroupSecurityDescriptor(v4, &Owner, OwnerDefaulted);
    if ( result >= 0 )
    {
      v14 = (char *)Owner;
      if ( Owner )
      {
        if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
        {
          v15 = *((unsigned __int8 *)Owner + 1);
          v16 = *((unsigned __int8 *)OldSid + 1);
          if ( (_BYTE)v15 == (_BYTE)v16 || v15 == v16 + 1 )
          {
            v17 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v17 )
              v17 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v17 && !memcmp((char *)Owner + 8, (char *)OldSid + 8, v8) )
            {
              memmove(v14 + 8, (char *)NewSid + 8, v8);
              ++*NumChanges;
            }
          }
        }
      }
      Owner = 0LL;
      result = RtlGetDaclSecurityDescriptor(v4, &DaclPresent, (PACL *)&Owner, OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( DaclPresent )
        {
          if ( Owner )
          {
            v18 = *((unsigned __int16 *)Owner + 2);
            v19 = (unsigned __int8 *)Owner + 8;
            if ( *((_WORD *)Owner + 2) )
            {
              v20 = v8;
              while ( *v19 > 3u )
              {
                if ( *v19 == 4 )
                {
                  v21 = (__int64)&v19[RtlLengthSid(v19 + 12) + 12];
                  goto LABEL_30;
                }
LABEL_38:
                v19 += *((unsigned __int16 *)v19 + 1);
                if ( !--v18 )
                {
                  v4 = SecurityDescriptor;
                  v8 = v35;
                  goto LABEL_40;
                }
              }
              v21 = (__int64)(v19 + 8);
LABEL_30:
              if ( *(_BYTE *)v21 == *(_BYTE *)OldSid )
              {
                v22 = *(unsigned __int8 *)(v21 + 1);
                v23 = *((unsigned __int8 *)OldSid + 1);
                if ( (_BYTE)v22 == (_BYTE)v23 || v22 == v23 + 1 )
                {
                  v24 = *(_DWORD *)(v21 + 2) - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v24 )
                    v24 = *(unsigned __int16 *)(v21 + 6) - *((unsigned __int16 *)OldSid + 3);
                  if ( !v24 )
                  {
                    v25 = (void *)(v21 + 8);
                    if ( !memcmp((const void *)(v21 + 8), (char *)OldSid + 8, v20) )
                    {
                      memmove(v25, (char *)NewSid + 8, v20);
                      ++*NumChanges;
                    }
                  }
                }
              }
              goto LABEL_38;
            }
          }
        }
LABEL_40:
        Owner = 0LL;
        result = RtlGetSaclSecurityDescriptor(v4, &DaclPresent, (PACL *)&Owner, OwnerDefaulted);
        if ( result >= 0 && DaclPresent && Owner )
        {
          v26 = *((unsigned __int16 *)Owner + 2);
          v27 = (unsigned __int8 *)Owner + 8;
          if ( *((_WORD *)Owner + 2) )
          {
            while ( *v27 > 3u )
            {
              if ( *v27 == 4 )
              {
                v28 = (__int64)&v27[RtlLengthSid(v27 + 12) + 12];
                goto LABEL_48;
              }
LABEL_56:
              v8 = v35;
              v27 += *((unsigned __int16 *)v27 + 1);
              if ( !--v26 )
                return 0;
            }
            v28 = (__int64)(v27 + 8);
LABEL_48:
            if ( *(_BYTE *)v28 == *(_BYTE *)OldSid )
            {
              v29 = *(unsigned __int8 *)(v28 + 1);
              v30 = *((unsigned __int8 *)OldSid + 1);
              if ( (_BYTE)v29 == (_BYTE)v30 || v29 == v30 + 1 )
              {
                v31 = *(_DWORD *)(v28 + 2) - *(_DWORD *)((char *)OldSid + 2);
                if ( !v31 )
                  v31 = *(unsigned __int16 *)(v28 + 6) - *((unsigned __int16 *)OldSid + 3);
                if ( !v31 )
                {
                  v32 = v8;
                  v33 = (void *)(v28 + 8);
                  if ( !memcmp((const void *)(v28 + 8), (char *)OldSid + 8, v32) )
                  {
                    memmove(v33, (char *)NewSid + 8, v32);
                    ++*NumChanges;
                  }
                }
              }
            }
            goto LABEL_56;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
