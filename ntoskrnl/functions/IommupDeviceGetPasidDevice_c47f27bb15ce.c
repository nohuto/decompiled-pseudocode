char __fastcall IommupDeviceGetPasidDevice(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  volatile signed __int64 *v4; // rsi
  char v6; // di
  _QWORD *v9; // rbx
  _QWORD *i; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  v4 = (volatile signed __int64 *)(a1 + 376);
  v6 = 0;
  *a4 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 376, 0LL);
  v9 = (_QWORD *)(a1 + 360);
  for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
  {
    if ( !*((_DWORD *)i + 12) )
    {
      if ( a3 )
      {
        v11 = (_QWORD *)*i;
        if ( *(_QWORD **)(*i + 8LL) != i || (v12 = (_QWORD *)i[1], (_QWORD *)*v12 != i) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
      }
      v6 = 1;
      *a4 = i;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v6;
}
