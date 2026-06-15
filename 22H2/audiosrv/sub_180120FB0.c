/*
 * XREFs of sub_180120FB0 @ 0x180120FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180120FB0(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v7 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( a2 >= v13 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      a2 -= v13;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 16);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2, a3);
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      106,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      v8);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
