/*
 * XREFs of rimObsCopyMessage @ 0x1C01B3E58
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01B3FC8 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C01B4C8C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01B5084 (rimObsPushInputMessage.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01B3A78 (rimObsCalculateObserverMessageSize.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCopyMessage(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  int v6; // r12d
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r15d
  unsigned __int64 v13; // rcx
  void **v14; // rdx
  void **v15; // r9
  _QWORD *v16; // rcx
  size_t v17; // r8
  const void *v18; // rdx
  void *v19; // rcx
  ULONG64 v20; // r9

  v4 = a4;
  v6 = a2;
  v8 = rimObsCalculateObserverMessageSize((unsigned int *)a1, a2, (__int64)a3);
  v11 = *(_DWORD *)a1;
  if ( (unsigned int)v4 < v8 )
    return 3221225507LL;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( v4 < v13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, v10);
  }
  if ( v6 )
  {
    ProbeForWrite(a3, v4, 2u);
    memset(a3, 0, v4);
    v14 = a3 + 6;
    if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v14 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
    if ( !v11 && *(_QWORD *)(a1 + 40) )
    {
      v15 = a3 + 5;
      v16 = a3 + 5;
      if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = v14;
      v17 = *(_QWORD *)(a1 + 24);
      v18 = *(const void **)(a1 + 40);
      v19 = *v15;
      v20 = (ULONG64)*v15 + v17;
      if ( v20 > MmUserProbeAddress || v20 <= (unsigned __int64)v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v19, v18, v17);
    }
  }
  else
  {
    memset(a3, 0, v4);
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
    if ( !v11 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *(const void **)(a1 + 40), *(_QWORD *)(a1 + 24));
      }
    }
  }
  return 0LL;
}
