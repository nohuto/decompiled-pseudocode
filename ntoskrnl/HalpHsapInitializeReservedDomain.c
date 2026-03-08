/*
 * XREFs of HalpHsapInitializeReservedDomain @ 0x14052BEA8
 * Callers:
 *     HsaProcessDeviceExceptions @ 0x14052E418 (HsaProcessDeviceExceptions.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HsaUpdateDeviceTableEntry @ 0x14052E900 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HalpHsapInitializeReservedDomain(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  unsigned int v3; // ebx
  int v5; // esi
  _DWORD *v6; // rdi
  int v7; // ecx
  int v8; // r9d
  _QWORD v10[14]; // [rsp+50h] [rbp-88h] BYREF
  int v11; // [rsp+E8h] [rbp+10h] BYREF
  int v12; // [rsp+ECh] [rbp+14h]

  v2 = *(_QWORD **)(a2 + 8);
  v3 = 0;
  v5 = a1;
  v6 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v6 + 4) == *(_DWORD *)(a1 + 160) )
    {
      memset(v10, 0, sizeof(v10));
      v7 = *((unsigned __int16 *)v6 + 6);
      LOBYTE(v8) = 1;
      LODWORD(v10[6]) = *(_DWORD *)a2;
      v10[5] = v2[2];
      v11 = v7;
      v10[0] = 0x200000001LL;
      v12 = 0;
      HsaUpdateDeviceTableEntry(v5, (unsigned int)&v11, 0, v8, (__int64)v10, 0, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
