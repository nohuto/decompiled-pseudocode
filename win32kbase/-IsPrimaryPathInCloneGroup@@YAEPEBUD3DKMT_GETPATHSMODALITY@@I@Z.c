/*
 * XREFs of ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00D369C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPrimaryPathInCloneGroup(const struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r9d
  unsigned int v4; // r8d
  _DWORD *i; // rcx

  v2 = 0;
  v3 = *((_DWORD *)a1 + 74 * a2 + 60);
  v4 = *((unsigned __int16 *)a1 + 10);
  if ( !*((_WORD *)a1 + 10) )
    return 0;
  for ( i = (_DWORD *)((char *)a1 + 240); *i != v3; i += 74 )
  {
    if ( ++v2 >= v4 )
      return 0;
  }
  return v2 == a2;
}
