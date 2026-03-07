__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // r15
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // r14
  unsigned int FreeCell; // r12d
  unsigned int *v15; // r14
  unsigned int v16; // r8d
  unsigned int v17; // esi
  __int64 v18; // r8
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // r12
  unsigned int v27; // ebx
  __int64 CellFlat; // rax
  unsigned int v29; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-2Ch]
  unsigned int v31; // [rsp+38h] [rbp-28h]
  unsigned int v32; // [rsp+3Ch] [rbp-24h]
  int v33; // [rsp+40h] [rbp-20h]
  __int64 v34; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF

  v7 = a2;
  v29 = -1;
  v34 = 0LL;
  v35 = 0LL;
  HvpGetCellContextReinitialize(&v34);
  v30 = 0;
  v9 = ((unsigned int)v7 >> 3) - 1;
  if ( v9 >= 0x10 )
  {
    v27 = v9 >> 4;
    if ( v27 <= 0xFF )
    {
      _BitScanReverse(&v27, v27);
      v30 = v27;
    }
  }
  v10 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v11 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v11, BugCheckParameter2 + 80);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v13 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v35, (__int64)&v34);
  if ( FreeCell == -1 )
  {
    v25 = BugCheckParameter2;
    v24 = HvpAddBin(BugCheckParameter2, v7, a3, &v29);
    if ( v24 < 0 )
      goto LABEL_23;
    FreeCell = v29 + 32;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v29 + 32);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2);
    if ( CellFlat )
      v15 = (unsigned int *)(CellFlat - 4);
    else
      v15 = 0LL;
    v35 = (__int64)v15;
  }
  else
  {
    v15 = (unsigned int *)v35;
  }
  v16 = *v15;
  v17 = *v15 - v7;
  if ( v17 < 8 )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell);
    *v15 = -*v15;
  }
  else
  {
    *(unsigned int *)((char *)v15 + v7) = v17;
    v33 = FreeCell + v7;
    *v15 = -(int)v7;
    if ( v29 == -1 )
    {
      v18 = (v16 >> 3) - 1;
      v31 = 0;
      if ( (unsigned int)v18 >= 0x10 )
      {
        v19 = (unsigned int)v18 >> 4;
        if ( v19 > 0xFF )
        {
          v18 = 23LL;
        }
        else
        {
          _BitScanReverse(&v20, v19);
          v31 = v20;
          v18 = v20 + 16;
        }
      }
      v32 = 0;
      v21 = (v17 >> 3) - 1;
      if ( v21 >= 0x10 )
      {
        v22 = v21 >> 4;
        if ( v22 > 0xFF )
        {
          v21 = 23;
        }
        else
        {
          _BitScanReverse(&v22, v22);
          v32 = v22;
          v21 = v22 + 16;
        }
      }
      if ( (_DWORD)v18 != v21 )
      {
        HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v18, a3, 0);
        HvpEnlistFreeCell(BugCheckParameter2);
      }
    }
    else
    {
      HvpEnlistFreeCell(BugCheckParameter2);
    }
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  v13 = 0;
  if ( a5 )
  {
    v23 = v35 + 4;
    v35 = 0LL;
    *a5 = v23;
    HvpGetCellContextMove(a6, &v34);
  }
  *a4 = FreeCell;
  v24 = 0;
  v25 = BugCheckParameter2;
LABEL_23:
  if ( v35 )
  {
    if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v25, &v34);
    else
      HvpReleaseCellPaged(v25, &v34);
  }
  if ( v13 )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
  }
  return (unsigned int)v24;
}
