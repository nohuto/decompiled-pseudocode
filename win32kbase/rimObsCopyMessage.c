/*
 * XREFs of rimObsCopyMessage @ 0x1C01DBA90
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01DBC24 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C01DCA1C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01DCE48 (rimObsPushInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01DB69C (rimObsCalculateObserverMessageSize.c)
 */

__int64 __fastcall rimObsCopyMessage(int *a1, int a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  unsigned int v8; // eax
  int v9; // r12d
  void **v11; // r9
  _QWORD *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  void *v15; // rcx
  ULONG64 v16; // rax

  v4 = a4;
  v8 = rimObsCalculateObserverMessageSize(a1);
  v9 = *a1;
  if ( (unsigned int)v4 < v8 )
    return 3221225507LL;
  if ( !v9 && v4 < *((_QWORD *)a1 + 3) + 48LL )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 168);
  if ( a2 )
  {
    ProbeForWrite(a3, v4, 2u);
    memset(a3, 0, v4);
    if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || a3 + 6 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    if ( !v9 && *((_QWORD *)a1 + 5) )
    {
      v11 = a3 + 5;
      v12 = a3 + 5;
      if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
        v12 = (_QWORD *)MmUserProbeAddress;
      *v12 = a3 + 6;
      v13 = *((_QWORD *)a1 + 3);
      v14 = (const void *)*((_QWORD *)a1 + 5);
      v15 = *v11;
      v16 = (ULONG64)*v11 + v13;
      if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)v15 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v14, v13);
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
