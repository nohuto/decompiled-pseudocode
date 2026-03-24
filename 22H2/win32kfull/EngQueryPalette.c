/*
 * XREFs of EngQueryPalette @ 0x1C028DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019BA8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C012045C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall EngQueryPalette(HPALETTE hPal, ULONG *piMode, ULONG cColors, ULONG *pulColors)
{
  ULONG Entries; // edi
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  Entries = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v11, hPal);
  v9 = v11[0];
  if ( v11[0] )
  {
    *piMode = *(_DWORD *)(v11[0] + 24LL) & 0xF;
    if ( *(_DWORD *)(v9 + 28) )
    {
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v11, 0, cColors, (struct tagPALETTEENTRY *)pulColors, 1);
    }
    else
    {
      Entries = 3;
      if ( cColors >= 3 && pulColors )
      {
        *pulColors = **(_DWORD **)(v9 + 112);
        pulColors[1] = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 4LL);
        pulColors[2] = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 8LL);
      }
    }
    DEC_SHARE_REF_CNT(v9, v8);
  }
  return Entries;
}
