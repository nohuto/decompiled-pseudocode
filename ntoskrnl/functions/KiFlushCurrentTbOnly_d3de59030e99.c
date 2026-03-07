struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v6; // rcx

  if ( KiKvaShadow )
  {
    if ( a1 != 1 && (!a1 || a1 == 2) )
      goto LABEL_8;
    if ( KiFlushPcid )
      goto LABEL_4;
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
    {
LABEL_15:
      result = (struct _KTHREAD *)(v6 ^ 0x80);
      __writecr4(v6 ^ 0x80);
      __writecr4(v6);
      return result;
    }
LABEL_8:
    result = (struct _KTHREAD *)__readcr3();
    __writecr3((unsigned __int64)result);
    return result;
  }
  if ( a1 && (unsigned int)(a1 - 1) < 2 )
    goto LABEL_8;
  if ( !KiFlushPcid )
  {
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
      goto LABEL_15;
    goto LABEL_8;
  }
LABEL_4:
  v3 = __readcr3();
  __writecr3(v3);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( !Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, a2, a3);
  return result;
}
