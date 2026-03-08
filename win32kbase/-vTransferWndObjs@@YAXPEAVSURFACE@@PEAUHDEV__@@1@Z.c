/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C019A380
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C018EBEC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00448F0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, struct PDEV *a2, HDEV a3)
{
  __int64 (*v6)(void); // rax
  __int64 i; // rbx
  __int64 j; // rdi
  HDEV v9; // [rsp+48h] [rbp+10h] BYREF
  struct PDEV *v10; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 56LL);
  EngAcquireSemaphore(v11);
  v6 = qword_1C02D5DB0;
  v10 = a2;
  v9 = a3;
  if ( qword_1C02D5DB0 )
    v6 = (__int64 (*)(void))qword_1C02D5DB0();
  for ( i = *(_QWORD *)v6; i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v9);
        PDEVOBJ::vUnreferencePdev(&v10);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v11);
}
