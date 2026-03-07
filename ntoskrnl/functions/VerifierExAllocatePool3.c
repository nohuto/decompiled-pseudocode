__int64 __fastcall VerifierExAllocatePool3(__int64 a1, ULONG_PTR a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = a1 & 0x20;
  if ( (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("ExAllocatePool3") )
  {
    if ( !v6 )
      return 0LL;
LABEL_15:
    RtlRaiseStatus(-1073741670);
  }
  if ( VfExAllocPoolInternal == pXdvExAllocatePool3 || !pXdvExAllocatePool3 )
  {
    result = ExAllocatePool3(a1, a2, a3, a4, a5);
  }
  else
  {
    v11 = a1 & 0xFFFFFFFFFFFFFFDFuLL;
    if ( !v6 )
      v11 = a1;
    result = pXdvExAllocatePool3(
               0LL,
               v11 | 0x200,
               a2,
               a3,
               0,
               a4,
               a5,
               retaddr,
               (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))VfHandlePoolAlloc);
  }
  if ( !result && v6 )
    goto LABEL_15;
  return result;
}
