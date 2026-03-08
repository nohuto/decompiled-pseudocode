/*
 * XREFs of ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C03593D0
 * Callers:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C03590B4 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0359E64 (-RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(DXGTRACKEDWORKLOAD *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  char *v4; // rcx
  char *v5; // rbx
  void *v6; // rcx

  if ( *((_BYTE *)this + 116) )
  {
    DXGDEVICE::RemoveTrackedWorkloadFromList(*((DXGDEVICE **)this + 2), this);
    v2 = *((_QWORD *)this + 9);
    *((_BYTE *)this + 116) = 0;
    if ( v2 )
    {
      WdLogSingleEntry1(1LL, 1347LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_cReference", 1347LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_QWORD *)this + 142) )
    {
      KeSetEvent((PRKEVENT)((char *)this + 1112), 0, 0);
      KeWaitForSingleObject(*((PVOID *)this + 142), Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)this + 142));
      *((_QWORD *)this + 142) = 0LL;
    }
    v3 = (void *)*((_QWORD *)this + 11);
    if ( v3 )
    {
      operator delete(v3);
      *((_QWORD *)this + 11) = 0LL;
    }
    v4 = (char *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      v5 = v4 - 8;
      `vector destructor iterator'(
        v4,
        136LL,
        *((_QWORD *)v4 - 1),
        (void (__fastcall *)(char *))DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair);
      operator delete(v5);
      *((_QWORD *)this + 4) = 0LL;
    }
    v6 = (void *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      operator delete(v6);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
