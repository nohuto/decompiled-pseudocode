void __fastcall VidSchiUpdateLastPresentIdFromVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3,
        unsigned int *const a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  DWORD v9; // r8d
  LARGE_INTEGER *v10; // rcx

  v4 = 0;
  if ( *((_QWORD *)a2 + 4) && *((_DWORD *)a3 + 32) )
  {
    do
    {
      v8 = *((unsigned int *)a3 + v4 + 33);
      v9 = *((_DWORD *)a3 + v4 + 43);
      v10 = (LARGE_INTEGER *)((char *)a2 + 288 * v8 + 152);
      if ( v10[28].LowPart != v9 )
        VidSchiCommitFlipQueueLogUpdate(v10, v8, v9, a4, 1);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a3 + 32) );
  }
}
