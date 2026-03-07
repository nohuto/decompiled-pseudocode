__int64 __fastcall VslFinishStartSecureProcessor(__int64 a1, struct _MDL *a2)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v5; // ebx
  __int64 *v7[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v8[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  memset(v7, 0, 0x48uLL);
  PhysicalAddress.QuadPart = 0LL;
  LODWORD(v8[1]) = *(_DWORD *)(a1 + 36);
  if ( LODWORD(v8[1]) )
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a1 - 328));
  v8[2] = PhysicalAddress.QuadPart;
  v5 = VslpLockPagesForTransfer((__int64)v7, a2, 0x4D0u, 1, 0);
  if ( v5 >= 0 )
  {
    v8[3] = v7[0];
    v8[4] = v7[7];
    v5 = VslpEnterIumSecureMode(2u, 3, 0, (__int64)v8);
    VslpUnlockPagesForTransfer(v7);
  }
  return (unsigned int)v5;
}
