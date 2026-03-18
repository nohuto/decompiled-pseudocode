/*
 * XREFs of bDeletePalette @ 0x1C0093780
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     GdiThreadCallout @ 0x1C00934E0 (GdiThreadCallout.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AFA8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00DA414 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00DA46C (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HSEMAPHORE v6; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF
  char v8; // [rsp+78h] [rbp+20h] BYREF

  v6 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  v4 = 0;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
  {
    XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v7);
    v7[0] = HmgShareLockCheck((unsigned int)a1, 8);
    if ( v7[0] )
      v4 = XEPALOBJ::bDeletePalette(v7, a2);
    XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v7);
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a1);
    v4 = XEPALOBJ::bDeletePalette(&v8, a2);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v6);
  return v4;
}
