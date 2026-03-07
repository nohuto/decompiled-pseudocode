void __fastcall VidSchiReleasePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rbp
  void *v6; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
  {
    v5 = i * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
    v6 = *(void **)((char *)a2 + v5 + 200);
    if ( v6 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v6);
      *(_QWORD *)((char *)a2 + v5 + 200) = 0LL;
    }
  }
}
