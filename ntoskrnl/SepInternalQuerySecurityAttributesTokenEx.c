/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140247394
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x140205220 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x1406D5B30 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SeQuerySecurityAttributesToken @ 0x14070BAA0 (SeQuerySecurityAttributesToken.c)
 * Callees:
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14024753C (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402475E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402976E0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402988C8 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1402EF41C (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x1402F9D00 (SepInternalFillNoAttribs.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1402FF8B0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  void *v8; // rdi
  unsigned int SecurityAttributesToken; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 SecurityAttributesList; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v26 = 0LL;
  v27 = 0;
  if ( (*(_DWORD *)(a1 + 200) & 0x20000) == 0
    && (a5 || (unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4)) )
  {
    if ( (int)SepGetProcUniqueLuidAndIndexFromTokenEx(0LL, a1, &v27, &v26) >= 0 )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v27);
      v16 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
        if ( *((_QWORD *)v16 + 2) )
        {
          SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
          v8 = (void *)SecurityAttributesList;
          SecurityAttributesToken = SecurityAttributesList
                                  ? AuthzBasepDuplicateSecurityAttributes(
                                      *((_QWORD *)v16 + 2),
                                      SecurityAttributesList,
                                      0LL)
                                  : -1073741801;
        }
        else
        {
          SecurityAttributesToken = -1073741275;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v16);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = -1LL << ((unsigned __int8)v17 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)v18;
            v25 = (v24 & SchedulerAssist[5]) == 0;
            v19 = (unsigned int)v24 & SchedulerAssist[5];
            SchedulerAssist[5] = v19;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v17);
        if ( SecurityAttributesToken != -1073741275 )
        {
          if ( (SecurityAttributesToken & 0x80000000) != 0 )
          {
            if ( !v8 )
              return SecurityAttributesToken;
          }
          else
          {
            if ( !v8 )
              return SecurityAttributesToken;
            SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
          }
          AuthzBasepFreeSecurityAttributesList(v8, v18, v19);
          ExFreePoolWithTag(v8, 0);
          return SecurityAttributesToken;
        }
      }
    }
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  }
  else
  {
    return (unsigned int)AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
}
