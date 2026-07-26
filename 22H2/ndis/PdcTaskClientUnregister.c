/*
 * XREFs of PdcTaskClientUnregister @ 0x1C012A538
 * Callers:
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F714 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x1C012A5C4 (PdcAcquireRwLockExclusive.c)
 *     PdcPortClose @ 0x1C012A648 (PdcPortClose.c)
 */

__int64 __fastcall PdcTaskClientUnregister(PVOID *P)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( P && *(_DWORD *)P == 1667458128 )
  {
    PdcAcquireRwLockExclusive(P + 1);
    PdcPortClose(P[5]);
    P[5] = 0LL;
    *(_DWORD *)P = 0;
    P[2] = 0LL;
    ExReleasePushLockEx(P + 1, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v1;
}
