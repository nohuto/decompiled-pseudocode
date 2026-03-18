/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C015FA70
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C008AD98 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C015F9F0 (--1UMPDREF@@QEAA@XZ.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ *a1, int a2)
{
  __int64 v4; // rdx
  struct UMPDOBJ **v5; // rcx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)a1;
  if ( qword_1C0294E18 && (int)qword_1C0294E18() >= 0 && qword_1C0294E20 )
    qword_1C0294E20(a1);
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
