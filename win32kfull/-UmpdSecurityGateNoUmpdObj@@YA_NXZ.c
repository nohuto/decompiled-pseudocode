char __fastcall UmpdSecurityGateNoUmpdObj(Gre::Base *a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _EPROCESS *CurrentProcess; // rax

  v1 = 0;
  v3 = *((unsigned int *)Gre::Base::Globals(a1) + 1628);
  if ( (_DWORD)v3 != 2 )
  {
    if ( !(_DWORD)v3 )
      return 1;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v3, v2, v4);
    if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
      return 1;
  }
  return v1;
}
