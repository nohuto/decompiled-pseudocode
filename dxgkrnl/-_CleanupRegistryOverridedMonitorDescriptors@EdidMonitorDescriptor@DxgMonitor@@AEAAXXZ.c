/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C01FF334
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C01FDF70 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C01FF0D4 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 *     ?UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x1C03CB800 (-UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C001F290 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  __int64 v2; // rbp
  void ***v3; // rdi
  void **v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  void **v7; // r14
  void **v8; // rsi
  void **v9; // rsi
  char *v10; // rcx
  char *v11; // rbx

  if ( *((_DWORD *)this + 4) )
  {
    v2 = 0LL;
    do
    {
      v3 = (void ***)(*((_QWORD *)this + 3) + 8 * v2);
      v4 = *v3;
      if ( *v3 )
      {
        while ( v4 )
        {
          if ( *((_DWORD *)v4 + 2) == 3 )
          {
            v7 = (void **)*v4;
            *v4 = 0LL;
            v8 = *v3;
            *v3 = 0LL;
            if ( v8 )
            {
              wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v8);
              operator delete(v8);
            }
            v9 = *v3;
            *v3 = v7;
            if ( v9 )
            {
              wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v9);
              operator delete(v9);
            }
            --*((_DWORD *)this + 5);
          }
          else
          {
            v3 = (void ***)v4;
          }
          v4 = *v3;
        }
      }
      v5 = *((_DWORD *)this + 4);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v5 );
    v6 = 0LL;
    if ( !v5 )
      goto LABEL_22;
    while ( *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v6) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v5 )
        return;
    }
    *((_DWORD *)this + 4) = v6;
    if ( !(_DWORD)v6 )
    {
LABEL_22:
      v10 = (char *)*((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v10 )
      {
        v11 = v10 - 8;
        `vector destructor iterator'(
          v10,
          8LL,
          *((_QWORD *)v10 - 1),
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        operator delete(v11);
      }
    }
  }
  else if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
  }
}
