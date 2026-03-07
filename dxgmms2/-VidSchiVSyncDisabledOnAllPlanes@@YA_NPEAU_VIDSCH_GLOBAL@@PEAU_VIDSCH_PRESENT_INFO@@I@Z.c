char __fastcall VidSchiVSyncDisabledOnAllPlanes(struct _VIDSCH_GLOBAL *a1, struct _VIDSCH_PRESENT_INFO *a2, int a3)
{
  unsigned int v3; // r10d
  int v4; // r9d
  unsigned __int64 *i; // rax
  unsigned __int64 v6; // rcx

  v3 = *((_DWORD *)a1 + 38);
  v4 = 0;
  if ( !v3 )
    return 1;
  for ( i = (unsigned __int64 *)((char *)a2 + 424); ; i += 36 )
  {
    if ( a3 == -1 || v4 != a3 )
    {
      v6 = *(i - 4);
      if ( v6 )
      {
        if ( *i <= v6 )
          break;
      }
    }
    if ( ++v4 >= v3 )
      return 1;
  }
  return 0;
}
