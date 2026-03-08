/*
 * XREFs of EtwpTiVadQueryEventWrite @ 0x1402F8AE4
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1402F8804 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogSetContextThread @ 0x14077D1C4 (EtwTiLogSetContextThread.c)
 * Callees:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1402F8B5C (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpTiFillVadEventWrite @ 0x1402FC438 (EtwpTiFillVadEventWrite.c)
 */

__int64 EtwpTiVadQueryEventWrite(
        struct _EVENT_DATA_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        const EVENT_DESCRIPTOR *a7,
        ...)
{
  __int64 v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+88h] [rbp+40h]

  v9 = MEMORY[0xFFFFF78000000014];
  v7 = a3;
  a1[v7].Ptr = (ULONGLONG)&v9;
  *(_QWORD *)&a1[v7].Size = 8LL;
  if ( v10 )
    return EtwpTiAsyncVadQueryEventWrite((_DWORD)a1, a2, a3 + 1, a4, a5, a6, (__int64)a7);
  else
    return EtwpTiFillVadEventWrite(a1, a3 + 1, 0, a6, a7);
}
