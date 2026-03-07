char __fastcall ProcessMultipleCommands(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rbx

  v3 = a2;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_WORD *)(SrbExtension + 4244) )
  {
    *(_BYTE *)(v5 + 3) = 4;
    return SrbExtension;
  }
  v6 = *(_DWORD *)(a1 + 32);
  if ( (v6 & 0x10) != 0 )
  {
    LOBYTE(SrbExtension) = 14;
    goto LABEL_7;
  }
  if ( (v6 & 0x100) != 0 )
  {
    LOBYTE(SrbExtension) = 2;
LABEL_7:
    *(_BYTE *)(v5 + 3) = SrbExtension;
    if ( v3 )
    {
      do
      {
        v7 = *(_QWORD *)(v3 + 40);
        LOBYTE(SrbExtension) = (unsigned __int8)NVMeRequestComplete(a1, v3);
        v3 = v7;
      }
      while ( v7 );
    }
    return SrbExtension;
  }
  LOBYTE(SrbExtension) = ProcessMultipleCommandsInSpecificQueue(a1, v5, a1 + 344, *(unsigned __int16 *)(a1 + 332));
  if ( !(_BYTE)SrbExtension )
  {
    while ( v3 )
    {
      if ( *(_BYTE *)(v3 + 3) == 5 )
        LOBYTE(SrbExtension) = ProcessCommand(a1, v3);
      v3 = *(_QWORD *)(v3 + 40);
    }
  }
  return SrbExtension;
}
