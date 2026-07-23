/*
 * XREFs of PspCreateActivityReference @ 0x140731658
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x140731550 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x1406BCA00 (PsChargeProcessWakeCounter.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall PspCreateActivityReference(__int64 a1, unsigned __int64 *a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  char *v6; // rbx
  char *v7; // [rsp+20h] [rbp-68h]
  _DWORD v8[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  __int128 v13; // [rsp+70h] [rbp-18h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+A0h] [rbp+18h] BYREF

  v8[1] = 0;
  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v8[0] = 48;
  v9 = 0LL;
  v11 = 32;
  v10 = 0LL;
  v13 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)PspActivityReferenceObjectType,
             (__int64)v8,
             PreviousMode,
             v7,
             8,
             0,
             8,
             &DmaAdapter,
             0LL);
  if ( (int)result >= 0 )
  {
    v6 = (char *)DmaAdapter;
    *(_QWORD *)v6 = PsChargeProcessWakeCounter(a1);
    return ObInsertObjectEx(v6, 0LL, 0xF0000u, 0, 0, 0LL, a2);
  }
  return result;
}
