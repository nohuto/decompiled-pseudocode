/*
 * XREFs of ACPIDevicePowerProcessPhase4 @ 0x1C00203FC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001E5C0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C95C (ACPIDeviceCompleteRequest.c)
 */

__int64 ACPIDevicePowerProcessPhase4()
{
  __int64 *v0; // rdi
  __int64 *v1; // rcx
  __int64 *v2; // r14
  __int64 *v3; // rsi
  __int64 *v4; // rbx
  _QWORD *v5; // r15
  PVOID *v6; // rbx
  PVOID *v7; // rbp
  _QWORD *v8; // rcx
  PVOID v9; // rax
  const char *v10; // r8
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 *v14; // [rsp+80h] [rbp+8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      73,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v0 = (__int64 *)AcpiPowerNodeList;
  while ( v0 != &AcpiPowerNodeList )
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    if ( (v1[2] & 0x10000) != 0 )
    {
      if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
      {
        _InterlockedAnd64(v1 + 2, 0xFFFFFFFFFFFEFFFFuLL);
      }
      v2 = v1 + 6;
      v3 = (__int64 *)v1[6];
      v14 = v1 + 6;
      if ( v3 != v1 + 6 )
      {
        do
        {
          v4 = v3;
          v3 = (__int64 *)*v3;
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
          v5 = (_QWORD *)*(v4 - 1);
          v6 = (PVOID *)AcpiPowerPhase4List;
          if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
          {
            do
            {
              v7 = v6;
              v6 = (PVOID *)*v6;
              v8 = v7[5];
              if ( v8 == v5 )
              {
                LOBYTE(v9) = 0;
                v10 = (const char *)&unk_1C00622D0;
                v11 = (const char *)&unk_1C00622D0;
                if ( v8 )
                {
                  v9 = v7[5];
                  v12 = v8[1];
                  if ( (v12 & 0x200000000000LL) != 0 )
                  {
                    v10 = (const char *)*((_QWORD *)v9 + 76);
                    if ( (v12 & 0x400000000000LL) != 0 )
                      v11 = (const char *)*((_QWORD *)v9 + 77);
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qLqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    4u,
                    0xAu,
                    0x4Au,
                    (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
                    (char)v7,
                    33,
                    (char)v9,
                    v10,
                    v11);
                *((_DWORD *)v7 + 64) = -1072431071;
                ACPIDeviceCompleteRequest(v7);
              }
            }
            while ( v6 != &AcpiPowerPhase4List );
            v2 = v14;
          }
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
        }
        while ( v3 != v2 );
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return 0LL;
}
