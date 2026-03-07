bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  bool v4; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rbp
  char v13; // dl
  char v14; // cl
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( IsMouseIVEnabled() && isRootPartition(v8, v7, v9, v10) )
  {
    CInputDest::GetContainerId(a3, &v15);
    ContainerInfo = CInputDest::GetContainerInfo(a3);
    v13 = 1;
    v4 = ContainerInfo != 0LL;
    if ( *((_WORD *)this + 2480) != (_WORD)v15 || (v14 = 1, *((_WORD *)this + 2481) != HIWORD(v15)) )
      v14 = 0;
    if ( *((_WORD *)this + 2464) )
      v13 = 0;
    else
      *((_DWORD *)this + 1240) = v15;
    if ( ContainerInfo && v13 && v14 )
      goto LABEL_16;
    if ( *((_BYTE *)this + 4945) )
    {
      CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 3904), a2);
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
    }
    if ( ContainerInfo )
LABEL_16:
      CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 3904), a2, a3);
  }
  return v4;
}
