/*
 * XREFs of CmpDoTransWriteLogRecord @ 0x140735080
 * Callers:
 *     CmpTransWriteLog @ 0x140734F84 (CmpTransWriteLog.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpDoTransWriteLogRecord(__int64 a1, char *a2, ULONG a3, ULONG fFlags, PCLFS_LSN plsn)
{
  char *v5; // r14
  void *v6; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // esi
  _DWORD *Pool2; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // ecx
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // r12d
  unsigned int v16; // eax
  CLFS_WRITE_ENTRY rgWriteEntries; // [rsp+50h] [rbp-48h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v20; // [rsp+B8h] [rbp+20h]

  v20 = fFlags;
  v5 = a2;
  v6 = *(void **)(a1 + 96);
  plsnUndoNext = (CLFS_LSN)CLFS_LSN_NULL_EXT[0];
  rgWriteEntries.Buffer = a2;
  rgWriteEntries.ByteLength = a3;
  result = ClfsReserveAndAppendLog(v6, &rgWriteEntries, 1u, &plsnUndoNext, &plsnUndoNext, 0, 0LL, fFlags, plsn);
  appended = result;
  if ( result == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, 3072LL, 538987843LL);
    if ( Pool2 )
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = 3008;
      v12 = v10;
      if ( v10 >= 0xBC0 )
      {
        v13 = 0;
        do
        {
          ++v13;
          if ( v12 < 0xBC0 )
            break;
          v12 -= 3008;
        }
        while ( v12 );
        *(_OWORD *)Pool2 = *(_OWORD *)v5;
        *((_OWORD *)Pool2 + 1) = *((_OWORD *)v5 + 1);
        v14 = *((_OWORD *)v5 + 2);
        Pool2[12] = v13;
        *((_OWORD *)Pool2 + 2) = v14;
        Pool2[3] |= 0x80000000;
        v15 = 0;
        rgWriteEntries.Buffer = Pool2;
        do
        {
          memmove(Pool2 + 16, v5, v11);
          Pool2[13] = v15;
          Pool2[14] = v11;
          rgWriteEntries.ByteLength = v11 + 64;
          ++v15;
          appended = ClfsReserveAndAppendLog(
                       *(PVOID *)(a1 + 96),
                       &rgWriteEntries,
                       1u,
                       &plsnUndoNext,
                       &plsnUndoNext,
                       0,
                       0LL,
                       v20,
                       plsn);
          if ( appended < 0 )
            break;
          v10 -= v11;
          v5 += v11;
          v16 = v10;
          if ( v10 >= v11 )
            v16 = v11;
          v11 = v16;
        }
        while ( v10 );
      }
      ExFreePoolWithTag(Pool2, 0);
      return appended;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
