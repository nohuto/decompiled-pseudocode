/*
 * XREFs of sub_1800D6F20 @ 0x1800D6F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800D6F20(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rcx
  int v7; // edx
  bool v8; // zf
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v6 = *(_QWORD *)(a1 + 40);
    v7 = 0;
    while ( v6 )
    {
      v8 = *(_WORD *)(v6 + 24) == 0;
      v9 = v7 + 1;
      v6 = *(_QWORD *)(v6 + 48);
      if ( v8 )
        v9 = v7;
      v7 = v9;
    }
    *a2 = v7;
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 2975, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
    return 2147500035LL;
  }
}
