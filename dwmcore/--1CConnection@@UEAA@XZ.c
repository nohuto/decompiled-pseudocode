/*
 * XREFs of ??1CConnection@@UEAA@XZ @ 0x1801B27CC
 * Callers:
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x1801B25E8 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x1801B2860 (--_GCConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801B28AC (-Disconnect@CConnection@@QEAAXXZ.c)
 */

void __fastcall CConnection::~CConnection(CConnection *this)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &CConnection::`vftable';
  CConnection::Disconnect(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    SetEvent(v2);
    v3 = (void *)*((_QWORD *)this + 2);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  v4 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
}
