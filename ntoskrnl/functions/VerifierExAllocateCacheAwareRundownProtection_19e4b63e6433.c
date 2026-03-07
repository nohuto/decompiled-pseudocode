__int64 __fastcall VerifierExAllocateCacheAwareRundownProtection(unsigned int a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPoolType(a1, retaddr, a2);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))pXdvExAllocateCacheAwareRundownProtection)(a1, a2);
}
