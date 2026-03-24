/*
 * XREFs of DwmAsyncSnapshotWindow @ 0x1C0275190
 * Callers:
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncSnapshotWindow(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-28h]

  v5 = -1073741823;
  if ( Object )
  {
    v8[0] = 0LL;
    *(_QWORD *)((char *)&v8[1] + 4) = a2;
    memset(v7, 0, sizeof(v7));
    LODWORD(v7[0]) = 3407884;
    WORD2(v7[0]) = 0x8000;
    LODWORD(v8[1]) = -2147483640;
    EtwUpdateEvent(0LL, 2147483656LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
