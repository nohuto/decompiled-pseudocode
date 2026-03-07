__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !*(_DWORD *)(v1 + 1336) )
    return 1;
  if ( *(_QWORD *)(v1 + 1344) )
  {
LABEL_5:
    if ( *(_DWORD *)(v1 + 1336) && !*(_QWORD *)(v1 + 1344) )
      return v2;
    return 1;
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1) )
  {
    RIMFindMonitorForDigitizer(v1, a1, 1LL, 0LL);
    goto LABEL_5;
  }
  return 0LL;
}
