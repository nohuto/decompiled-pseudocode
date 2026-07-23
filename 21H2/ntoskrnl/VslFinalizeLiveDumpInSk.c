/*
 * XREFs of VslFinalizeLiveDumpInSk @ 0x1404FC1D8
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1409AC894 (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslFinalizeLiveDumpInSk(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v10; // ebx
  _QWORD v12[14]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v13[112]; // [rsp+90h] [rbp-A8h] BYREF

  memset(v12, 0, 0x68uLL);
  v6 = *(char **)(a3 + 32);
  v7 = *(_DWORD *)(a3 + 8) >> 12;
  LODWORD(v12[1]) = v7;
  if ( ((unsigned __int16)v6 & 0xFFF) != 0 || v6 != *(char **)a3 || (*(_DWORD *)(a3 + 40) & 0xFFF) != 0 || v7 > 0xB )
  {
    v10 = -1073741811;
  }
  else
  {
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v6);
        v6 += 4096;
        v12[v8 + 2] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < LODWORD(v12[1]) );
    }
    v10 = VslpEnterIumSecureMode(2u, 57, 0, (__int64)v12);
    if ( v10 < 0 )
      goto LABEL_11;
    *a1 = v12[2];
    *a2 = v12[3];
    *(_DWORD *)(a3 + 40) = v12[4];
  }
  if ( v10 < 0 )
  {
LABEL_11:
    memset(v13, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 58, 0, (__int64)v13);
  }
  return (unsigned int)v10;
}
