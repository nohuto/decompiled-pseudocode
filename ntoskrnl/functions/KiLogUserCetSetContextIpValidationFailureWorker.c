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
