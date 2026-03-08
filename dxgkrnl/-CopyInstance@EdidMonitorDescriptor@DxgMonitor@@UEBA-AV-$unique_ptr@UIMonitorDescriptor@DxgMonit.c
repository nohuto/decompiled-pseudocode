/*
 * XREFs of ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CB430
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C001F1E0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C001F290 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

DxgMonitor::EdidMonitorDescriptor **__fastcall DxgMonitor::EdidMonitorDescriptor::CopyInstance(
        __int64 a1,
        DxgMonitor::EdidMonitorDescriptor **a2)
{
  char **v4; // rax
  DxgMonitor::EdidMonitorDescriptor *v5; // rdi
  char **v6; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rbx
  char *v13; // rcx
  char *v14; // rbx
  unsigned int v15; // r14d
  __int64 *v16; // rbx
  void ***v17; // r12
  __int64 v18; // rax
  __int64 v19; // r15
  void **v20; // rax
  void **v22; // [rsp+60h] [rbp+18h]

  v4 = (char **)operator new[](0x20uLL, 0x4D677844u, 256LL);
  v5 = (DxgMonitor::EdidMonitorDescriptor *)v4;
  if ( !v4 )
  {
    *a2 = 0LL;
    return a2;
  }
  v4[2] = 0LL;
  v4[3] = 0LL;
  *v4 = (char *)&DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  v4[1] = (char *)&DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  v6 = v4 + 3;
  v7 = *(unsigned int *)(a1 + 16);
  v8 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v8 = -1LL;
  v9 = __CFADD__(v8, 8LL);
  v10 = v8 + 8;
  if ( v9 )
    v10 = -1LL;
  v11 = operator new[](v10, 0x4D677844u, 256LL);
  if ( v11 )
  {
    v12 = (char *)(v11 + 8);
    *(_QWORD *)v11 = v7;
    `vector constructor iterator'(
      (char *)(v11 + 8),
      8LL,
      (unsigned int)v7,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *v6;
  *v6 = v12;
  if ( v13 )
  {
    v14 = v13 - 8;
    `vector destructor iterator'(
      v13,
      8LL,
      *((_QWORD *)v13 - 1),
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    operator delete(v14);
  }
  if ( *v6 )
  {
    v15 = 0;
    *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 16);
    *((_DWORD *)v5 + 5) = *(_DWORD *)(a1 + 20);
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_22:
      *a2 = v5;
      return a2;
    }
    while ( 1 )
    {
      v16 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL * v15);
      if ( v16 )
        break;
LABEL_21:
      if ( ++v15 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_22;
    }
    v17 = (void ***)&(*v6)[8 * v15];
    while ( 1 )
    {
      v18 = operator new[](0x98uLL, 0x4D677844u, 256LL);
      v19 = v18;
      if ( !v18 )
        break;
      memset((void *)(v18 + 24), 0, 0x80uLL);
      *(_QWORD *)(v19 + 16) = 128LL;
      *(_QWORD *)v19 = 0LL;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_DWORD *)(v19 + 12) = *((_DWORD *)v16 + 3);
      *(_DWORD *)(v19 + 8) = *((_DWORD *)v16 + 2);
      memmove((void *)(v19 + 24), v16 + 3, v16[2]);
      v20 = *v17;
      *v17 = (void **)v19;
      v22 = v20;
      if ( v20 )
      {
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v20);
        operator delete(v22);
      }
      v16 = (__int64 *)*v16;
      v17 = (void ***)*v17;
      if ( !v16 )
        goto LABEL_21;
    }
    *a2 = 0LL;
  }
  else
  {
    *a2 = 0LL;
  }
  DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v5, 1);
  return a2;
}
