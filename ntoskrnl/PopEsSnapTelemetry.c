char __fastcall PopEsSnapTelemetry(__int64 a1)
{
  int v1; // ebx
  unsigned __int128 v3; // rax
  __int64 v4; // rsi
  char result; // al

  v1 = 0;
  v3 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v4 = *((_QWORD *)&v3 + 1);
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( PopEsLastStateChangeTimeStamp )
    PopTraceEsState(a1, *((_QWORD *)&v3 + 1) - PopEsLastStateChangeTimeStamp, v1 - PopEsLastBatteryCharge);
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = dword_140C3D4D0;
  result = byte_140C3D4D5;
  PopEsLastStateChangeTimeStamp = v4;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140C3D4D5;
  return result;
}
