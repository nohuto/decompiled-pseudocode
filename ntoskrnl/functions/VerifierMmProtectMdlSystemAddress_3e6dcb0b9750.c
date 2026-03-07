__int64 __fastcall VerifierMmProtectMdlSystemAddress(__int64 a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPageProtection(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmProtectMdlSystemAddress)(a1, a2);
}
