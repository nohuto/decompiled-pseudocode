__int64 __fastcall Crashdump_Register_StartController(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // edi
  int v3; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
  *v1 |= 1u;
  v2 = 0;
  _InterlockedOr(v5, 0);
  v3 = 0;
  while ( (v1[1] & 1) != 0 )
  {
    KeStallExecutionProcessor(0xC8u);
    if ( (unsigned int)++v3 >= 0x50 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC failed to start in %u ms\n", 200 * v3 / 0x3E8u);
      return (unsigned int)-1073741630;
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: xHC successfully started in %u ms\n", 200 * v3 / 0x3E8u);
  return v2;
}
