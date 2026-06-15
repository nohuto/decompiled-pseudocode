/*
 * XREFs of sub_1800D24D0 @ 0x1800D24D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D1744 @ 0x1800D1744 (sub_1800D1744.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D24D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 *v6; // rdx
  __int64 v7; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+18h]

  if ( a2 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
    v10 = v5;
    v9 = a2;
    try
    {
      (*(void (**)(void))(*(_QWORD *)a2 + 8LL))();
      v6 = *(__int64 **)(a1 + 272);
      if ( *(__int64 **)(a1 + 280) == v6 )
      {
        sub_1800D1744((__int64 *)(a1 + 264), v6, &v9);
      }
      else
      {
        v9 = 0LL;
        *v6 = a2;
        *(_QWORD *)(a1 + 272) += 8LL;
      }
      sub_18000F708(&v9);
      if ( v5 )
        LeaveCriticalSection(v5);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)sub_1800C437C(
                             (int)retaddr,
                             776,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                             v7);
    }
  }
  else
  {
    sub_18004BD84((int)retaddr, 771, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147467261);
    return 2147500035LL;
  }
  return result;
}
