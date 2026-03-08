/*
 * XREFs of VslFinalizeSecureImageHash @ 0x14054B800
 * Callers:
 *     <none>
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslFinalizeSecureImageHash(__int64 a1, __int64 a2)
{
  _BYTE MemoryDescriptorList[64]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v6[14]; // [rsp+60h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  *(_WORD *)&MemoryDescriptorList[8] = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4167) >> 12) + 6);
  *(_WORD *)&MemoryDescriptorList[10] = 0;
  *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
  *(_DWORD *)&MemoryDescriptorList[40] = 72;
  MiProbeAndLockPages(MemoryDescriptorList, 0, 1);
  v6[1] = a1;
  v6[2] = a2;
  *(_OWORD *)&v6[3] = *(_OWORD *)&MemoryDescriptorList[48];
  LODWORD(a2) = VslpEnterIumSecureMode(2u, 26, 0, (__int64)v6);
  MmUnlockPages((PMDL)MemoryDescriptorList);
  return (unsigned int)a2;
}
