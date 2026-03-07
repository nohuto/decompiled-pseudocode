bool __fastcall VidSchiStallingFlipEntryUnblocked(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // eax
  char *i; // rcx

  v4 = *((_DWORD *)a3 + 284);
  if ( (v4 & 0x40000) == 0 )
  {
    if ( (v4 & 0x20000) != 0 )
      return *((_DWORD *)a2 + 772) == 0;
    return 1;
  }
  v5 = *((_DWORD *)a1 + 10);
  v6 = 0;
  if ( !v5 )
    return 1;
  for ( i = (char *)a1 + 3200; !*(_QWORD *)i || !*(_DWORD *)(*(_QWORD *)i + 3088LL); i += 8 )
  {
    if ( ++v6 >= v5 )
      return 1;
  }
  if ( a4 )
    *a4 = v6;
  return 0;
}
