/*
 * XREFs of ViDeadlockRemoveNode @ 0x1409E0914
 * Callers:
 *     ViDeadlockForgetResourceHistory @ 0x1409E0494 (ViDeadlockForgetResourceHistory.c)
 *     ViDeadlockRemoveResource @ 0x1409E0A4C (ViDeadlockRemoveResource.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x1409E0F14 (ViDeadlockUpdateChildrenCount.c)
 */

_QWORD *__fastcall ViDeadlockRemoveNode(_QWORD *a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r9
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r11
  __int64 *v10; // rdx
  __int64 **v11; // r10
  __int64 v12; // rax
  __int64 **v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rax
  __int64 *v17; // r11
  __int64 *v18; // rdx
  __int64 *v19; // r10

  v2 = a1;
  if ( !a2 )
  {
    v6 = a1 + 1;
    v7 = (__int64 *)a1[1];
    if ( *v2 )
    {
      while ( v7 != v6 )
      {
        v8 = *v7;
        v9 = v7 - 3;
        v10 = v7;
        v7 = (__int64 *)v8;
        if ( *(__int64 **)(v8 + 8) != v10 )
          goto LABEL_20;
        v11 = (__int64 **)v10[1];
        if ( *v11 != v10 )
          goto LABEL_20;
        *v11 = (__int64 *)v8;
        *(_QWORD *)(v8 + 8) = v11;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v9 + 19);
        *v9 = *v2;
        v12 = *v2 + 8LL;
        v13 = *(__int64 ***)(*v2 + 16LL);
        if ( *v13 != (__int64 *)v12 )
          goto LABEL_20;
        *v10 = v12;
        v10[1] = (__int64)v13;
        *v13 = v10;
        *(_QWORD *)(v12 + 8) = v10;
      }
      v14 = v2[3];
      if ( *(_QWORD **)(v14 + 8) != v2 + 3 || (v15 = (_QWORD *)v2[4], (_QWORD *)*v15 != v2 + 3) )
LABEL_20:
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      ViDeadlockUpdateChildrenCount(*v2, 0xFFFFFFFFLL);
    }
    else
    {
      while ( v7 != v6 )
      {
        v16 = *v7;
        v17 = v7 - 3;
        v18 = v7;
        v7 = (__int64 *)v16;
        if ( *(__int64 **)(v16 + 8) != v18 )
          goto LABEL_20;
        v19 = (__int64 *)v18[1];
        if ( (__int64 *)*v19 != v18 )
          goto LABEL_20;
        *v19 = v16;
        *(_QWORD *)(v16 + 8) = v19;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v17 + 19);
        *v17 = 0LL;
        *v18 = 0LL;
        v17[4] = 0LL;
      }
    }
    --*(_WORD *)(v2[7] + 4LL);
  }
  v3 = v2 + 5;
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_20;
  result = (_QWORD *)v3[1];
  if ( (_QWORD *)*result != v3 )
    goto LABEL_20;
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
