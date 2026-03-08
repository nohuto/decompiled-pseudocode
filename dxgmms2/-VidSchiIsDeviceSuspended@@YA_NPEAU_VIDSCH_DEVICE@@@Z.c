/*
 * XREFs of ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0042AA0
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C00131F8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchiIsDeviceSuspended(struct _VIDSCH_DEVICE *a1)
{
  char v2; // di
  _QWORD **v3; // rbx
  _QWORD *i; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v6[0] = *((_QWORD *)a1 + 4) + 1728LL;
  v7 = 0;
  AcquireSpinLock::Acquire((Acquire *)v6);
  v3 = (_QWORD **)((char *)a1 + 88);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    if ( *(i - 3) != *(i - 4) )
      goto LABEL_6;
  }
  v2 = 1;
LABEL_6:
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
  return v2;
}
