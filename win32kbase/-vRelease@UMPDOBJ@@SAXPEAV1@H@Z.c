/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C018C630
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0042308 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C018C5B0 (--1UMPDREF@@QEAA@XZ.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ *a1, int a2)
{
  __int64 v4; // rdx
  struct UMPDOBJ **v5; // rcx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)a1;
  if ( qword_1C02D5F88 && (int)qword_1C02D5F88() >= 0 && qword_1C02D5F90 )
    qword_1C02D5F90(a1);
  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( *(struct UMPDOBJ **)(v4 + 8) != (struct UMPDOBJ *)((char *)a1 + 40)
      || (v5 = (struct UMPDOBJ **)*((_QWORD *)a1 + 6), *v5 != (struct UMPDOBJ *)((char *)a1 + 40)) )
    {
      __fastfail(3u);
    }
    *v5 = (struct UMPDOBJ *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  UMPDREF::~UMPDREF(&v6);
}
