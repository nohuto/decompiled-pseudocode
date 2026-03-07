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
