/*
 * XREFs of sub_1800E4C40 @ 0x1800E4C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E24D0 @ 0x1800E24D0 (sub_1800E24D0.c)
 *     sub_1800E5F48 @ 0x1800E5F48 (sub_1800E5F48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E4C40(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r9
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp+10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v11 = v4;
  sub_1800E5F48(a1);
  v10 = a2;
  v6 = *(_QWORD **)(a1 + 224);
  v7 = *(_QWORD **)(a1 + 216);
  try
  {
    while ( v7 != v6 )
      sub_1800E24D0(&v10, v7++);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           497,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v5);
  }
  return result;
}
