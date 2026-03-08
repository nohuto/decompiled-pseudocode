/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x1409726C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409E83F8 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)&v3);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KiUnstackDetachProcess(&v3);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v1 + 1112));
  ObfDereferenceObject((PVOID)v1);
  ExFreePoolWithTag(P, 0);
}
