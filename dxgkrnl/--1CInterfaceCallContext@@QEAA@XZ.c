void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  PVOID *v2; // rbx

  if ( *((_BYTE *)this + 20) )
  {
    v2 = (PVOID *)((char *)this + 8);
    if ( *((_BYTE *)this + 21) )
    {
      *((_BYTE *)*v2 + 5468) = 0;
      ExReleasePushLockExclusiveEx((char *)*v2 + 5424, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    if ( *((_BYTE *)this + 22) )
    {
      *((_BYTE *)*v2 + 5468) = 0;
      DxgkReleaseAdapterStopResetSync(*((_QWORD *)*v2 + 489), 0LL);
    }
    if ( *((_BYTE *)this + 23) )
    {
      if ( *((_BYTE *)*v2 + 484) )
        DpiEnableD3Requests(*((_QWORD *)*v2 + 3));
      ExReleaseResourceLite(*((PERESOURCE *)*v2 + 21));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*v2 + 2, *v2, 0x20u);
  }
}
