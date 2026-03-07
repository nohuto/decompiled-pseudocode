__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 *v3; // rsi
  unsigned int v5; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // esi
  signed int v10; // edi
  __int64 CellFlat; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 CellPaged; // rax
  __int64 v16; // r15
  _DWORD v17[4]; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+64h] [rbp+34h]
  int v20; // [rsp+78h] [rbp+48h] BYREF
  int v21; // [rsp+7Ch] [rbp+4Ch]

  v18 = -1;
  v3 = (unsigned __int64 *)(BugCheckParameter3 + 1784);
  v20 = -1;
  v17[0] = -1;
  v5 = BugCheckParameter4;
  v19 = 0;
  v21 = 0;
  v17[1] = 0;
  v7 = KeAbPreAcquire(BugCheckParameter3 + 1784, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  v9 = 0;
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v10 = CmpMarkKeyDirty(BugCheckParameter3, v5);
  if ( v10 >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v12 = CellFlat;
    if ( !CellFlat )
    {
      v10 = -1073741670;
      goto LABEL_25;
    }
    if ( a3 == 1 )
    {
      if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter3) )
        goto LABEL_40;
      v13 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
          ? HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v12 + 16))
          : HvpGetCellPaged(BugCheckParameter3);
      if ( !v13 )
        goto LABEL_40;
      if ( !(*(_DWORD *)(v13 + 20) + *(_DWORD *)(v13 + 24)) )
      {
        *(_WORD *)(v13 + 52) = 0;
        *(_DWORD *)(v13 + 56) = 0;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v20);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v20);
    }
    if ( (*(_BYTE *)(v12 + 2) & 0x42) != 0 )
    {
LABEL_22:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v18);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v18);
      v10 = (unsigned __int8)CmpFreeKeyBody(BugCheckParameter3, v5) == 0 ? 0xC000009A : 0;
      goto LABEL_25;
    }
    if ( !*(_DWORD *)(v12 + 36) )
    {
LABEL_20:
      if ( *(_DWORD *)(v12 + 44) != -1 )
        CmpFreeSecurityDescriptor(BugCheckParameter3);
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v12 + 40));
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v16 = CellPaged;
    if ( CellPaged )
    {
      if ( *(_DWORD *)(v12 + 36) )
      {
        do
          CmpFreeValue(BugCheckParameter3, *(unsigned int *)(v16 + 4LL * v9++));
        while ( v9 < *(_DWORD *)(v12 + 36) );
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v17);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v17);
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v12 + 40));
      goto LABEL_20;
    }
LABEL_40:
    v10 = -1073741670;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v18);
  }
LABEL_25:
  CmUnlockHiveSecurity(BugCheckParameter3);
  return (unsigned int)v10;
}
