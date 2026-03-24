/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C007428C
 * Callers:
 *     GdiThreadCallout @ 0x1C0074060 (GdiThreadCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00742F4 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0081F90 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct UMPDOBJ *ThreadCurrentObj; // rax
  int v3; // eax
  __int64 v4; // rcx

  while ( 1 )
  {
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(a1);
    if ( !ThreadCurrentObj )
      break;
    UMPDOBJ::vRelease(ThreadCurrentObj, 1);
  }
  if ( qword_1C0255A00 )
    v3 = qword_1C0255A00();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0255A08 )
    qword_1C0255A08(a1);
  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
