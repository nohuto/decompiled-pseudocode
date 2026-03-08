/*
 * XREFs of RtlDisableXfgOnTarget @ 0x1405AF938
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405AF650 (RtlCheckXfgFailureInformation.c)
 *     MiDisableXfgOnPatchedFunctions @ 0x140640170 (MiDisableXfgOnPatchedFunctions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwSetInformationVirtualMemory @ 0x1404158B0 (ZwSetInformationVirtualMemory.c)
 */

__int64 __fastcall RtlDisableXfgOnTarget(__int64 a1)
{
  int v2; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp-1h]
  __int64 v4; // [rsp+40h] [rbp+7h]
  __int64 v5; // [rsp+48h] [rbp+Fh]
  int *v6; // [rsp+50h] [rbp+17h]
  _QWORD *v7; // [rsp+58h] [rbp+1Fh]
  __int64 v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  _QWORD v10[2]; // [rsp+70h] [rbp+37h] BYREF

  v10[1] = 16LL;
  v2 = 0;
  v10[0] = a1 & 0xFFF;
  v8 = 0LL;
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = 0LL;
  v6 = &v2;
  v4 = 4096LL;
  v7 = v10;
  v5 = 1LL;
  return ZwSetInformationVirtualMemory(-1LL, 2LL);
}
