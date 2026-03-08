/*
 * XREFs of ViDeadlockForgetResourceHistory @ 0x140AD616C
 * Callers:
 *     ViDeadlockTrimResources @ 0x140AD6F04 (ViDeadlockTrimResources.c)
 * Callees:
 *     ViDeadlockRemoveNode @ 0x140AD6934 (ViDeadlockRemoveNode.c)
 */

PVOID __fastcall ViDeadlockForgetResourceHistory(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // esi
  int v7; // edi
  PVOID result; // rax
  _QWORD **v9; // r14
  _QWORD *v10; // r12
  unsigned int v11; // r13d
  _QWORD *v12; // rbx
  unsigned int v13; // ecx
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx

  v4 = 0;
  v7 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    return result;
  result = (PVOID)*(unsigned int *)(a1 + 4);
  if ( (unsigned __int16)result < 0x100u )
    return result;
  v9 = (_QWORD **)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 24);
  v11 = *((_DWORD *)ViDeadlockGlobals + 8201);
  while ( v10 != v9 )
  {
    v12 = v10 - 5;
    v10 = (_QWORD *)*v10;
    v13 = *((_DWORD *)v12 + 18) >> 3;
    if ( v11 <= v13 )
    {
      if ( v13 - v11 < 0x2000 )
        goto LABEL_8;
    }
    else if ( v11 - v13 > 0x2000 )
    {
LABEL_8:
      ViDeadlockRemoveNode(v12, 0LL);
      ++v7;
      *v12 = *a4;
      *a4 = v12;
    }
  }
  *((_DWORD *)ViDeadlockGlobals + 8197) += v7;
  result = (PVOID)*(unsigned int *)(a1 + 4);
  if ( (unsigned __int16)result >= 0x100u )
  {
    v14 = *v9;
    while ( v14 != v9 && (unsigned __int16)*(_DWORD *)(a1 + 4) >= 0x100u )
    {
      v15 = v14 - 5;
      v14 = (_QWORD *)*v14;
      ViDeadlockRemoveNode(v15, 0LL);
      ++v4;
      *v15 = *a4;
      *a4 = v15;
    }
    result = ViDeadlockGlobals;
    *((_DWORD *)ViDeadlockGlobals + 8198) += v4;
  }
  return result;
}
