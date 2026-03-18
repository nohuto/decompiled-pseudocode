/*
 * XREFs of NtAllocateReserveObject @ 0x1407D7E40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(__int64 *a1, __int64 a2, signed int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD *v8; // rbx
  int inserted; // edx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v11 = 0LL;
  Object = 0LL;
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
             &Object,
             0LL);
  if ( (int)result >= 0 )
  {
    v8 = Object;
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v8[6] = 4;
      *((_QWORD *)v8 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v8 + 9) = v8;
      *((_BYTE *)v8 + 80) = 0;
    }
    inserted = ObInsertObjectEx((char *)v8, 0LL, 983043, 0, 0, 0LL, &v11);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *a1 = v11;
    return (unsigned int)inserted;
  }
  return result;
}
