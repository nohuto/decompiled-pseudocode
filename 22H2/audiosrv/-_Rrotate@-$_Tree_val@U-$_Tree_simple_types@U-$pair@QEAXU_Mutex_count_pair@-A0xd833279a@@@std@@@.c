/*
 * XREFs of ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x1800E6FF4
 * Callers:
 *     sub_1800089E4 @ 0x1800089E4 (sub_1800089E4.c)
 *     sub_180008F70 @ 0x180008F70 (sub_180008F70.c)
 *     sub_18002EF10 @ 0x18002EF10 (sub_18002EF10.c)
 *     sub_180032170 @ 0x180032170 (sub_180032170.c)
 *     sub_1800E2E68 @ 0x1800E2E68 (sub_1800E2E68.c)
 *     sub_1800E9878 @ 0x1800E9878 (sub_1800E9878.c)
 *     sub_1800EECE4 @ 0x1800EECE4 (sub_1800EECE4.c)
 *     sub_18010BF08 @ 0x18010BF08 (sub_18010BF08.c)
 *     sub_18010E4B8 @ 0x18010E4B8 (sub_18010E4B8.c)
 *     sub_1801109B4 @ 0x1801109B4 (sub_1801109B4.c)
 *     sub_180138224 @ 0x180138224 (sub_180138224.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD *result; // rax

  v2 = *a2;
  *a2 = *(_QWORD *)(*a2 + 16LL);
  v3 = *(_QWORD *)(v2 + 16);
  if ( !*(_BYTE *)(v3 + 25) )
    *(_QWORD *)(v3 + 8) = a2;
  *(_QWORD *)(v2 + 8) = a2[1];
  result = *(_QWORD **)a1;
  if ( a2 == *(_QWORD **)(*(_QWORD *)a1 + 8LL) )
  {
    result[1] = v2;
  }
  else
  {
    result = (_QWORD *)a2[1];
    if ( a2 == (_QWORD *)result[2] )
      result[2] = v2;
    else
      *result = v2;
  }
  *(_QWORD *)(v2 + 16) = a2;
  a2[1] = v2;
  return result;
}
