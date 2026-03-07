char __fastcall VidSchiAbortSoftwarePacket(struct _VIDSCH_QUEUE_PACKET *a1, unsigned __int64 a2)
{
  if ( *((_DWORD *)a1 + 12) != 7 || *((unsigned int *)a1 + 96) < a2 )
    return 0;
  *((_DWORD *)a1 + 16) |= 0x20u;
  return 1;
}
