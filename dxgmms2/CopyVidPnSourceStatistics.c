/*
 * XREFs of CopyVidPnSourceStatistics @ 0x1C0107494
 * Callers:
 *     VidSchQueryVidPnSourceStatistics @ 0x1C0040760 (VidSchQueryVidPnSourceStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyVidPnSourceStatistics(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  a1[1] = a2[1];
  result = (unsigned int)a2[2];
  a1[2] = result;
  return result;
}
