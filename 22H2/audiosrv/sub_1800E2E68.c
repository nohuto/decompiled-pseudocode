/*
 * XREFs of sub_1800E2E68 @ 0x1800E2E68
 * Callers:
 *     sub_180032170 @ 0x180032170 (sub_180032170.c)
 *     sub_1800E2FE0 @ 0x1800E2FE0 (sub_1800E2FE0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x1800E6E28 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x1800E6FF4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 */

__int64 *__fastcall sub_1800E2E68(__int64 *a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *result; // rax

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x666666666666665LL )
  {
    sub_1800472E0(a6, 0x28uLL);
    std::_Xlength_error("map/set<T> too long");
  }
  v9 = a6;
  a1[1] = v6 + 1;
  *(_QWORD *)(a6 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = a6;
    *(_QWORD *)*a1 = a6;
    v10 = *a1;
LABEL_9:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_10;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = a6;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_10;
  }
  a4[2] = a6;
  v10 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16) )
    goto LABEL_9;
LABEL_10:
  v11 = *(_QWORD *)(a6 + 8);
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(__int64 **)(v13 + 8);
    v15 = *v14;
    if ( v13 == *v14 )
    {
      v15 = v14[2];
      if ( !*(_BYTE *)(v15 + 24) )
        goto LABEL_17;
      if ( v12 == *(_QWORD *)(v13 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
          v7,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL),
        a3,
        v12);
    }
    else
    {
      if ( !*(_BYTE *)(v15 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_21;
      }
      if ( v12 == *(_QWORD *)v13 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
          v7,
          *(_QWORD *)(v12 + 8),
          a3,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL));
    }
LABEL_21:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v16 = *v7;
  *a2 = v9;
  v17 = *(_QWORD *)(v16 + 8);
  result = a2;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
