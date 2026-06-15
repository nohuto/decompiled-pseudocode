/*
 * XREFs of ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18000CEEC
 * Callers:
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x18000CDD8 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180033438 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall ATL::CSimpleStringT<unsigned short,0>::Empty(int **a1)
{
  int *result; // rax
  volatile signed __int32 *v3; // rdx
  __int64 v4; // rdi

  result = *a1;
  v3 = *a1 - 6;
  v4 = *(_QWORD *)v3;
  if ( *((_DWORD *)v3 + 2) )
  {
    if ( *((int *)v3 + 4) >= 0 )
    {
      if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
      result = (int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) + 24);
      *a1 = result;
    }
    else
    {
      if ( *(result - 3) < 0 )
        ATL::AtlThrowImpl(-2147024809);
      *(result - 4) = 0;
      result = *a1;
      *(_WORD *)*a1 = 0;
    }
  }
  return result;
}
