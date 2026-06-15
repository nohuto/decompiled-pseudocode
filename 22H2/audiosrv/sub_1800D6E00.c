/*
 * XREFs of sub_1800D6E00 @ 0x1800D6E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800D6E00(__int64 a1, int a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rcx
  int v9; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v8 = *(_QWORD *)(a1 + 40);
    v9 = 0;
    if ( !v8 )
      goto LABEL_12;
    do
    {
      if ( *(_WORD *)(v8 + 24) )
      {
        if ( v9 == a2 )
          break;
        ++v9;
      }
      v8 = *(_QWORD *)(v8 + 48);
    }
    while ( v8 );
    if ( v8 )
    {
      *(_OWORD *)a3 = *(_OWORD *)v8;
      *(_DWORD *)(a3 + 16) = *(_DWORD *)(v8 + 16);
      if ( v7 )
        LeaveCriticalSection(v7);
      return 0LL;
    }
    else
    {
LABEL_12:
      sub_18004BD84((int)retaddr, 3038, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147024809);
      if ( v7 )
        LeaveCriticalSection(v7);
      return 2147942487LL;
    }
  }
  else
  {
    sub_18004BD84((int)retaddr, 3012, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
    return 2147500035LL;
  }
}
