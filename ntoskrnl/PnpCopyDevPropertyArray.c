/*
 * XREFs of PnpCopyDevPropertyArray @ 0x140807540
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwInterfaceCreate @ 0x140808CA8 (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140964A90 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     PnpCopyDevProperty @ 0x140807610 (PnpCopyDevProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCopyDevPropertyArray(ULONGLONG ullMultiplicand, __int64 a2, __int64 a3, _DWORD *a4, PVOID *a5)
{
  PVOID *v5; // rbx
  NTSTATUS v6; // esi
  unsigned int v9; // ebp
  __int64 Pool2; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 i; // rbp
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF

  v5 = a5;
  v6 = 0;
  *a4 = 0;
  pullResult = 0LL;
  v9 = ullMultiplicand;
  *v5 = 0LL;
  if ( a2 && (_DWORD)ullMultiplicand )
  {
    v6 = RtlULongLongMult((unsigned int)ullMultiplicand, 0x30uLL, &pullResult);
    if ( v6 >= 0 )
    {
      Pool2 = ExAllocatePool2(256LL, pullResult, 1466986064LL);
      *v5 = (PVOID)Pool2;
      if ( Pool2 )
      {
        v13 = 0LL;
        if ( !v9 )
          return (unsigned int)v6;
        while ( 1 )
        {
          v6 = PnpCopyDevProperty(a2 + 48 * v13, v12, (char *)*v5 + 48 * v13);
          if ( v6 < 0 )
            break;
          ++*a4;
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v9 )
            return (unsigned int)v6;
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
    if ( *v5 )
    {
      for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
        ExFreePoolWithTag(*((PVOID *)*v5 + 6 * i + 5), 0x57706E50u);
      ExFreePoolWithTag(*v5, 0x57706E50u);
      *a4 = 0;
      *v5 = 0LL;
    }
  }
  return (unsigned int)v6;
}
