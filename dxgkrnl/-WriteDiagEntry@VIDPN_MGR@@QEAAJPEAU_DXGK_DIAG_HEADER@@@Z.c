__int64 __fastcall VIDPN_MGR::WriteDiagEntry(struct _KTHREAD **this, struct _DXGK_DIAG_HEADER *a2)
{
  _DWORD *v2; // rbx
  __int64 CurrentProcess; // rax
  __int128 v6; // xmm0
  __int64 v7; // rbx

  v2 = (_DWORD *)((char *)a2 + 4);
  if ( !a2 || !*v2 )
    WdLogSingleEntry0(1LL);
  if ( a2 && *v2 >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    v6 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_DWORD *)a2 + 9) &= ~0x80000000;
    *((_OWORD *)a2 + 1) = v6;
    *((_DWORD *)a2 + 9) ^= (*((_DWORD *)a2 + 9) ^ PsGetCurrentProcessSessionId()) & 0x7FFFFFFF;
    *((_DWORD *)a2 + 8) = (unsigned int)PsGetCurrentThreadId();
    v7 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v7 * KeQueryTimeIncrement();
    if ( this[70] )
    {
      if ( this[8] != KeGetCurrentThread() )
        WdLogSingleEntry0(1LL);
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(this[70], a2);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, this);
      return 3221225860LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225485LL;
  }
}
