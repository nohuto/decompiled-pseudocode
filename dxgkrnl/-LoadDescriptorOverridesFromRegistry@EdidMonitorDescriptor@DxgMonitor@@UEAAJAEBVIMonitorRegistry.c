__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::EdidMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // r15
  NTSTATUS v6; // eax
  unsigned int v7; // r12d
  __int64 v9; // r14
  int OneBlockMonitorDescriptorFromRegistry; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  void **v13; // rdi
  __int64 v14; // rax
  void **v15; // rdi
  void **v16; // r13
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]

  KeyHandle = 0LL;
  Handle = 0LL;
  v22 = *(_DWORD *)L"E";
  v19.Buffer = (wchar_t *)&v20;
  v3 = *(_QWORD *)a2;
  v20 = *(_OWORD *)L"EDID_OVERRIDE";
  *(_QWORD *)&v19.Length = 1835034LL;
  v21 = *(_QWORD *)L"RRIDE";
  v4 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, HANDLE *))(v3 + 16))(
         a2,
         0LL,
         1LL,
         &Handle);
  v5 = v4;
  if ( v4 >= 0 && (KeyHandle = 0LL, v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, Handle, &v19), v5 = v6, v6 >= 0) )
  {
    v9 = 0LL;
    v7 = -1073741801;
    if ( !*((_DWORD *)this + 4) )
      goto LABEL_24;
    while ( 1 )
    {
      OneBlockMonitorDescriptorFromRegistry = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
      LODWORD(v5) = OneBlockMonitorDescriptorFromRegistry;
      if ( OneBlockMonitorDescriptorFromRegistry == -1073741801 )
        break;
      if ( OneBlockMonitorDescriptorFromRegistry >= 0 )
      {
        WdLogSingleEntry0(1LL);
        v11 = *((_QWORD *)this + 3);
        v12 = *(_QWORD *)(v11 + 8 * v9);
        *(_QWORD *)(v11 + 8 * v9) = 0LL;
        v13 = (void **)MEMORY[0];
        MEMORY[0] = v12;
        if ( v13 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v13);
          operator delete(v13);
        }
        v14 = *((_QWORD *)this + 3);
        v15 = *(void ***)(v14 + 8 * v9);
        *(_QWORD *)(v14 + 8 * v9) = 0LL;
        if ( v15 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v15);
          operator delete(v15);
        }
        ++*((_DWORD *)this + 5);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)this + 4) )
      {
LABEL_24:
        while ( (unsigned int)v9 <= 0xFE )
        {
          LODWORD(v9) = v9 + 1;
          LODWORD(v5) = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
          if ( (int)v5 < 0 )
          {
            LODWORD(v5) = 0;
            break;
          }
          WdLogSingleEntry0(1LL);
          v16 = (void **)MEMORY[0];
          MEMORY[0] = 0LL;
          if ( v16 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v16);
            operator delete(v16);
          }
        }
        if ( (_DWORD)v9 - 1 != *((_DWORD *)this + 4) )
          WdLogSingleEntry0(1LL);
        v7 = v5;
        break;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, v5);
    v7 = v5;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( (int)v5 < 0 )
    DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
  return v7;
}
