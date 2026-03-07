_DWORD *__fastcall CInputDest::GetContainerId(CInputDest *a1)
{
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rax
  _DWORD *v2; // rdx

  ContainerInfo = CInputDest::GetContainerInfo(a1);
  if ( ContainerInfo )
    LODWORD(ContainerInfo) = *(_DWORD *)ContainerInfo;
  *v2 = (_DWORD)ContainerInfo;
  return v2;
}
