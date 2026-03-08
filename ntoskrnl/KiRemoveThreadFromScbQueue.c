/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x1402AE79C
 * Callers:
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiGroupSchedulingMoveThread @ 0x1402ADB10 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402AE0E4 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402AF3E4 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiResortScbQueue @ 0x1402AEDFC (KiResortScbQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402AEF44 (KiRemoveSchedulingGroupQueue.c)
 */

int __fastcall KiRemoveThreadFromScbQueue(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r10
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  char v9; // cl
  __int64 v10; // rax

  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a3 + 968), 0xFFFBFFFF);
  v6 = a3 + 216;
  v7 = *(_QWORD **)(a3 + 216);
  v8 = *(_QWORD **)(v6 + 8);
  if ( v7[1] != v6 || *v8 != v6 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  if ( v8 == v7 )
  {
    v9 = *(_BYTE *)(a2 + 112);
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 114) ^ (1 << a4);
    *(_WORD *)(a2 + 114) = (_WORD)v8;
    if ( (v9 & 2) == 0 )
    {
      LOBYTE(v7) = 1;
      if ( (v9 & 1) != 0 )
      {
        if ( !(_WORD)v8 )
        {
          v10 = *(_QWORD *)(a2 + 392);
          if ( (*(_BYTE *)(a2 + 400) & 1) != 0 )
          {
            if ( !v10 )
            {
LABEL_13:
              LODWORD(v8) = KiRemoveSchedulingGroupQueue(a1, a2, v7);
              goto LABEL_14;
            }
            v10 ^= a2 + 392;
          }
          if ( !v10 )
            goto LABEL_13;
        }
        LODWORD(v8) = KiResortScbQueue(a1, a2, v7);
      }
    }
  }
LABEL_14:
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  *(_QWORD *)(a3 + 944) = 0LL;
  return (int)v8;
}
