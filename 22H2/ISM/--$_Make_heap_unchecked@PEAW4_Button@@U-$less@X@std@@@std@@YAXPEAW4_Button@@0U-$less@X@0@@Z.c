/*
 * XREFs of ??$_Make_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x1801727A4
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x180172B3C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x180172A00 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<enum _Button *,std::less<void>>(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  __int64 i; // rdi
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 2;
  for ( i = (a2 - a1) >> 3;
        i > 0;
        result = std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>(a1, i, v5, &v9, v8) )
  {
    --i;
    LOBYTE(v8) = a3;
    v9 = *(_DWORD *)(a1 + 4 * i);
  }
  return result;
}
