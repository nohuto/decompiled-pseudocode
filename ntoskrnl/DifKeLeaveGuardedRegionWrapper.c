/*
 * XREFs of DifKeLeaveGuardedRegionWrapper @ 0x1405E1A70
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

char DifKeLeaveGuardedRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  int v6; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdi
  _QWORD *j; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(274);
  v5 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v2 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v15 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v6 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v2, v1, v3, v4);
      goto LABEL_9;
    }
  }
  v15 = 0LL;
LABEL_10:
  for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int64 *))*(i - 1))(&v15);
  }
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    CurrentThread = (struct _KTHREAD *)((char *)CurrentThread + 152);
    if ( *(struct _KTHREAD **)&CurrentThread->Header.Lock != CurrentThread )
      LOBYTE(CurrentThread) = KiCheckForKernelApcDelivery();
  }
  if ( v5 )
  {
    v11 = v5 + 6;
    for ( j = (_QWORD *)v5[6]; j != v11; j = (_QWORD *)*j )
    {
      CurrentThread = (struct _KTHREAD *)(j - 2);
      if ( j != (_QWORD *)16 )
        LOBYTE(CurrentThread) = ((__int64 (__fastcall *)(__int64 *))CurrentThread->Header.WaitListHead.Flink)(&v15);
    }
  }
  return (char)CurrentThread;
}
