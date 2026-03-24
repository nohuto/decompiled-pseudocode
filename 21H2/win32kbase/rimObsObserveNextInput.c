/*
 * XREFs of rimObsObserveNextInput @ 0x1C017E88C
 * Callers:
 *     NtRIMObserveNextInput @ 0x1C0153940 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1C0157870 (RIMObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C016640C (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsPopInputMessage @ 0x1C017E9F8 (rimObsPopInputMessage.c)
 */

__int64 __fastcall rimObsObserveNextInput(char *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v4; // ebx
  unsigned int *v5; // rdi
  char *v6; // rsi
  int v7; // eax
  int v8; // edx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gBaseLog, a2, 23, 35, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids, a1);
  }
  Object = 0LL;
  v4 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, v2, &Object);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int *)Object;
    v6 = (char *)Object + 176;
    RIMLockExclusive((__int64)Object + 176);
    v7 = rimObsPopInputMessage(v5, v2, *((_QWORD *)v5 + 12), v5[26]);
    v4 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -2147483622 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 23, 37, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        }
        v5[22] = 1;
        v4 = 0;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_q(
          (_DWORD)gBaseLog,
          v8,
          23,
          36,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          *((_QWORD *)v5 + 10));
      }
      ZwSetEvent(*((HANDLE *)v5 + 10), 0LL);
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
