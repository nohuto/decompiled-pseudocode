/*
 * XREFs of bDeletePalette @ 0x1C0074320
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0033780 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0073B1C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiThreadCallout @ 0x1C0074060 (GdiThreadCallout.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0039FC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00C94C4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00C9508 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C013E8C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v9);
  v6 = HmgShareLockCheck(a1, 8);
  v7 = 0;
  v9[0] = v6;
  if ( v6 )
    v7 = XEPALOBJ::bDeletePalette(v9, a2, a3);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v9);
  SEMOBJ::vUnlock((PERESOURCE *)&v10);
  return v7;
}
