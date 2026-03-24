/*
 * XREFs of ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00CAC40
 * Callers:
 *     NtGdiGetDeviceCapsAll @ 0x1C01426E0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C009A970 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAllInternal(struct PDEVOBJ *this, struct _DEVCAPS *a2)
{
  struct _DEVCAPS *v2; // rbx
  _OWORD v5[9]; // [rsp+20h] [rbp-98h] BYREF

  v2 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (struct _DEVCAPS *)MmUserProbeAddress;
  *(_BYTE *)a2 = *(_BYTE *)a2;
  *((_BYTE *)a2 + 143) = *((_BYTE *)a2 + 143);
  memset(v5, 0, sizeof(v5));
  vGetDeviceCaps(this, (struct _DEVCAPS *)v5);
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (struct _DEVCAPS *)MmUserProbeAddress;
  *(_OWORD *)v2 = v5[0];
  *((_OWORD *)v2 + 1) = v5[1];
  *((_OWORD *)v2 + 2) = v5[2];
  *((_OWORD *)v2 + 3) = v5[3];
  *((_OWORD *)v2 + 4) = v5[4];
  *((_OWORD *)v2 + 5) = v5[5];
  *((_OWORD *)v2 + 6) = v5[6];
  *((_OWORD *)v2 + 7) = v5[7];
  *((_OWORD *)v2 + 8) = v5[8];
  return 1LL;
}
