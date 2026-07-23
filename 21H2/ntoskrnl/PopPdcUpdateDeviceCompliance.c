/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x1408F02DC
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x1408EFF84 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405718B0 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPdcUpdateDeviceCompliance(int a1)
{
  _DWORD *v1; // r8
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // edx
  bool v6; // zf
  int *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx

  v1 = PopPdcDeviceList;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( v1 != (_DWORD *)&PopPdcDeviceList )
  {
    a1 = v1[6];
    v5 = v3;
    v4 |= 1 << a1;
    v3 |= 1 << a1;
    v6 = *((_BYTE *)v1 + 32) == 0;
    v1 = *(_DWORD **)v1;
    if ( v6 )
      v3 = v5;
  }
  PopAcquirePolicyLock(a1);
  v7 = PopCsDeviceCompliance;
  do
  {
    v8 = v2;
    if ( ((1 << v2) & v3) != 0 )
      v9 = 1LL;
    else
      v9 = (unsigned int)-((v4 & (1 << v2)) != 0);
    if ( (_DWORD)v9 != *v7 )
    {
      *v7 = v9;
      PopDiagTraceDeviceComplianceUpdate(v2, v9);
    }
    ++v2;
    ++v7;
  }
  while ( v2 < 5 );
  return PopReleasePolicyLock(v8, v9);
}
