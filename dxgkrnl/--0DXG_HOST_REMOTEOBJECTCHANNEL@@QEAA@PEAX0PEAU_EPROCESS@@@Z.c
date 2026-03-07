DXG_HOST_REMOTEOBJECTCHANNEL *__fastcall DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        void *a2,
        void *a3,
        struct _EPROCESS *a4)
{
  struct _EPROCESS *CurrentProcess; // rax
  DXG_HOST_REMOTEOBJECTCHANNEL *result; // rax

  CurrentProcess = a4;
  *(_QWORD *)this = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( !a4 )
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(0LL);
  *((_QWORD *)this + 3) = CurrentProcess;
  result = this;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = a3;
  return result;
}
