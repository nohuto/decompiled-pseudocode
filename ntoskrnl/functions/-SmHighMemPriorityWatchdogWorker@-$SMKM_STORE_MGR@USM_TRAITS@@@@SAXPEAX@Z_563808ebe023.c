__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  struct _EX_RUNDOWN_REF *v9; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v12[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]

  v2 = a1 - 1816;
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  if ( (int)SmQuerySystemInformation(a1 - 1816, a2, v12) >= 0 )
  {
    v4 = 128000LL;
    v5 = 0;
    if ( *(_QWORD *)&v12[0] <= 0x51400000uLL )
      v4 = 15360LL;
    v6 = 3 * (*(_QWORD *)&v12[0] / 0x14000uLL);
    if ( v6 >= v4 )
      v6 = v4;
    v11 = v6;
    do
    {
      v7 = SmKmStoreReferenceEx(v2, v5);
      v8 = v7;
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 6023) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v7, &v11);
        v9 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v2, *(_DWORD *)(v8 + 6016) & 0x3FF);
        ExReleaseRundownProtection_0(v9 + 1);
      }
      ++v5;
    }
    while ( v5 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 1864))(v2, 0LL, 9LL);
}
