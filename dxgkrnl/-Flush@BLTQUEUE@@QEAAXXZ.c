void __fastcall BLTQUEUE::Flush(BLTQUEUE *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx

  if ( *((_QWORD *)this + 76) )
  {
    v2 = *((unsigned int *)this + 214);
    if ( KeReadStateEvent((PRKEVENT)((char *)this + 544)) )
      *((_DWORD *)this + 236) |= 1u;
    *((LARGE_INTEGER *)this + 5 * v2 + 108) = KeQueryPerformanceCounter(0LL);
    *((_BYTE *)this + 573) = 1;
    BLTQUEUE::IssueCommand(this);
    *((LARGE_INTEGER *)this + 5 * v2 + 111) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 5 * v2 + 112) = v3 * KeQueryTimeIncrement();
    *((_DWORD *)this + 214) = ((_BYTE)v2 - 1) & 1;
  }
}
