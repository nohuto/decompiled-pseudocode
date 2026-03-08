/*
 * XREFs of PipHardwareConfigGetIndex @ 0x14081B840
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x14081B6E8 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetIndex(__int64 a1, void *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0;
  Handle = 0LL;
  if ( a2 )
  {
    v3 = PipHardwareConfigOpenKey(a1, 0x20019u, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v5) = 4;
      v3 = RegRtlQueryValue(Handle, L"Id", &v6, a2, (unsigned int *)&v5);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
