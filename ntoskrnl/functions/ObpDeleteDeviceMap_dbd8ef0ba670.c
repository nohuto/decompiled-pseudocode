void __fastcall ObpDeleteDeviceMap(char *P)
{
  void *v2; // rcx
  unsigned int v3; // edi
  _QWORD *v4; // rsi
  volatile signed __int64 *v5; // rcx
  void *v6; // rax

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x6D44624Fu);
  ObCloseHandle(*((HANDLE *)P + 31), 0);
  ObfDereferenceObject(*(PVOID *)P);
  v3 = 0;
  v4 = P + 32;
  do
  {
    if ( *v4 )
    {
      v6 = (void *)ObFastReplaceObject((volatile __int64 *)&P[8 * v3 + 32], 0LL);
      ObfDereferenceObject(v6);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x1A );
  v5 = (volatile signed __int64 *)*((_QWORD *)P + 3);
  if ( v5 )
    ObDereferenceDeviceMap(v5, 1u);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
