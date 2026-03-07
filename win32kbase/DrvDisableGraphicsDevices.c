__int64 __fastcall DrvDisableGraphicsDevices(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL); result; result = *(_QWORD *)(result + 128) )
  {
    if ( *(_QWORD *)(result + 144) == a1 )
      *(_DWORD *)(result + 164) |= 1u;
  }
  return result;
}
