void __fastcall CoreMessagingK::BufferCache::Free(char *a1)
{
  struct CoreMessagingK::BufferCache::BufferHeader *v1; // r8
  char *v2; // rbx
  struct CoreMessagingK::BufferCache::BufferHeader *v3; // rdx
  struct CoreMessagingK::BufferCache::BufferHeader *v4; // r11
  int v5; // r10d
  struct CoreMessagingK::BufferCache::BufferHeader *v6; // r9
  PVOID v7; // rcx

  if ( a1 )
  {
    v1 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
    v2 = a1 - 16;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0;
    if ( CoreMessagingK::BufferCache::s_FreeList )
    {
      v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
      do
      {
        ++v5;
        if ( *(_WORD *)v6 < *(_WORD *)v1 )
          v1 = v6;
        else
          v4 = v3;
        v3 = v4;
        v4 = v6;
        v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)*((_QWORD *)v6 + 1);
      }
      while ( v6 );
      if ( v5 == 2 )
      {
        if ( *(_WORD *)v1 >= *(_WORD *)v2 )
        {
          ExFreePoolWithTag(v2, 0x43424D43u);
          return;
        }
        CoreMessagingK::BufferCache::Remove(v1, v3);
        ExFreePoolWithTag(v7, 0x43424D43u);
      }
    }
    *((_QWORD *)v2 + 1) = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = v2;
  }
}
