/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C01FDA1C
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01FC13C (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C01FD8C8 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C03CAB00 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(DXGMONITOR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  char *v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+38h] [rbp-31h]
  __int64 v18; // [rsp+40h] [rbp-29h]
  unsigned int *v19; // [rsp+48h] [rbp-21h]
  int v20; // [rsp+50h] [rbp-19h]
  unsigned int *v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+78h] [rbp+Fh]
  __int128 v26; // [rsp+88h] [rbp+1Fh]
  __int64 v27; // [rsp+98h] [rbp+2Fh]
  unsigned int v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = (char *)this + 800;
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v10 = *(_QWORD *)v4;
    v16 = 0LL;
    v23 = 0LL;
    v24 = 0;
    v18 = v10;
    v19 = &v28;
    v21 = &v28;
    v28 = v9;
    v27 = 0LL;
    v17 = 288;
    v20 = 67108868;
    v22 = 4;
    v25 = 0LL;
    v26 = 0LL;
    v11 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v16, 0LL, 0LL);
    if ( v11 < 0 )
    {
      v14 = *((unsigned int *)this + 45);
      v15 = v5;
      v13 = v11;
      goto LABEL_11;
    }
    if ( !(*((unsigned __int8 (__fastcall **)(char *, _QWORD))v4 + 2))((char *)this + *((int *)v4 + 6), v28) )
    {
      v13 = *((unsigned int *)this + 45);
      v14 = v5;
      v15 = v28;
LABEL_11:
      WdLogSingleEntry3(2LL, v15, v14, v13);
      goto LABEL_5;
    }
    if ( *(_DWORD *)((char *)this + *((int *)v4 + 3)) != v28 )
    {
      WdLogSingleEntry3(7LL, v28, v5, *((unsigned int *)this + 45));
      *(_DWORD *)((char *)this + *((int *)v4 + 3)) = v28;
      if ( a3 )
        DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
    }
LABEL_5:
    ++v3;
    ++v5;
    v4 += 32;
  }
  while ( v3 < 3 );
  return 0LL;
}
