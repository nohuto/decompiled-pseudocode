void __fastcall CEnergyReporter::SendReportToE3Worker(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  unsigned int Ptr; // eax
  unsigned __int64 v4; // rbx

  v1 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  GetCurrentThreadId();
  BYTE1(this[10].Ptr) = 1;
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  Ptr = (unsigned int)this[14].Ptr;
  if ( Ptr > 0xFFFF )
    LOWORD(Ptr) = -1;
  v4 = ((unsigned __int64)(unsigned __int16)Ptr << 16) | 2;
  if ( LODWORD(this[14].Ptr) > 0xFFFF
    && (unsigned int)dword_1803E0F4C < MEMORY[0x7FFE037C]
    && !(unsigned __int8)EtwCheckCoverage(&off_1803E0F40) )
  {
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_1803E0F40, 0x18u);
  }
  SetCITInfo(v4, this[11].Ptr);
  AcquireSRWLockExclusive(v1);
  GetCurrentThreadId();
  LOWORD(this[10].Ptr) = 0;
  LODWORD(this[14].Ptr) = 0;
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
