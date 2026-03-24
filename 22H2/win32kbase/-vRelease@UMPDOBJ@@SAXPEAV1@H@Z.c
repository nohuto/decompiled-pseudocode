/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0081F90
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C007428C (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C002FBA0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030700 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00316A0 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?bCleanup@UMPDOBJ@@QEAAHXZ @ 0x1C008206C (-bCleanup@UMPDOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ ***a1, int a2)
{
  int v4; // eax
  struct UMPDOBJ **v5; // rcx
  struct UMPDOBJ **v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  if ( qword_1C0255A10 )
    v4 = qword_1C0255A10();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0255A18 )
    qword_1C0255A18(a1);
  if ( a2 )
  {
    v5 = a1[5];
    if ( v5[1] != (struct UMPDOBJ *)(a1 + 5) || (v6 = a1[6], *v6 != (struct UMPDOBJ *)(a1 + 5)) )
      __fastfail(3u);
    *v6 = (struct UMPDOBJ *)v5;
    v5[1] = (struct UMPDOBJ *)v6;
  }
  if ( a1 )
  {
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v7, (struct OBJECT *)a1, 0, 0, 1);
    if ( v8 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v7 + 14), (struct OBJECT *)a1);
      --*((_DWORD *)a1 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      if ( v8 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    }
    if ( (unsigned int)UMPDOBJ::bCleanup((UMPDOBJ *)a1) )
      Win32FreePool((__int64)a1);
  }
}
