/*
 * XREFs of ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1800AB0E4
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800AAFFC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CResourceTable *__fastcall CResourceTable::CResourceTable(CResourceTable *this, int a2, struct CProcessAttribution *a3)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CResourceTable::`vftable';
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 6) = 16;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 12) = a2;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CProcessAttribution *)((char *)a3 + 8));
  return this;
}
