__int64 __fastcall Crashdump_Register_ResetController(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdi
  int v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = Crashdump_Register_StopController(a1);
  if ( (int)result >= 0 )
  {
    v3 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
    *v3 |= 2u;
    _InterlockedOr(v5, 0);
    v4 = 0;
    while ( (*v3 & 2) != 0 )
    {
      KeStallExecutionProcessor(0xC8u);
      if ( (unsigned int)++v4 >= 0x1388 )
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC failed to reset in %u ms\n", 200 * v4 / 0x3E8u);
        return 3221225666LL;
      }
    }
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: xHC successfully reset in %u ms\n", 200 * v4 / 0x3E8u);
    return 0LL;
  }
  return result;
}
