/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x14060BFA4
 * Callers:
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     PspUnlockQuotaListShared @ 0x140240C38 (PspUnlockQuotaListShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspLookupProcessQuotaBlock @ 0x14060C18C (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x14060C2BC (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x14060C454 (PspSafeReferenceQuotaBlock.c)
 *     PspDereferenceQuotaBlock @ 0x140655230 (PspDereferenceQuotaBlock.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     PspInitializeQuotaBlock @ 0x1407CE944 (PspInitializeQuotaBlock.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 v6; // r13
  _BYTE *v7; // r14
  volatile signed __int32 *v8; // rbx
  int UserQuotaLimits; // edi
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v12; // rdi
  char *v13; // r12
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v16; // [rsp+80h] [rbp+7h] BYREF

  v5 = a1;
  memset(SourceSid, 0, 0x44uLL);
  v6 = 0;
  v7 = 0LL;
  SeQueryUserSidToken(a3, SourceSid, 68LL);
  if ( v5 && (*(_DWORD *)(v5 + 80) & 0x10) != 0 )
    v6 = 1;
  else
    v7 = SourceSid;
  v8 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v7, 0LL, v6, 0LL);
  if ( v8 )
    goto LABEL_7;
  if ( v5 )
  {
    v13 = 0LL;
  }
  else
  {
    UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
    if ( UserQuotaLimits < 0 )
      return (unsigned int)UserQuotaLimits;
    v13 = &v16;
    v5 = a1;
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x240uLL, 0x62517350u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    UserQuotaLimits = PspInitializeQuotaBlock(v5, v13, PoolWithTag);
    if ( UserQuotaLimits < 0 )
    {
LABEL_22:
      if ( v8 )
      {
        _InterlockedAdd(v8 + 129, 0xFFFFFFFF);
        PspDereferenceQuotaBlock((PVOID)v8);
      }
      return (unsigned int)UserQuotaLimits;
    }
    if ( v7 )
      RtlCopySid(0, (PSID)(v8 + 144), SourceSid);
    v12 = PspLookupProcessQuotaBlock(v7, 0LL, v6, v8);
    if ( v12 )
    {
      _InterlockedAdd(v8 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock((PVOID)v8);
      v8 = (volatile signed __int32 *)v12;
    }
LABEL_7:
    if ( !*(_QWORD *)(a2 + 1384) )
    {
      *(_QWORD *)(a2 + 1384) = v8;
      return 0LL;
    }
    if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(a2 + 1384),
                       (signed __int64)v8,
                       (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
      return 0LL;
    UserQuotaLimits = -1073741823;
    goto LABEL_22;
  }
  return (unsigned int)-1073741670;
}
