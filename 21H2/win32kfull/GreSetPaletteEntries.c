/*
 * XREFs of GreSetPaletteEntries @ 0x1C02B8130
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017954 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD808 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  HDC v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v18, a1);
  v8 = v18;
  if ( v18 )
  {
    v19 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v18, a2, a3, a4);
    GreAcquireHmgrSemaphore(v10, v9, v11, v12);
    v14 = *(HDC *)(v8 + 40);
    while ( v14 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v20, v14);
      v13 = (__int64 *)v20[0];
      if ( !v20[0] )
        break;
      *(_DWORD *)(v20[0] + 316LL) |= 0xFu;
      LODWORD(v18) = 0;
      v14 = (HDC)v13[123];
      v15 = *v13;
      HmgDecrementShareReferenceCountEx(v13, &v18);
      if ( (_DWORD)v18 )
        bDeleteDCInternalEx(v15, 0LL);
    }
    GreReleaseHmgrSemaphore(v13);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    DEC_SHARE_REF_CNT(v8, v16);
  }
  return v7;
}
