/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C0113BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  int v2; // eax

  if ( qword_1C0255BC0 )
    v2 = qword_1C0255BC0();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0255BC8 )
      qword_1C0255BC8(a1);
  }
}
