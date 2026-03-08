/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x1402ADB10
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x1402ADB10 (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiGroupSchedulingMoveThread @ 0x1402ADB10 (KiGroupSchedulingMoveThread.c)
 *     KiCheckPrcbAffinityEx @ 0x1402ADF54 (KiCheckPrcbAffinityEx.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402AE79C (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  unsigned __int64 j; // rbx
  __int64 result; // rax
  unsigned int i; // r9d
  unsigned int v11; // r15d
  _QWORD **v12; // r12
  _QWORD *v13; // r11
  _QWORD *v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx

  v4 = *(_QWORD *)(a3 + 8);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 0LL;
    j = v4 ^ (a3 | 1);
  }
  else
  {
    j = *(_QWORD *)(a3 + 8);
  }
  if ( j )
  {
    while ( 1 )
    {
      for ( i = *(unsigned __int16 *)(j + 26); i; i ^= 1 << v11 )
      {
        _BitScanReverse(&v11, i);
        v12 = (_QWORD **)(16LL * v11 + j + 48);
        v13 = *v12;
        do
        {
          v14 = v13 - 27;
          if ( ((*((_DWORD *)v13 - 24) >> 1) & 1) <= a4 && (unsigned __int8)KiCheckPrcbAffinityEx(v14[72], a1) )
          {
            KiRemoveThreadFromScbQueue(a2, j - 88, v14, v11);
            result = (__int64)v14;
            *((_DWORD *)v14 + 134) = *(_DWORD *)(a1 + 36);
            return result;
          }
          v13 = (_QWORD *)*v13;
        }
        while ( v13 != v12 );
      }
      v15 = j + 304;
      v16 = *(_QWORD *)(j + 304);
      if ( (*(_BYTE *)(j + 312) & 1) == 0 )
        goto LABEL_18;
      if ( v16 )
        break;
LABEL_20:
      v17 = *(_QWORD ***)(j + 8);
      v18 = j;
      if ( v17 )
      {
        v19 = *v17;
        for ( j = *(_QWORD *)(j + 8); v19; v19 = (_QWORD *)*v19 )
          j = (unsigned __int64)v19;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v18 )
            break;
          v18 = j;
        }
      }
      if ( !j )
        return 0LL;
    }
    v16 ^= v15;
LABEL_18:
    if ( v16 )
    {
      result = KiGroupSchedulingMoveThread(a1, a2, v15, (unsigned int)a4);
      if ( result )
        return result;
    }
    goto LABEL_20;
  }
  return 0LL;
}
