/*
 * XREFs of Crashdump_EventRing_PrepareForHibernate @ 0x1C004E90C
 * Callers:
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C004CA8C (Crashdump_InitializeWithoutControllerReset.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall Crashdump_EventRing_PrepareForHibernate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdx
  int v5; // r8d
  _QWORD *v6; // rbx

  v2 = 0;
  v4 = **(_QWORD **)(a2 + 32);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v4 + 136);
  v5 = *(_DWORD *)(v4 + 112);
  *(_DWORD *)(a1 + 80) = v5;
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(v4 + 116);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(v4 + 120);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(v4 + 124);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v4 + 128);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(v4 + 144);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(v4 + 160);
  v6 = *(_QWORD **)(a1 + 112);
  if ( v5 )
  {
    do
    {
      PoSetHiberRange(0LL, 0x10000u, v6, 0x58uLL, 0x43434858u);
      PoSetHiberRange(0LL, 0x10000u, (PVOID)v6[2], *((unsigned int *)v6 + 10), 0x43434858u);
      v6 = (_QWORD *)*v6;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(a1 + 80) );
  }
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Got the Event Ring for hibernate\n");
}
