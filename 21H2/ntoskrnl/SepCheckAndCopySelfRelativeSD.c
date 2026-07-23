/*
 * XREFs of SepCheckAndCopySelfRelativeSD @ 0x140596F58
 * Callers:
 *     SeOperationAuditAlarm @ 0x14091E91C (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 * Callees:
 *     RtlAbsoluteToSelfRelativeSD @ 0x1407685F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     SepSecurityDescriptorStrictLength @ 0x140924F3C (SepSecurityDescriptorStrictLength.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCheckAndCopySelfRelativeSD(__int16 *a1, PVOID *a2, ULONG *a3, _BYTE *a4)
{
  NTSTATUS v7; // ebx
  PVOID PoolWithTag; // rax
  void *v9; // rcx
  PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  AbsoluteSecurityDescriptor = a1;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v7 = 0;
  if ( a1 )
  {
    if ( a1[1] < 0 )
    {
      *a3 = SepSecurityDescriptorStrictLength();
      *a2 = v9;
    }
    else
    {
      v7 = RtlAbsoluteToSelfRelativeSD(&AbsoluteSecurityDescriptor, 0LL, a3);
      if ( v7 == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a3, 0x70416553u);
        *a2 = PoolWithTag;
        if ( PoolWithTag )
        {
          v7 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, PoolWithTag, a3);
          if ( v7 >= 0 )
          {
            *a4 = 1;
          }
          else
          {
            ExFreePoolWithTag(*a2, 0);
            *a2 = 0LL;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v7;
}
