__int64 __fastcall Crashdump_Endpoint_EventRingCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // r8d
  unsigned int v6; // ecx

  *a3 = 1;
  if ( *(_BYTE *)(a2 + 11) != 1 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb was not successful Error=%x\n", *(unsigned __int8 *)(a2 + 11));
    return (unsigned int)-1073741823;
  }
  v5 = *(_DWORD *)(a2 + 12);
  v6 = 0;
  if ( (v5 & 0xFC00) == 0x8000 && (v5 & 4) != 0 )
  {
    if ( *(_QWORD *)a2 != *(_QWORD *)(a1 + 168) )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb was not the one we were looking for.\n");
      return (unsigned int)-1073741823;
    }
    *(_OWORD *)(a1 + 184) = *(_OWORD *)a2;
    *a3 = 0;
  }
  return v6;
}
