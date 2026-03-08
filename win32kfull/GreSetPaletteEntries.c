/*
 * XREFs of GreSetPaletteEntries @ 0x1C02D3E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02DABC4 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  Gre::Base *v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  HDC v12; // rdi
  __int64 *v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v14, a1);
  v9 = v14[0];
  if ( v14[0] )
  {
    v15[0] = *((_QWORD *)Gre::Base::Globals(v8) + 5);
    GreAcquireSemaphore(v15[0]);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)v14, a2, a3, a4);
    GreAcquireHmgrSemaphore();
    v12 = (HDC)v9[5];
    while ( v12 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v14, v12);
      v11 = v14[0];
      if ( !v14[0] )
        break;
      *((_DWORD *)v14[0] + 79) |= 0xFu;
      v12 = (HDC)v11[123];
      XDCOBJ::vAltUnlockFast(v14);
    }
    GreReleaseHmgrSemaphore(v11, v10);
    SEMOBJ::vUnlock((SEMOBJ *)v15);
    if ( v9 )
      DEC_SHARE_REF_CNT(v9);
  }
  return v7;
}
