void __fastcall ACPIEcLogError(__int64 a1, int a2)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // r9
  unsigned int v7; // r8d
  unsigned __int8 v8; // dl
  __int64 v9; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, 0xF0u);
  v5 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0xF0uLL);
    v5[3] = a2;
    v6 = v5 + 11;
    v7 = 56;
    *((_WORD *)v5 + 1) = 192;
    v5[10] = *(_DWORD *)(a1 + 512);
    v8 = *(_BYTE *)(a1 + 505);
    do
    {
      v9 = v8;
      v8 = (v8 - 1) & 0x1F;
      *v6 = *(_DWORD *)(a1 + 4 * v9 + 648);
      if ( v8 == *(_BYTE *)(a1 + 505) )
        break;
      ++v6;
      v7 += 4;
    }
    while ( v7 <= 0xF0 );
    IoWriteErrorLogEntry(v5);
  }
}
