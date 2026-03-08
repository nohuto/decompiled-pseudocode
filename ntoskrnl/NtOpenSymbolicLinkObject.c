/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x1407563E0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140841630 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140B6CE8C (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall NtOpenSymbolicLinkObject(unsigned __int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rbx
  char PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v5 = (_QWORD *)a1;
  v10[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(a3, (__int64)v7, PreviousMode, 0LL, a2, 0, (__int64)CurrentSilo, v10);
  *v5 = v10[0];
  return result;
}
