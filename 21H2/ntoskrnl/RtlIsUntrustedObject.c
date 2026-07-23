/*
 * XREFs of RtlIsUntrustedObject @ 0x1402A42E0
 * Callers:
 *     SeGetImageRequiredSigningLevel @ 0x1406C311C (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     RtlFindAceByType @ 0x14035CF60 (RtlFindAceByType.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x1403FD100 (ZwQuerySecurityObject.c)
 *     ObQuerySecurityObject @ 0x1406F4264 (ObQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  _BYTE *PoolWithQuotaTag; // rdi
  int v4; // r13d
  char v6; // r12
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  ACL *v11; // rsi
  _DWORD *AceByType; // rax
  NTSTATUS SecurityObject; // eax
  int v14; // ecx
  ULONG LengthNeeded; // [rsp+30h] [rbp-69h] BYREF
  ULONG Index; // [rsp+34h] [rbp-65h] BYREF
  PBOOLEAN v17; // [rsp+38h] [rbp-61h]
  _BYTE SecurityDescriptor[128]; // [rsp+40h] [rbp-59h] BYREF

  LengthNeeded = 0;
  PoolWithQuotaTag = SecurityDescriptor;
  v17 = IsUntrustedObject;
  v4 = (int)Object;
  *IsUntrustedObject = 1;
  if ( Object )
  {
    if ( !Handle )
      goto LABEL_3;
    return -1073741811;
  }
  if ( !Handle )
    return -1073741811;
LABEL_3:
  v6 = 0;
  if ( Handle )
  {
    result = ZwQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x7Cu, &LengthNeeded);
    v8 = result;
    if ( result >= 0 )
      goto LABEL_5;
    if ( result == -1073741789 )
    {
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
      if ( !PoolWithQuotaTag )
        return -1073741801;
      v6 = 1;
      SecurityObject = ZwQuerySecurityObject(Handle, 0x10u, PoolWithQuotaTag, 0x7Cu, &LengthNeeded);
      goto LABEL_24;
    }
  }
  else
  {
    result = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 124, (__int64)&LengthNeeded);
    v8 = result;
    if ( result >= 0 )
      goto LABEL_5;
    if ( result == -1073741789 )
    {
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
      if ( !PoolWithQuotaTag )
        return -1073741801;
      v6 = 1;
      SecurityObject = ObQuerySecurityObject(v4, 16, (_DWORD)PoolWithQuotaTag, 124, (__int64)&LengthNeeded);
LABEL_24:
      v8 = SecurityObject;
      if ( SecurityObject < 0 )
      {
LABEL_25:
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
        return v8;
      }
LABEL_5:
      v9 = *((_WORD *)PoolWithQuotaTag + 1);
      if ( (v9 & 0x10) != 0 )
      {
        if ( v9 >= 0 )
        {
          v11 = (ACL *)*((_QWORD *)PoolWithQuotaTag + 3);
        }
        else
        {
          v10 = *((unsigned int *)PoolWithQuotaTag + 3);
          if ( !(_DWORD)v10 )
            goto LABEL_12;
          v11 = (ACL *)&PoolWithQuotaTag[v10];
        }
        if ( v11 )
        {
          Index = 0;
          while ( 1 )
          {
            AceByType = RtlFindAceByType(v11, 0x11u, &Index);
            if ( !AceByType )
              break;
            if ( (*((_BYTE *)AceByType + 1) & 8) == 0 )
            {
              v14 = *((unsigned __int8 *)AceByType + 9);
              if ( !(_BYTE)v14 || AceByType[v14 - 1 + 4] < 0x2000u )
                goto LABEL_13;
              break;
            }
          }
        }
      }
LABEL_12:
      *v17 = 0;
LABEL_13:
      if ( !v6 )
        return v8;
      goto LABEL_25;
    }
  }
  return result;
}
