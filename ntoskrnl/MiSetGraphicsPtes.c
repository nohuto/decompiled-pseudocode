__int64 __fastcall MiSetGraphicsPtes(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned __int64 *v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // r12
  unsigned __int8 v9; // di
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rsi
  int v13; // edi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r13
  unsigned __int64 valid; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+10h]
  unsigned __int64 v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v20 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 )
  {
    v11 = &v19;
    if ( !a3 )
      v11 = 0LL;
    v6 = v11;
  }
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  a6 = MiLockWorkingSetShared((__int64)v12);
  v13 = (v9 & 2) == 0;
  while ( 1 )
  {
    v14 = v8;
    if ( v8 <= v10 )
      break;
LABEL_23:
    if ( (unsigned int)++v13 >= 2 )
      goto LABEL_26;
  }
  while ( 1 )
  {
    v15 = v10;
    if ( (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v10 )
      v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    valid = MiLockLowestValidPageTable((__int64)v12, v14, &v19);
    v19 = valid;
    if ( valid == ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_15:
    if ( v13 )
    {
LABEL_16:
      if ( !a5 && v6 )
        v6 += (((__int64)(v15 - v14) >> 3) + 1) / (v21 >> 12);
    }
LABEL_19:
    MiUnlockPageTableInternal((__int64)v12, valid);
    if ( MiWorkingSetIsContended((__int64)v12) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v12, a6);
      MiLockWorkingSetShared((__int64)v12);
    }
    v10 = v20;
    v14 = v15 + 8;
    if ( v15 + 8 > v20 )
      goto LABEL_23;
  }
  if ( v13 )
    goto LABEL_16;
  v17 = v14;
  if ( v14 > v15 )
    goto LABEL_19;
  while ( !MI_READ_PTE_LOCK_FREE(v17) )
  {
    v17 += 8LL;
    if ( v17 > v15 )
    {
      valid = v19;
      goto LABEL_15;
    }
  }
  v7 = -1073741800;
  MiUnlockPageTableInternal((__int64)v12, v19);
LABEL_26:
  MiUnlockWorkingSetShared((__int64)v12, a6);
  return v7;
}
