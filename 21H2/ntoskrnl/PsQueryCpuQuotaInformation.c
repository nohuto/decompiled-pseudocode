/*
 * XREFs of PsQueryCpuQuotaInformation @ 0x1403D0124
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetNextSession @ 0x1402872F8 (MiGetNextSession.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MmQuitNextSession @ 0x140622350 (MmQuitNextSession.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1406AD570 (MmGetSessionSchedulingGroupByProcess.c)
 */

__int64 __fastcall PsQueryCpuQuotaInformation(
        _DWORD *Address,
        __int64 Length,
        KPROCESSOR_MODE PreviousMode,
        _DWORD *a4)
{
  SIZE_T v6; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  struct _DMA_ADAPTER *i; // rcx
  struct _DMA_ADAPTER *NextSession; // rax
  struct _DMA_ADAPTER *v13; // rsi
  __int64 v14; // rcx
  unsigned __int16 *SessionSchedulingGroupByProcess; // r12

  v6 = (unsigned int)Length;
  if ( !PsCpuFairShareEnabled )
    return 3221225897LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v6 )
  {
    if ( (((_BYTE)v6 - 4) & 7) != 0 || (unsigned int)v6 < 4 )
      return 3221225476LL;
    v9 = (unsigned int)(v6 - 4) >> 3;
    if ( PreviousMode == 1 )
      ProbeForWrite(Address, v6, 4u);
  }
  else
  {
    v9 = 0;
    Address = 0LL;
  }
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    NextSession = MiGetNextSession(i, Length);
    v13 = NextSession;
    if ( !NextSession )
      break;
    SessionSchedulingGroupByProcess = (unsigned __int16 *)MmGetSessionSchedulingGroupByProcess(NextSession);
    if ( SessionSchedulingGroupByProcess )
    {
      if ( (unsigned int)v10 < v9 )
      {
        Address[2 * v10 + 1] = MmGetSessionIdEx(v14);
        Address[2 * v10 + 2] = *SessionSchedulingGroupByProcess;
      }
      v10 = (unsigned int)(v10 + 1);
    }
  }
  if ( Address )
    *Address = v10;
  *a4 = 8 * v10 + 4;
  return v9 < (unsigned int)v10 ? 0xC0000023 : 0;
}
