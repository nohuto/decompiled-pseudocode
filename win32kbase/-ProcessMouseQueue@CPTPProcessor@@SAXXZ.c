/*
 * XREFs of ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00F35E0
 * Callers:
 *     _lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_ @ 0x1C021CD20 (_lambda_41d3d8e444f2107bdec37176a1b6496a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C00F3750 (-UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 *     SynthesizePTPMouseInput @ 0x1C00F4270 (SynthesizePTPMouseInput.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0169070 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 */

void CPTPProcessor::ProcessMouseQueue(void)
{
  int v0; // ebx
  int v1; // ecx
  int v2; // ebx
  _QWORD *v3; // rax
  bool v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  int *v9; // [rsp+60h] [rbp-A0h]
  int v10[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v11[16]; // [rsp+F0h] [rbp-10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v5, "PTPMouseOperation", 0LL);
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = 0;
  v6[0] = gptCursorAsync;
  while ( CPTPProcessor::UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v10, (struct tagPTPMOUSEEVENT *)v11, &v4) )
  {
    v0 = (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() != 0 ? 3840 : 1792;
    if ( !v10[5] && !v10[6] )
      v0 |= 8u;
    if ( v10[28] )
    {
      v9 = &v10[29];
      v1 = v10[31] != 0 ? 112 : 48;
    }
    else
    {
      v9 = 0LL;
      v1 = 64;
    }
    v2 = v1 | v0;
    InputTraceLogging::Mouse::InjectInput(4LL, *(_QWORD *)&v10[8]);
    v7 = 0LL;
    if ( v4 )
    {
      v3 = &v11[1];
      if ( *(_QWORD *)v10 != v11[0] )
        v3 = 0LL;
      v7 = v3;
    }
    v8 = *(_QWORD *)&v10[12];
    v6[1] = &v10[14];
    SynthesizePTPMouseInput(v10[0], (int)&v10[2], v10[10], v10[8], v2, (struct PTPMouseInputData *)v6);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v5);
}
