/*
 * XREFs of DifKeLowerIrqlWrapper @ 0x1405E1B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifKeLowerIrqlWrapper(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbp
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdi
  int v8; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  _QWORD **v16; // rdi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(275);
  v7 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v4 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v8 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v8 & 0x18) == 0 )
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_12;
LABEL_10:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
    goto LABEL_11;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_11:
  *(_QWORD *)&v18 = ReturnAddressForWrappers;
LABEL_12:
  BYTE8(v18) = v1;
  for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_17:
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v1);
  if ( v7 )
  {
    v16 = (_QWORD **)(v7 + 6);
    for ( j = *v16; j != v16; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v18);
    }
  }
  return result;
}
