/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x140995184
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140994E6C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14059043C (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPdcUpdateDeviceCompliance(int a1)
{
  _DWORD *v1; // r9
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // r8d
  bool v6; // zf
  int *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx

  v1 = PopPdcDeviceList;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( v1 != (_DWORD *)&PopPdcDeviceList )
  {
    a1 = v1[6];
    v5 = v3;
    v3 |= 1 << a1;
    v4 |= 1 << a1;
    v6 = *((_BYTE *)v1 + 32) == 0;
    v1 = *(_DWORD **)v1;
    if ( v6 )
      v3 = v5;
  }
  PopAcquirePolicyLock(a1);
  v7 = PopCsDeviceCompliance;
  do
  {
    v8 = (unsigned int)*v7;
    v9 = v2;
    if ( ((1 << v2) & v3) != 0 )
      v10 = 1LL;
    else
      v10 = (unsigned int)-((v4 & (1 << v2)) != 0);
    if ( (_DWORD)v10 != (_DWORD)v8 )
    {
      *v7 = v10;
      PopDiagTraceDeviceComplianceUpdate(v2, v10);
    }
    ++v2;
    ++v7;
  }
  while ( v2 < 5 );
  return PopReleasePolicyLock(v9, v10, v8);
}
