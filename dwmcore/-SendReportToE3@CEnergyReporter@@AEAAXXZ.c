void __fastcall CEnergyReporter::SendReportToE3(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  int v4; // esi
  PVOID v5; // rax
  int Ptr_high; // ecx
  int v7; // ecx
  struct _TP_WORK *v8; // rcx
  _QWORD v9[9]; // [rsp+20h] [rbp-48h] BYREF

  v9[0] = off_1802CB140;
  Ptr = this[6].Ptr;
  v9[7] = v9;
  CProcessAttributionObserver::ForEachChangedProcessAttribution(Ptr, this, v9);
  if ( LODWORD(this[5].Ptr) )
  {
    v4 = 0;
    AcquireSRWLockExclusive(this + 7);
    LODWORD(this[8].Ptr) = GetCurrentThreadId();
    if ( LOBYTE(this[10].Ptr) )
    {
      if ( BYTE1(this[10].Ptr) )
      {
        if ( (unsigned int)dword_1803E0F64 < MEMORY[0x7FFE037C] && !(unsigned __int8)EtwCheckCoverage(&off_1803E0F58) )
          NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_1803E0F58, 0x18u);
      }
      else if ( LODWORD(this[14].Ptr) >= 0xFFFF )
      {
        v4 = -2147467259;
      }
      else
      {
        v4 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
               &this[11],
               this[2].Ptr,
               LODWORD(this[5].Ptr));
      }
    }
    else
    {
      v5 = this[2].Ptr;
      this[2].Ptr = this[11].Ptr;
      Ptr_high = HIDWORD(this[13].Ptr);
      this[11].Ptr = v5;
      LODWORD(v5) = HIDWORD(this[4].Ptr);
      HIDWORD(this[4].Ptr) = Ptr_high;
      v7 = (int)this[14].Ptr;
      HIDWORD(this[13].Ptr) = (_DWORD)v5;
      LODWORD(v5) = this[5].Ptr;
      LODWORD(this[5].Ptr) = v7;
      v8 = (struct _TP_WORK *)this[9].Ptr;
      LODWORD(this[14].Ptr) = (_DWORD)v5;
      SubmitThreadpoolWork(v8);
      LOBYTE(this[10].Ptr) = 1;
    }
    LODWORD(this[8].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 7);
    if ( v4 < 0
      && (unsigned int)dword_1803E0F7C < MEMORY[0x7FFE037C]
      && !(unsigned __int8)EtwCheckCoverage(&off_1803E0F70) )
    {
      NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_1803E0F70, 0x18u);
    }
    LODWORD(this[5].Ptr) = 0;
  }
}
