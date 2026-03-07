void __fastcall VidSchiAcquirePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // r8d
  __int64 v4; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
  {
    v4 = *(_QWORD *)((char *)a2 + i * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8) + 200);
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
}
