/*
 * XREFs of ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02C435C
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00D0870 (NtGdiAddFontResourceW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C02C6D80 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall ProbeAndReadDesignVector(struct tagDESIGNVECTOR *a1, struct tagDESIGNVECTOR *a2)
{
  struct tagDESIGNVECTOR *v2; // rax
  unsigned int v3; // eax
  unsigned int v5; // ebx
  char *v6; // rdx
  char *v7; // rcx

  v2 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v2 = (struct tagDESIGNVECTOR *)MmUserProbeAddress;
  *(_QWORD *)a1 = *(_QWORD *)v2;
  v3 = *((_DWORD *)a1 + 1);
  if ( v3 > 0x10 )
    return 0LL;
  v5 = 4 * v3 + 8;
  if ( v3 )
  {
    v6 = (char *)a2 + 8;
    v7 = (char *)a1 + 8;
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (char *)MmUserProbeAddress;
    memmove(v7, v6, 4 * v3);
  }
  return v5;
}
