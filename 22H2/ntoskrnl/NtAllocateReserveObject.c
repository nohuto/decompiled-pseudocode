/*
 * XREFs of NtAllocateReserveObject @ 0x1406962C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(__int64 *a1, int a2, signed int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  __int64 result; // rax
  PADAPTER_OBJECT v8; // rbx
  int inserted; // edx
  char *v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v11 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( (unsigned int)a3 > 1 )
    return 3221225485LL;
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + a3),
             a2,
             PreviousMode,
             v10,
             PspMemoryReserveObjectSizes[a3],
             0,
             0,
             &DmaAdapter,
             0LL);
  if ( (int)result >= 0 )
  {
    v8 = DmaAdapter;
    memset(DmaAdapter, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      LODWORD(v8[1].DmaOperations) = 4;
      *(_QWORD *)&v8[4].Version = PspIoMiniPacketCallbackRoutine;
      v8[4].DmaOperations = (_DMA_OPERATIONS *)v8;
      LOBYTE(v8[5].Version) = 0;
    }
    inserted = ObInsertObjectEx(v8, 0LL, 0xF0003u, 0, 0, 0LL, (unsigned __int64 *)&v11);
    LODWORD(DmaAdapter) = inserted;
    if ( inserted >= 0 )
      *a1 = v11;
    return (unsigned int)inserted;
  }
  return result;
}
