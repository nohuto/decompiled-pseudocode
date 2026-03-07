void __fastcall VidMmRecordLock(struct _VIDMM_GLOBAL_STATISTICS *a1, char a2, char a3, int a4)
{
  ++*((_DWORD *)a1 + 108);
  if ( (a2 & 1) != 0 )
    ++*((_DWORD *)a1 + 109);
  if ( (a2 & 0x10) != 0 )
    ++*((_DWORD *)a1 + 110);
  if ( (a2 & 2) != 0 )
    ++*((_DWORD *)a1 + 111);
  if ( a2 < 0 )
    ++*((_DWORD *)a1 + 112);
  if ( a3 < 0 )
    ++*((_DWORD *)a1 + 113);
  if ( a4 )
    ++*((_DWORD *)a1 + 114);
}
