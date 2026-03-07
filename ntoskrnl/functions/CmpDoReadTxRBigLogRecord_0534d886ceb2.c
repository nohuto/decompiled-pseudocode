__int64 __fastcall CmpDoReadTxRBigLogRecord(void *a1, void *a2, ULONG a3, struct _PRIVILEGE_SET **a4, unsigned int *a5)
{
  _DWORD *v5; // rdi
  NTSTATUS v6; // ebx
  unsigned int v7; // r15d
  struct _PRIVILEGE_SET *Pool; // rax
  struct _PRIVILEGE_SET *v9; // rsi
  int v10; // r12d
  unsigned int v11; // r14d
  __int64 v12; // r13
  unsigned int v14; // [rsp+40h] [rbp-38h]
  struct _PRIVILEGE_SET *v15; // [rsp+48h] [rbp-30h]
  PVOID ppvBuffer; // [rsp+50h] [rbp-28h] BYREF
  CLFS_LSN plsnRecord; // [rsp+58h] [rbp-20h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp-18h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp-10h] BYREF
  ULONG pcbBuffer; // [rsp+C8h] [rbp+50h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+D0h] [rbp+58h] BYREF
  struct _PRIVILEGE_SET **v23; // [rsp+D8h] [rbp+60h]

  v23 = a4;
  ppvBuffer = a2;
  v5 = a2;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  peRecordType = 0;
  pcbBuffer = a3;
  v6 = CmpVerifyBigLogRecordChunk(a2, a3);
  if ( v6 >= 0 )
  {
    v7 = v5[1];
    v14 = v5[12];
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, v7, 538987843LL);
    v9 = Pool;
    if ( Pool )
    {
      v10 = 0;
      v15 = Pool;
      v11 = v7;
      if ( !v5[13] )
      {
        do
        {
          v12 = (unsigned int)v5[14];
          if ( (unsigned int)v12 > v11 )
            break;
          memmove(Pool, v5 + 16, (unsigned int)v12);
          v15 = (struct _PRIVILEGE_SET *)((char *)v15 + v12);
          v11 -= v12;
          if ( ++v10 >= v14 )
          {
            if ( v11 )
              break;
            v6 = 0;
            *v23 = v9;
            *a5 = v7;
            return (unsigned int)v6;
          }
          peRecordType = 1;
          v6 = ClfsReadNextLogRecord(
                 a1,
                 &ppvBuffer,
                 &pcbBuffer,
                 &peRecordType,
                 0LL,
                 &plsnUndoNext,
                 &plsnPrevious,
                 &plsnRecord);
          if ( v6 < 0 )
            goto LABEL_11;
          v5 = ppvBuffer;
          v6 = CmpVerifyBigLogRecordChunk(ppvBuffer, pcbBuffer);
          if ( v6 < 0 )
            goto LABEL_11;
          Pool = v15;
        }
        while ( v5[13] == v10 );
      }
      v6 = -1073741762;
LABEL_11:
      CmSiFreeMemory(v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
