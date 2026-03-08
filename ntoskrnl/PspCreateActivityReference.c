/*
 * XREFs of PspCreateActivityReference @ 0x1407FC704
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x1407FC5F0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x140793DC0 (PsChargeProcessWakeCounter.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall PspCreateActivityReference(void *a1, _QWORD *a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  char *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-60h]
  _QWORD v8[3]; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  __int128 v11; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF

  v10 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8[1] = 0LL;
  v8[2] = 0LL;
  v8[0] = 48LL;
  v9 = 32;
  v11 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)PspActivityReferenceObjectType,
             (__int64)v8,
             PreviousMode,
             v7,
             8,
             0,
             8,
             &Object,
             0LL);
  if ( (int)result >= 0 )
  {
    v6 = (char *)Object;
    *(_QWORD *)v6 = PsChargeProcessWakeCounter(a1);
    return ObInsertObjectEx(v6, 0LL, 0xF0000u, 0, 0, 0LL, a2);
  }
  return result;
}
