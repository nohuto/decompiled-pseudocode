/*
 * XREFs of rimCheckForExplicitRimConflictInProcess @ 0x1C0034FF8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00350D4 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimCheckForExplicitRimConflictInProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bp
  unsigned __int16 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD **v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // r11
  __int64 v19; // rax
  __int64 v21; // rax

  v4 = a3;
  v5 = a2;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v7 + 240);
  v12 = 0;
  v15 = (_QWORD **)(SGDGetUserSessionState(v9, v8, v10, v11) + 304);
  v18 = *v15;
  while ( v18 != v15 )
  {
    v14 = v18 - 2;
    v18 = (_QWORD *)*v18;
    if ( !*((_BYTE *)v14 + 81)
      && !*((_BYTE *)v14 + 80)
      && v14[4] == a1
      && (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v14, v5, v4) )
    {
      v21 = SGDGetUserSessionState(v14, v13, v16, v17);
      *(_QWORD *)(v21 + 248) = 0LL;
      ExReleasePushLockExclusiveEx(v21 + 240, 0LL);
      v12 = 1;
      goto LABEL_9;
    }
  }
  v19 = SGDGetUserSessionState(v14, v13, v16, v17);
  *(_QWORD *)(v19 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v19 + 240, 0LL);
LABEL_9:
  KeLeaveCriticalRegion();
  return v12;
}
