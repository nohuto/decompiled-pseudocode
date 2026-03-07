DxgMonitor::EdidMonitorDescriptor **__fastcall DxgMonitor::EdidMonitorDescriptor::CopyWithoutOverrides(
        __int64 a1,
        DxgMonitor::EdidMonitorDescriptor **a2)
{
  char **v4; // rax
  DxgMonitor::EdidMonitorDescriptor *v5; // rdi
  char **v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rbx
  char *v13; // rcx
  unsigned int i; // ebp
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  void ***v18; // rax
  void **v19; // rcx
  char *v21; // rbx
  void ***v22; // [rsp+70h] [rbp+18h]
  void **v23; // [rsp+78h] [rbp+20h]

  v4 = (char **)operator new[](0x20uLL, 0x4D677844u, 256LL);
  v5 = (DxgMonitor::EdidMonitorDescriptor *)v4;
  if ( v4 )
  {
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
      v21 = v13 - 8;
      `vector destructor iterator'(
        v13,
        8LL,
        *((_QWORD *)v13 - 1),
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
      operator delete(v21);
    }
    if ( *v6 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v15 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL * i);
        if ( v15 )
        {
          v22 = (void ***)&(*v6)[8 * i];
          do
          {
            if ( *((_DWORD *)v15 + 2) == 2 )
            {
              v16 = operator new[](0x98uLL, 0x4D677844u, 256LL);
              v17 = v16;
              if ( !v16 )
              {
                *a2 = 0LL;
                goto LABEL_29;
              }
              memset((void *)(v16 + 24), 0, 0x80uLL);
              *(_QWORD *)(v17 + 16) = 128LL;
              *(_QWORD *)v17 = 0LL;
              *(_QWORD *)(v17 + 8) = 0LL;
              *(_DWORD *)(v17 + 12) = *((_DWORD *)v15 + 3);
              *(_DWORD *)(v17 + 8) = *((_DWORD *)v15 + 2);
              memmove((void *)(v17 + 24), v15 + 3, v15[2]);
              v18 = v22;
              v19 = *v22;
              *v22 = (void **)v17;
              v23 = v19;
              if ( v19 )
              {
                wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v19);
                operator delete(v23);
                v18 = v22;
              }
              v22 = (void ***)*v18;
            }
            v15 = (__int64 *)*v15;
          }
          while ( v15 );
          if ( *(_QWORD *)&(*v6)[8 * i] )
            ++*((_DWORD *)v5 + 4);
        }
      }
      *a2 = v5;
    }
    else
    {
      *a2 = 0LL;
LABEL_29:
      DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v5, 1);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
