/*
 * XREFs of FsRtlGetNextExtraCreateParameter @ 0x14087D820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlGetNextExtraCreateParameter(
        PECP_LIST EcpList,
        PVOID CurrentEcpContext,
        LPGUID NextEcpType,
        PVOID *NextEcpContext,
        ULONG *NextEcpContextSize)
{
  _LIST_ENTRY *p_EcpList; // r10
  _LIST_ENTRY *v6; // rdx
  __int64 p_Blink; // rdx
  NTSTATUS v8; // r10d

  p_EcpList = &EcpList->EcpList;
  if ( CurrentEcpContext )
  {
    v6 = (_LIST_ENTRY *)*((_QWORD *)CurrentEcpContext - 8);
    if ( v6 == p_EcpList )
      goto LABEL_15;
    p_Blink = (__int64)&v6[-1].Blink;
  }
  else
  {
    p_Blink = 0LL;
    if ( p_EcpList->Flink != p_EcpList )
      p_Blink = (__int64)&p_EcpList->Flink[-1].Blink;
  }
  if ( p_Blink )
  {
    v8 = 0;
    if ( NextEcpContext )
      *NextEcpContext = (PVOID)(p_Blink + 72);
    if ( NextEcpContextSize )
      *NextEcpContextSize = *(_DWORD *)(p_Blink + 52) - 72;
    if ( NextEcpType )
      *NextEcpType = *(LPGUID)(p_Blink + 24);
    return v8;
  }
LABEL_15:
  v8 = -1073741275;
  if ( NextEcpContext )
    *NextEcpContext = 0LL;
  if ( NextEcpContextSize )
    *NextEcpContextSize = 0;
  if ( NextEcpType )
    *NextEcpType = 0LL;
  return v8;
}
