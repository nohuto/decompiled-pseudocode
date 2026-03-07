__int64 __fastcall VerifierIoAllocateWorkItem(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("IoAllocateWorkItem") )
    return 0LL;
  else
    return ((__int64 (__fastcall *)(__int64, void *, __int64 (__fastcall *)(__int64, __int64)))pXdvIoAllocateWorkItem)(
             a1,
             retaddr,
             IovAllocateWorkItem);
}
