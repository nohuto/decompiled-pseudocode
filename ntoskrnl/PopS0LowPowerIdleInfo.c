/*
 * XREFs of PopS0LowPowerIdleInfo @ 0x140981530
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopNetIsDisconnectStandbyActive @ 0x140879C70 (PopNetIsDisconnectStandbyActive.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopS0LowPowerIdleInfo(__int64 a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  bool IsDisconnectStandbyActive; // al
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = PopPlatformAoAc == 0;
  v9 = 0;
  *(_QWORD *)a1 = 0LL;
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    PopAcquirePolicyLock(a1);
    IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(&v9);
    LOBYTE(v7) = *(_BYTE *)(a1 + 4);
    LOBYTE(v5) = IsDisconnectStandbyActive;
    v6 = v9;
    *(_DWORD *)a1 = v9;
    LOBYTE(v7) = (PopCsDeviceCompliance == 1) | v7 & 0xFE;
    *(_BYTE *)(a1 + 4) = v7;
    LOBYTE(v7) = (dword_140D1BB94 != 1 ? 0 : 2) | v7 & 0xFD;
    *(_BYTE *)(a1 + 4) = v7;
    LOBYTE(v7) = (dword_140D1BB98 != 1 ? 0 : 4) | v7 & 0xFB;
    *(_BYTE *)(a1 + 4) = v7;
    *(_BYTE *)(a1 + 4) = (dword_140D1BBA0 != 1 ? 0 : 8) | v7 & 0xF7;
    if ( (unsigned int)(v6 - 3) <= 1 )
      LOBYTE(v7) = IsDisconnectStandbyActive | *(_BYTE *)(a1 + 5) & 0xFE | 2;
    else
      LOBYTE(v7) = IsDisconnectStandbyActive | *(_BYTE *)(a1 + 5) & 0xFC;
    *(_BYTE *)(a1 + 5) = v7;
    PopReleasePolicyLock(v7, v6, v5);
  }
  return v1;
}
