/*
 * XREFs of NtAllocateReserveObject @ 0x140789490
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(__int64 *a1, int a2, signed int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  PVOID *p_Object; // rcx
  __int64 result; // rax
  _DWORD *v9; // rbx
  int inserted; // edx
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
  p_Object = &Object;
  LOBYTE(p_Object) = PreviousMode;
  result = ObCreateObjectEx((_DWORD)p_Object, (unsigned int)*(&PspMemoryReserveObjectTypes + a3), a2, PreviousMode);
  if ( (int)result >= 0 )
  {
    v9 = Object;
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v9[6] = 4;
      *((_QWORD *)v9 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v9 + 9) = v9;
      *((_BYTE *)v9 + 80) = 0;
    }
    inserted = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v11);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *a1 = v11;
    return (unsigned int)inserted;
  }
  return result;
}
