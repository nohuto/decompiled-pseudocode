/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0093754
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00936F4 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00D8EEC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00D9094 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C01696D0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( a1 && (v1 = (char *)a1 + 40, v2 = (char *)*((_QWORD *)a1 + 5), v2 != v1) )
    return (struct UMPDOBJ *)(v2 - 40);
  else
    return 0LL;
}
