/*
 * XREFs of ?VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D52C
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C00A5B80 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiStartHwSchNodeProgressMonitoring(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v3[0] = v1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v3);
  if ( *((_DWORD *)a1 + 428) || *((_DWORD *)a1 + 430) )
    *((_DWORD *)a1 + 110) = 1;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
