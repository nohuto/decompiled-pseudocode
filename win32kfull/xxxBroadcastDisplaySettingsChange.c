__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int128 *v5; // rbx
  __int64 result; // rax

  v5 = (__int128 *)a3;
  EtwTraceChangeDisplayModeBroadcast(0LL);
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
             0x7Eu,
             *(unsigned __int16 *)(gpsi + 6996LL),
             v5,
             1u,
             0LL,
             1,
             a4);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x1Au, 0LL, 0LL, 1u, 0LL, 1, a4);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x15u, 0LL, 0LL, 1u, 0LL, 1, a4);
  }
  return result;
}
