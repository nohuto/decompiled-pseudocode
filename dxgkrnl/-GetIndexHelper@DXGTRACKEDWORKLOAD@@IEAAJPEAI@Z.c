/*
 * XREFs of ?GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z @ 0x1C03597B4
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C03596D0 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetIndexHelper(DXGTRACKEDWORKLOAD *this, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // r8

  v2 = *((_DWORD *)this + 28);
  v3 = 0LL;
  if ( !v2 )
    return 2147483674LL;
  v4 = *((_QWORD *)this + 11);
  while ( *(_BYTE *)(v3 + v4) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 2147483674LL;
  }
  *(_BYTE *)(v3 + v4) = 1;
  *a2 = v3;
  return 0LL;
}
