/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140768EF0
 * Callers:
 *     <none>
 * Callees:
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  char PreviousMode; // di
  int inserted; // ecx
  _BYTE *v6; // rcx
  __int64 v8; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h]

  v3 = (_QWORD *)a1;
  v8 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v3;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = PreviousMode;
  inserted = ObCreateObjectEx(a1, (_DWORD)IopWaitCompletionPacketObjectType, a3, PreviousMode);
  if ( inserted >= 0 )
  {
    v6 = Object;
    *((_QWORD *)Object + 12) = 0LL;
    v6[104] = 0;
    *((_QWORD *)v6 + 11) = 0LL;
    inserted = ObInsertObjectEx(v6, 0LL, 0, 0LL, (__int64)&v8);
    if ( inserted >= 0 )
      *v3 = v8;
  }
  return (unsigned int)inserted;
}
