/*
 * XREFs of bDeletePalette @ 0x1C008B2F0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     GdiThreadCallout @ 0x1C008AB80 (GdiThreadCallout.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00D2464 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00D24A8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  unsigned int v3; // ebx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v6; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  v6 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 40LL);
  EngAcquireSemaphore(v6);
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v5);
  v2 = HmgShareLockCheck(v1, 8);
  v3 = 0;
  v5[0] = v2;
  if ( v2 )
    v3 = XEPALOBJ::bDeletePalette(v5, 0LL);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v5);
  SEMOBJ::vUnlock((PERESOURCE *)&v6);
  return v3;
}
