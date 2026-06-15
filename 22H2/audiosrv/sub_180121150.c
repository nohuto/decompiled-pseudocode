/*
 * XREFs of sub_180121150 @ 0x180121150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C4FF4 @ 0x1800C4FF4 (sub_1800C4FF4.c)
 */

__int64 __fastcall sub_180121150(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // ebx
  __int64 i; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 40LL))(
         *(_QWORD *)(a1 + 24),
         a2,
         a3);
  if ( v7 >= 0 && *(_WORD *)a3 )
    goto LABEL_9;
  for ( i = *(_QWORD *)(a1 + 32); i != *(_QWORD *)(a1 + 40) && !(unsigned int)sub_1800C4FF4(i, a2); i += 20LL )
    ;
  if ( i != *(_QWORD *)(a1 + 40) )
  {
LABEL_9:
    if ( v7 < 0 )
      sub_18004BD84(
        (int)retaddr,
        140,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
        v7);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
