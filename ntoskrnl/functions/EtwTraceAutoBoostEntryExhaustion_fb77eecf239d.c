void __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  MmGetMinWsPagePriority();
  if ( !(unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0) )
  {
    v4 = *(_DWORD *)(a1 + 1232);
    v5 = *(_QWORD *)(a1 + 544);
    v11 = 0;
    v7 = v4;
    v9 = &v6;
    v6 = a2;
    v10 = 16;
    EtwTraceSiloKernelEvent(*(_QWORD *)(v5 + 2160), (__int64)&v9, 1u, 0x20000200u, 0x544u, 0x501A02u);
  }
}
