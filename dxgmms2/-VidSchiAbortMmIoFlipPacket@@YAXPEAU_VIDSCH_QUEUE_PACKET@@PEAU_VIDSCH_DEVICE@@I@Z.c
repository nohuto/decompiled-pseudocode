void __fastcall VidSchiAbortMmIoFlipPacket(struct _VIDSCH_QUEUE_PACKET *a1, struct _VIDSCH_DEVICE *a2, int a3)
{
  int v3; // eax
  int v5; // edx
  int v6; // edx
  bool v7; // zf

  v3 = *((_DWORD *)a1 + 18);
  if ( ((v3 & 0x80004) != 0 || *((_DWORD *)a1 + 12) == 3) && (*((_DWORD *)a1 + 97) == a3 || a3 == -1) )
  {
    v5 = *((_DWORD *)a1 + 16);
    if ( (v5 & 0x20) == 0 )
    {
      v6 = v5 | 0x20;
      v7 = *((_DWORD *)a1 + 12) == 3;
      *((_DWORD *)a1 + 16) = v6;
      if ( v7 && (v6 & 2) == 0 && (v3 & 0xC00) != 0x400 )
        ++*((_QWORD *)a2 + *((unsigned int *)a1 + 40) + 47);
    }
  }
}
