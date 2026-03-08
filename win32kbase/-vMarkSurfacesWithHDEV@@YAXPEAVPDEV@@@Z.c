/*
 * XREFs of ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C006EF08
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C006EFB0 (HmgSafeNextObjt.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C00A40A0 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 */

void __fastcall vMarkSurfacesWithHDEV(struct PDEV *a1)
{
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  SURFACE *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 6088), 1uLL) & 0xF;
  v4 = (unsigned int)v3;
  v5 = 2 * (v3 + 382);
  *(_QWORD *)(v2 + 16 * v4 + 6104) = a1;
  *(_QWORD *)(v2 + 8 * v5) = *((_QWORD *)a1 + 221);
  GreAcquireHmgrSemaphore(v5);
  v7 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    LOBYTE(v6) = 5;
    v7 = HmgSafeNextObjt(v7, v6, &v9);
    if ( !v7 )
      break;
    if ( *((struct PDEV **)v9 + 6) == a1 )
      SURFACE::hdev(v9, 0LL);
  }
  GreReleaseHmgrSemaphore(v8);
}
