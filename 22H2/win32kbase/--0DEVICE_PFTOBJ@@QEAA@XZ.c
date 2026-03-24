/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C013D468
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this)
{
  _QWORD *v1; // rbx
  int v3; // eax

  v1 = 0LL;
  if ( qword_1C02557E0 )
    v3 = qword_1C02557E0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 )
  {
    if ( qword_1C02557E8 )
      v1 = (_QWORD *)qword_1C02557E8();
    *(_QWORD *)this = *v1;
  }
  return this;
}
