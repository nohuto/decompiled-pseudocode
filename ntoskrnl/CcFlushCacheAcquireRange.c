/*
 * XREFs of CcFlushCacheAcquireRange @ 0x14021A0CC
 * Callers:
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x140538060 (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x140539380 (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     CcAmILowPriorityWriter @ 0x14021B7DC (CcAmILowPriorityWriter.c)
 */

bool __fastcall CcFlushCacheAcquireRange(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bl
  char v3; // bp
  char v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  char v9; // dl
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r11

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 132);
  v5 = *(_BYTE *)(a1 + 133);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(v1 + 200) || !v3 || v5)
    && (*(_QWORD *)(v1 + 8) || (*(_DWORD *)(v1 + 152) & 4) != 0 || *(_DWORD *)(v1 + 112))
    && !*(_DWORD *)(a1 + 64) )
  {
    v8 = (a1 + 200) & -(__int64)(*(_BYTE *)(a1 + 193) != 0);
    if ( v3 && (unsigned __int8)CcAmILowPriorityWriter(v1) )
    {
      v9 = 1;
    }
    else
    {
      v9 = 0;
      if ( !v3 )
        goto LABEL_15;
    }
    if ( !v5 )
    {
      v10 = 0;
      v11 = a1 + 48;
      goto LABEL_9;
    }
LABEL_15:
    v11 = a1 + 48;
    v10 = *(_DWORD *)(a1 + 48);
    if ( !v3 || v5 )
    {
      v12 = (a1 + 32) & -(__int64)(v6 != 0);
      return (unsigned __int8)CcAcquireByteRangeForWrite(v1, v12, v10, v7, a1 + 40, v11, a1 + 120, v9, v8) != 0;
    }
LABEL_9:
    LODWORD(v12) = 0;
    return (unsigned __int8)CcAcquireByteRangeForWrite(v1, v12, v10, v7, a1 + 40, v11, a1 + 120, v9, v8) != 0;
  }
  return v2;
}
