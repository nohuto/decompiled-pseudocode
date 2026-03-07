struct CEventPool::CEventPoolEntry *CEventPool::CEventPoolEntry::Create(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  struct CManualResetEvent *v2; // rax
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = EngAllocMem(0, 0x10u, 0x676D6466u);
  v1 = v0;
  if ( v0 )
  {
    v4 = v0;
    v2 = CManualResetEvent::Create();
    v1[1] = v2;
    if ( v2 )
      return (struct CEventPool::CEventPoolEntry *)v1;
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v4);
  }
  return 0LL;
}
