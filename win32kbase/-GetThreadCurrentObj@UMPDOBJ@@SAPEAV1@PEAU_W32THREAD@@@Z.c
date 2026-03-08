/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0045394
 * Callers:
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0042308 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00EEC00 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C017F048 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
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
