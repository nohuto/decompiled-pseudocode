LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 312) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1336) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1304), 0, 0);
  }
  return result;
}
