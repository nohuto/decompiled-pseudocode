/*
 * XREFs of IntpReconstructPartitionGroupFromKernel @ 0x1C005EF2C
 * Callers:
 *     IntPartArbInit @ 0x1C00A318C (IntPartArbInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     RtlNumberOfSetBitsUlongPtr_0 @ 0x1C0001B1B (RtlNumberOfSetBitsUlongPtr_0.c)
 *     IntpAllocateGroupContext @ 0x1C005EED4 (IntpAllocateGroupContext.c)
 */

__int64 __fastcall IntpReconstructPartitionGroupFromKernel(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int InterruptPartitionInformation; // edi
  unsigned __int8 v6; // r14
  _QWORD *GroupContext; // rsi
  unsigned __int8 v8; // bp
  __int64 v9; // rbx
  int v11; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR Target[2]; // [rsp+28h] [rbp-30h] BYREF

  v11 = 0;
  *(_OWORD *)Target = 0LL;
  v3 = KeQueryInterruptPartitionCount(0LL, &v11);
  InterruptPartitionInformation = v3;
  if ( v3 != 259 && v3 >= 0 )
  {
    v6 = v11;
    GroupContext = (_QWORD *)IntpAllocateGroupContext(v4, v11);
    if ( GroupContext )
    {
      v8 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          InterruptPartitionInformation = KeQueryInterruptPartitionInformation(0LL, v8, Target);
          if ( InterruptPartitionInformation < 0 )
            break;
          v9 = 2LL * v8;
          GroupContext[2 * v8++ + 2] = Target[0];
          BYTE1(GroupContext[v9 + 1]) = RtlNumberOfSetBitsUlongPtr_0(Target[0]);
          if ( v8 >= v6 )
            goto LABEL_8;
        }
        ExFreePoolWithTag(GroupContext, 0);
      }
      else
      {
LABEL_8:
        *a2 = GroupContext;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)InterruptPartitionInformation;
}
