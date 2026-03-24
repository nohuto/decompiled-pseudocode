/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01138E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  int v2; // eax

  if ( qword_1C0256BC0 )
    v2 = qword_1C0256BC0();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0256BC8 )
      qword_1C0256BC8(a1);
  }
}
