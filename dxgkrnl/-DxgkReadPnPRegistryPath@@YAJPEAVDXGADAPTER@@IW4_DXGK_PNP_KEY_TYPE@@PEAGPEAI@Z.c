__int64 __fastcall DxgkReadPnPRegistryPath(__int64 a1, unsigned int a2, int a3, void *a4, ULONG64 a5)
{
  __int64 v6; // r15
  unsigned int v7; // eax
  _DWORD *v9; // rbx
  unsigned int *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  int PnpRegistryKeyName; // eax
  unsigned int v14; // edi
  unsigned __int16 *v15; // rdx
  unsigned int v16; // ecx
  const void *v17; // rdx
  unsigned __int16 *v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  if ( *(int *)(a1 + 2552) < 0x2000 )
    v7 = 1;
  else
    v7 = *(_DWORD *)(a1 + 288);
  if ( a2 >= v7 )
  {
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  v9 = (_DWORD *)a5;
  v10 = (unsigned int *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (unsigned int *)MmUserProbeAddress;
  v11 = *v10;
  v12 = *(_QWORD *)(344LL * a2 + *(_QWORD *)(a1 + 2808) + 8);
  v18 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v12, a3, (__int64 *)&v18);
  v14 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName < 0 )
  {
    WdLogSingleEntry2(3LL, v6, PnpRegistryKeyName);
    return v14;
  }
  v15 = v18;
  v16 = (*v18 >> 1) + 1;
  if ( (unsigned __int64)v9 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = v16;
  if ( a4 )
  {
    if ( (unsigned int)v11 < v16 )
    {
      WdLogSingleEntry2(3LL, v11, v16);
      return 3221225507LL;
    }
    v17 = (const void *)*((_QWORD *)v15 + 1);
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (void *)MmUserProbeAddress;
    memmove(a4, v17, 2LL * v16);
  }
  return 0LL;
}
