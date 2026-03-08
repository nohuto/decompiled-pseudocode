/*
 * XREFs of FsRtlRemoveExtraCreateParameter @ 0x1406B1E00
 * Callers:
 *     IopSymlinkRemoveECP @ 0x14023ADC4 (IopSymlinkRemoveECP.c)
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  NTSTATUS v6; // ebx
  char *v7; // rdx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  int Blink_high; // ecx

  *EcpContext = 0LL;
  Flink = EcpList->EcpList.Flink;
  v6 = -1073741275;
  if ( Flink == &EcpList->EcpList )
    return v6;
  while ( 1 )
  {
    v7 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v7 )
      v7 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v7 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return v6;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  v6 = 0;
  v9 = Flink->Flink;
  if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
    __fastfail(3u);
  Blink->Flink = v9;
  v9->Blink = Blink;
  Flink->Blink = 0LL;
  Flink->Flink = 0LL;
  *EcpContext = &Flink[4];
  if ( !EcpContextSize )
    return v6;
  Blink_high = HIDWORD(Flink[2].Blink);
  result = 0;
  *EcpContextSize = Blink_high - 72;
  return result;
}
