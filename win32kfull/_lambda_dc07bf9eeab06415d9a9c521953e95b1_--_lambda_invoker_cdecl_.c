bool __fastcall lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  struct tagWND *v4; // rcx
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  if ( gpqForegroundPrev )
  {
    if ( IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 136LL)) )
    {
      v4 = *(struct tagWND **)(gpqForegroundPrev + 136LL);
      v5 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v5 + 20) & 0x20) == 0
        && (*(_BYTE *)(v5 + 31) & 0x20) == 0
        && !(unsigned int)SkipWindowOnMonitor(v4) )
      {
        *((_QWORD *)&v6 + 1) = 4LL;
        *(_QWORD *)&v6 = *(_QWORD *)(gpqForegroundPrev + 136LL);
        *a2 = v6;
      }
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
