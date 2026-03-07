void __noreturn HalpBlkIdleLoop()
{
  _EXCEPTION_REGISTRATION_RECORD *i; // rbx
  __int64 v1; // rdi

  for ( i = KeGetPcr()->NtTib.ExceptionList; ; _InterlockedIncrement64((volatile signed __int64 *)&i[8].Handler + v1) )
  {
    v1 = ((unsigned __int64)i[141].Next >> 52) & 0xF & -(__int64)((((unsigned __int64)i[141].Next >> 52) & 0xF) < 4);
    if ( !(_DWORD)v1 )
      break;
    if ( (_DWORD)v1 == 1 )
      HalpBlkIdlePortReadHalt((unsigned __int16)i[141].Next);
    if ( (_DWORD)v1 == 2 )
      HalpBlkIdlePortRead((unsigned __int16)i[141].Next);
    else
      HalpBlkIdleMonitorMWait(&i[160], 0, (unsigned int)i[141].Next);
  }
  HalpBlkIdleHalt();
}
