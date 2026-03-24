/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x1C008B3AC
 * Callers:
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ApiSetGetUndimSourceInputTypeMask @ 0x1C01CF310 (ApiSetGetUndimSourceInputTypeMask.c)
 *     ApiSetGetWakeSourceInputTypeMask @ 0x1C01CF4AC (ApiSetGetWakeSourceInputTypeMask.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  int v2; // edi
  int v3; // eax

  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  v2 = -1073741637;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 25) = 30;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 42) = 0;
  *((_WORD *)this + 48) = 0;
  *((_BYTE *)this + 98) = 0;
  if ( qword_1C0257B10 )
    v3 = qword_1C0257B10();
  else
    v3 = -1073741637;
  if ( v3 >= 0 )
    *((_DWORD *)this + 25) = ApiSetGetWakeSourceInputTypeMask();
  if ( qword_1C0257B20 )
    v2 = qword_1C0257B20();
  if ( v2 >= 0 )
    *((_DWORD *)this + 26) = ApiSetGetUndimSourceInputTypeMask();
  return this;
}
