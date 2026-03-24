/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C0087174
 * Callers:
 *     RealInternalRemoveProp @ 0x1C0025CF0 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C0086F40 (DeleteProperties.c)
 *     HMCleanupGrantedHandle @ 0x1C0113F88 (HMCleanupGrantedHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(17);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
