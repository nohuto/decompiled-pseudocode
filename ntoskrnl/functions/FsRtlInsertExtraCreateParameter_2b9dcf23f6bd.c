NTSTATUS __stdcall FsRtlInsertExtraCreateParameter(PECP_LIST EcpList, PVOID EcpContext)
{
  struct _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *p_EcpList; // rax
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  char *v7; // r9

  Flink = EcpList->EcpList.Flink;
  p_EcpList = &EcpList->EcpList;
  if ( Flink == &EcpList->EcpList )
  {
LABEL_2:
    v4 = (struct _LIST_ENTRY *)((char *)EcpContext - 64);
    Blink = p_EcpList->Blink;
    if ( Blink->Flink != p_EcpList )
      __fastfail(3u);
    v4->Flink = p_EcpList;
    v4->Blink = Blink;
    Blink->Flink = v4;
    p_EcpList->Blink = v4;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = (char *)Flink[1].Flink - *((_QWORD *)EcpContext - 6);
      if ( !v7 )
        v7 = (char *)Flink[1].Blink - *((_QWORD *)EcpContext - 5);
      if ( !v7 )
        break;
      Flink = Flink->Flink;
      if ( Flink == p_EcpList )
        goto LABEL_2;
    }
    LODWORD(Flink[2].Blink) |= 4u;
    return -1073741811;
  }
}
