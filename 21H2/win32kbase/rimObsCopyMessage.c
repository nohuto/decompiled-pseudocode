/*
 * XREFs of rimObsCopyMessage @ 0x1C017E058
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C017E1E8 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017E9F8 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017ECA0 (rimObsPushInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C017DDA0 (rimObsCalculateObserverMessageSize.c)
 */

__int64 __fastcall rimObsCopyMessage(int *a1, int a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  unsigned int v8; // eax
  int v9; // r12d
  void **v11; // rdx
  void **v12; // r9
  _QWORD *v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  void *v16; // rcx
  ULONG64 v17; // r9

  v4 = a4;
  v8 = rimObsCalculateObserverMessageSize(a1);
  v9 = *a1;
  if ( (unsigned int)v4 < v8 )
    return 3221225507LL;
  if ( !v9 && v4 < *((_QWORD *)a1 + 3) + 48LL )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 167);
  if ( a2 )
  {
    ProbeForWrite(a3, v4, 2u);
    memset(a3, 0, v4);
    v11 = a3 + 6;
    if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v11 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    if ( !v9 && *((_QWORD *)a1 + 5) )
    {
      v12 = a3 + 5;
      v13 = a3 + 5;
      if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = v11;
      v14 = *((_QWORD *)a1 + 3);
      v15 = (const void *)*((_QWORD *)a1 + 5);
      v16 = *v12;
      v17 = (ULONG64)*v12 + v14;
      if ( v17 > MmUserProbeAddress || v17 <= (unsigned __int64)v16 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v15, v14);
    }
  }
  else
  {
    memset(a3, 0, v4);
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    if ( !v9 )
    {
      if ( *((_QWORD *)a1 + 5) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *((const void **)a1 + 5), *((_QWORD *)a1 + 3));
      }
    }
  }
  return 0LL;
}
