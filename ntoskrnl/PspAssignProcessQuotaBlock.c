/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140745228
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockQuotaListShared @ 0x1402BECE8 (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspDereferenceQuotaBlock @ 0x140696A94 (PspDereferenceQuotaBlock.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     PspLookupProcessQuotaBlock @ 0x140745414 (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x140745544 (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x140747E00 (PspSafeReferenceQuotaBlock.c)
 *     PspInitializeQuotaBlock @ 0x1408599CC (PspInitializeQuotaBlock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 v6; // r12
  _BYTE *v7; // r14
  ULONG v8; // esi
  volatile signed __int32 *v9; // rbx
  int UserQuotaLimits; // edi
  struct _KTHREAD *CurrentThread; // rdi
  int *v12; // r15
  signed __int64 *v13; // rsi
  ULONG_PTR v14; // rcx
  __int64 Pool2; // rax
  __int64 v17; // rdi
  ULONG DestinationSidLength; // [rsp+20h] [rbp-59h] BYREF
  int v19; // [rsp+24h] [rbp-55h]
  __int64 v20; // [rsp+28h] [rbp-51h]
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v22; // [rsp+80h] [rbp+7h] BYREF

  v19 = 0;
  DestinationSidLength = 0;
  v5 = a1;
  v20 = a1;
  memset(SourceSid, 0, 0x44uLL);
  v6 = 0;
  v7 = 0LL;
  SeQueryUserSidToken(a3, SourceSid, 0x44u, &DestinationSidLength);
  if ( v5 && (*(_DWORD *)(v5 + 80) & 0x10) != 0 )
  {
    v8 = 0;
    v6 = 1;
    DestinationSidLength = 0;
  }
  else
  {
    v8 = DestinationSidLength;
    v7 = SourceSid;
  }
  v9 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v7, v8, v6, 0LL);
  if ( !v9 )
  {
    if ( v5 )
    {
      v12 = 0LL;
    }
    else
    {
      UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
      if ( UserQuotaLimits < 0 )
        return (unsigned int)UserQuotaLimits;
      if ( v19 )
      {
        CurrentThread = KeGetCurrentThread();
        v12 = PspDefaultResourceLimits;
        v13 = (signed __int64 *)PspQuotaBlockTable;
        v7 = 0LL;
        DestinationSidLength = 0;
        v14 = PspQuotaBlockTable;
        --CurrentThread->KernelApcDisable;
        v6 = 1;
        ExAcquirePushLockSharedEx(v14, 0LL);
        v9 = (volatile signed __int32 *)PspDefaultQuotaBlock;
        if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
        {
          PspUnlockQuotaListShared((__int64)CurrentThread, v13);
          _InterlockedIncrement(v9 + 129);
          goto LABEL_10;
        }
        PspUnlockQuotaListShared((__int64)CurrentThread, v13);
        v8 = DestinationSidLength;
      }
      else
      {
        v12 = (int *)&v22;
      }
      v5 = v20;
    }
    Pool2 = ExAllocatePool2(72LL, v8 + 576LL, 1649505104LL);
    v9 = (volatile signed __int32 *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    UserQuotaLimits = PspInitializeQuotaBlock(v5, v12, Pool2);
    if ( UserQuotaLimits < 0 )
    {
LABEL_28:
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock(v9);
      return (unsigned int)UserQuotaLimits;
    }
    if ( v7 )
      RtlCopySid(v8, (PSID)(v9 + 144), SourceSid);
    v17 = PspLookupProcessQuotaBlock(v7, v8, v6, v9);
    if ( v17 )
    {
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock(v9);
      v9 = (volatile signed __int32 *)v17;
    }
  }
LABEL_10:
  if ( !*(_QWORD *)(a2 + 1384) )
  {
    *(_QWORD *)(a2 + 1384) = v9;
    return 0LL;
  }
  if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(a2 + 1384),
                     (signed __int64)v9,
                     (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
    return 0LL;
  UserQuotaLimits = -1073741823;
  if ( v9 )
    goto LABEL_28;
  return (unsigned int)UserQuotaLimits;
}
