/*
 * XREFs of ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C016C0F0
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsPrimaryClonePath(const struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  unsigned __int16 v3; // r9
  __int64 v4; // r8
  int v5; // ebx
  int v6; // r11d
  int v7; // r8d
  __int64 v8; // rdx

  v3 = 0;
  v4 = 296LL * a2;
  v5 = *(_DWORD *)((char *)a1 + v4 + 72);
  v6 = *(_DWORD *)((char *)a1 + v4 + 76);
  v7 = *(_DWORD *)((char *)a1 + v4 + 80);
  while ( 1 )
  {
    v8 = 296LL * v3;
    if ( *(_DWORD *)((char *)a1 + v8 + 72) == v5
      && *(_DWORD *)((char *)a1 + v8 + 76) == v6
      && *(_DWORD *)((char *)a1 + v8 + 80) == v7 )
    {
      break;
    }
    ++v3;
  }
  return v3 == a2;
}
