__int64 __fastcall IsProcessForeground(int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !gptiForeground )
    return 0LL;
  LOBYTE(v1) = a1 == ((unsigned int)PsGetThreadProcessId((PETHREAD)*gptiForeground) & 0xFFFFFFFC);
  return v1;
}
