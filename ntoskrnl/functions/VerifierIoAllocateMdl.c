__int64 __fastcall VerifierIoAllocateMdl(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // bl
  char v6; // di
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = a4;
  v6 = a3;
  if ( (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("IoAllocateMdl") )
    return 0LL;
  LOBYTE(a4) = v5;
  LOBYTE(a3) = v6;
  return pXdvIoAllocateMdl(a1, a2, a3, a4, a5, retaddr, (__int64)IovAllocateMdl);
}
