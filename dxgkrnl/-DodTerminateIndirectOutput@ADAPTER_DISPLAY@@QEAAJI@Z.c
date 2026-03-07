__int64 __fastcall ADAPTER_DISPLAY::DodTerminateIndirectOutput(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(_QWORD); // rax

  if ( !*((_QWORD *)this + 56) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 24) )
  {
    a2 = (unsigned int)a2;
LABEL_5:
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  v3 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v3 + 436) & 0x100) == 0 )
  {
    a2 = v3;
    goto LABEL_5;
  }
  v4 = *(unsigned int (__fastcall **)(_QWORD))(v3 + 2176);
  if ( !v4 )
    return 3221225659LL;
  if ( v4(*(_QWORD *)(v3 + 2112)) == -1073741637 )
    DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x90u);
  return 0LL;
}
