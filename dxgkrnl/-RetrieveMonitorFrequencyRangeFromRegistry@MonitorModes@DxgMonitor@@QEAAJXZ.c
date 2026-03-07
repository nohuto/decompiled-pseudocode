__int64 __fastcall DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(
        struct _ERESOURCE *this,
        __int64 a2)
{
  __int64 *SharedWaiters; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  char v8; // r14
  int v9; // esi
  ULONG i; // edx
  int SubkeyInfoFromRegistry; // edi
  struct _KEY_BASIC_INFORMATION *v12; // rbx
  struct _KEY_BASIC_INFORMATION *v13; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  struct _KEY_BASIC_INFORMATION *v16; // [rsp+38h] [rbp-48h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v18; // [rsp+48h] [rbp-38h] BYREF
  PERESOURCE Resource; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+68h] [rbp-18h]

  SharedWaiters = (__int64 *)this[2].SharedWaiters;
  Handle = 0LL;
  LOBYTE(a2) = 1;
  v21 = *(_DWORD *)L"S";
  v18.Buffer = (wchar_t *)&v20;
  v20 = *(_QWORD *)L"MODES";
  *(_QWORD *)&v18.Length = 786442LL;
  v4 = *SharedWaiters;
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, HANDLE *))(v4 + 16))(SharedWaiters, a2, 2LL, &v17);
  v6 = v5;
  if ( v5 < 0 || (Handle = 0LL, v7 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, v17, &v18), v6 = v7, v7 < 0) )
  {
    WdLogSingleEntry1(7LL, v6);
  }
  else
  {
    RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
      &Resource,
      this,
      1);
    v8 = 0;
    v9 = 1;
    for ( i = 0; ; i = v9++ )
    {
      v16 = 0LL;
      SubkeyInfoFromRegistry = DxgkRetrieveSubkeyInfoFromRegistry(Handle, i, (void **)&v16);
      if ( SubkeyInfoFromRegistry < 0 )
      {
        v13 = v16;
        if ( !v16 )
          goto LABEL_10;
        goto LABEL_22;
      }
      v12 = v16;
      SubkeyInfoFromRegistry = DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
                                 (DxgMonitor::MonitorModes *)this,
                                 Handle,
                                 v16);
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v8 = 1;
      if ( v12 )
        operator delete(v12);
    }
    if ( !v12 )
      goto LABEL_10;
    v13 = v12;
LABEL_22:
    operator delete(v13);
LABEL_10:
    LODWORD(v6) = 0;
    if ( !v8 )
      LODWORD(v6) = SubkeyInfoFromRegistry;
    if ( Resource )
    {
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)v6;
}
