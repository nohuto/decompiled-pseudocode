/*
 * XREFs of ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1800EA964
 * Callers:
 *     ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1800EA920 (--_GCCompiledEffectTemplate@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800EAAE0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompiledEffectTemplate::~CCompiledEffectTemplate(CCompiledEffectTemplate *this)
{
  __int64 v1; // r8
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 i; // r9
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 10);
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 40);
    v4 = 0LL;
    for ( i = *(_QWORD *)(v1 + 16); (unsigned int)v4 < v3; v4 = (unsigned int)(v4 + 1) )
    {
      if ( this == *(CCompiledEffectTemplate **)(i + 8 * v4) )
        break;
    }
    if ( (unsigned int)v4 < v3 )
    {
      while ( (unsigned int)v4 < v3 - 1 )
      {
        *(_QWORD *)(i + 8 * v4) = *(_QWORD *)(i + 8LL * (unsigned int)(v4 + 1));
        v4 = (unsigned int)(v4 + 1);
        v3 = *(_DWORD *)(v1 + 40);
      }
      *(_DWORD *)(v1 + 40) = v3 - 1;
    }
  }
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
