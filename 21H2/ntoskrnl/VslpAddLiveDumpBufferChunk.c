/*
 * XREFs of VslpAddLiveDumpBufferChunk @ 0x1404FDBBC
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x1404FD758 (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslpAddLiveDumpBufferChunk(char *BaseAddress, int a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  for ( result = 0; result >= 0; result = VslpEnterIumSecureMode(2u, 55, 0, (__int64)v7) )
  {
    if ( !a2 )
      break;
    v5 = 0LL;
    do
    {
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
      --a2;
      BaseAddress += 4096;
      v7[v5 + 2] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 0xB && a2 );
    LODWORD(v7[1]) = v5;
  }
  return result;
}
