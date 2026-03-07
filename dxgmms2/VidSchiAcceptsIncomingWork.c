bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  return ((*(_DWORD *)(a1 + 312) - 1) & 0xFFFFFFFD) == 0;
}
