/*
 * XREFs of ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x1800AAA30
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800AA8DC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CChannelContext *__fastcall CChannelContext::CChannelContext(
        CChannelContext *this,
        int a2,
        int a3,
        struct CProcessAttribution *a4,
        struct CConnection *a5)
{
  CMILRefCountImpl *v6; // rcx
  CChannelContext *result; // rax

  v6 = (CChannelContext *)((char *)this + 8);
  *((_QWORD *)this + 3) = 0LL;
  *(_DWORD *)v6 = 0;
  *(_QWORD *)this = &CChannelContext::`vftable';
  CMILRefCountImpl::AddReference(v6);
  *((_QWORD *)this + 5) = a5;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  *((_QWORD *)this + 6) = a4;
  if ( a4 )
    CMILRefCountImpl::AddReference((struct CProcessAttribution *)((char *)a4 + 8));
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  return result;
}
