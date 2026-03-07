__int64 __fastcall PiUEventQueuePendingEvent(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // r9

  result = 0LL;
  if ( *(_DWORD *)(a1 + 128) >= 0x10000u )
    return 3221225473LL;
  v3 = *(_QWORD **)(a1 + 120);
  if ( *v3 != a1 + 112 )
    __fastfail(3u);
  *a2 = a1 + 112;
  a2[1] = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 120) = a2;
  ++*(_DWORD *)(a1 + 128);
  return result;
}
