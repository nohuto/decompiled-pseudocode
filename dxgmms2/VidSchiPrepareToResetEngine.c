// write access to const memory has been detected, the output may be wrong!
char __fastcall VidSchiPrepareToResetEngine(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // cl
  __int64 v10; // rcx
  char result; // al
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v3 + 44) )
    return 0;
  if ( !TdrIsEnabled() )
    return 0;
  if ( (*(_DWORD *)(v3 + 36) & 7) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  *(_DWORD *)&v12[12] = 0;
  *(_QWORD *)&v12[4] = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, v5);
  *(_DWORD *)v12 = VidSchiSchedulerNodeToDriverNode(v7, v6);
  if ( (unsigned int)ADAPTER_RENDER::DdiQueryDependentEngineGroup(
                       *(ADAPTER_RENDER **)(v3 + 8),
                       (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v12) )
    return 0;
  v8 = *(_QWORD *)&v12[8];
  v9 = v12[0];
  if ( !(*(_QWORD *)&v12[8] | (1LL << v12[0])) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 8LL, *(_QWORD *)&v12[8], 1LL << v12[0], *(unsigned int *)v12);
    __debugbreak();
  }
  VidSchiPreemptEngineNodes(v3, *(unsigned int *)&v12[4], v8 & ~(1LL << v9), a2);
  if ( VidSchIsTDRPending(v3) )
    return 0;
  v10 = *a2;
  _bittestandset64(&v10, *(unsigned int *)v12);
  result = 1;
  *a2 = v10;
  return result;
}
