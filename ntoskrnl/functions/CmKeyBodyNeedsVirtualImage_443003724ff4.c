bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // di
  bool v6; // bl
  __int64 v7; // rbp
  __int64 v8; // rcx
  bool v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry(a1, a2, a3, a4);
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v6 = (*(_BYTE *)(v7 + 4112) & 0x10) != 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  if ( !*(_WORD *)(v8 + 66) )
    v9 = v6;
  if ( (*(_BYTE *)(a1 + 48) & 0x10) == 0 )
    v4 = v9;
  CmpUnlockKcb(v8);
  CmpUnlockRegistry(v11, v10, v12, v13);
  return v4;
}
