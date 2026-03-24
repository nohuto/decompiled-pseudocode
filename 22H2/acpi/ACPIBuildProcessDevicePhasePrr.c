/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C00157E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015D80 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004B128 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  ULONG_PTR v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  void *v11; // rcx
  unsigned int v13; // eax

  v4 = *(_QWORD **)(a1 + 40);
  v5 = a1 + 80;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v4[51] )
  {
    if ( !v6 )
      goto LABEL_3;
    dword_1C0082908 = 0;
    pszDest = 0;
LABEL_14:
    FreeDataBuffs(v5, 1u);
    goto LABEL_3;
  }
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v13 = ACPIBuildDeviceResetPowerNode((ULONG_PTR)v4, v6);
    dword_1C0082908 = 0;
    v7 = v13;
    pszDest = 0;
    goto LABEL_14;
  }
LABEL_3:
  v8 = AMLIGetNamedChild(v4[90], 1414746719LL, a3, a4);
  v9 = v4[1];
  v4[57] = v8;
  v10 = &unk_1C00701BA;
  v11 = &unk_1C00701BA;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = (void *)v4[71];
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = (void *)v4[72];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      6,
      47,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v7,
      (char)v4,
      (__int64)v10,
      (__int64)v11);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v7;
}
