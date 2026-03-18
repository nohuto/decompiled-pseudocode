/*
 * XREFs of ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C002395C
 * Callers:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001D928 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0206800 (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0198AF8 (DpiDisableD3Requests.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Acquire(AUTO_PNPPOWER_LOCK *this)
{
  char v2; // al

  if ( !*((_BYTE *)this + 10) )
  {
    v2 = *((_BYTE *)this + 9);
    if ( *((_BYTE *)this + 8) )
    {
      if ( v2 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 484LL) )
          DpiDisableD3Requests(*(_QWORD *)(*(_QWORD *)this + 24LL));
      }
      else
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 484LL) )
          DpiCheckForOutstandingD3Requests(*(_QWORD *)this);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)this + 168LL), 1u);
    }
    else
    {
      if ( v2 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 484LL) )
          DpiDisableD3Requests(*(_QWORD *)(*(_QWORD *)this + 24LL));
      }
      else
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(*(_QWORD *)this + 484LL) )
          DpiCheckForOutstandingD3Requests(*(_QWORD *)this);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)this + 168LL), 1u);
    }
    *((_BYTE *)this + 10) = 1;
  }
}
