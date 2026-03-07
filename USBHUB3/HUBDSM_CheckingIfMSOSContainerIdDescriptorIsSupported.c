__int64 __fastcall HUBDSM_CheckingIfMSOSContainerIdDescriptorIsSupported(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2464) & 1) != 0 )
    return 4061LL;
  if ( (unsigned __int16)(*(_WORD *)(v1 + 1990) - 256) <= 0xFFu
    || (*(_DWORD *)(v1 + 1632) & 0x80u) != 0
    || (*(_DWORD *)(v1 + 1644) & 0x20) != 0 )
  {
    return (*(_BYTE *)(v1 + 1644) & 2) != 0 ? 4089 : 4061;
  }
  return 4089LL;
}
