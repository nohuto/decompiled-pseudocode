__int64 __fastcall ViDeadlockAddResource(
        ULONG_PTR a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  v6 = (int)a2;
  if ( a2 > 8 )
    return 0LL;
  v10 = 0;
  v11 = ViDeadlockSearchResource(a1, a6);
  if ( v11 )
  {
    if ( (ViDeadlockResourceTypeInfo[v6] & 8) == 0 )
    {
      ViDeadlockPreprocessOptions(byte_140C0DD78, "Re-initializing active lock 0x%p.", (const void *)0x1005);
      VfReportIssueWithOptions(0xC4u, 0x1005uLL, a1, v11, 0LL, byte_140C0DD78);
    }
    if ( *(_QWORD *)(v11 + 16) )
    {
      ViDeadlockPreprocessOptions(byte_140C0DD68, "Re-initializing active lock 0x%p.", (const void *)0x1005);
      VfReportIssueWithOptions(0xC4u, 0x1005uLL, a1, v11, 1uLL, byte_140C0DD68);
    }
    ViDeadlockRemoveResource(v11);
    *a5 = v11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((void *)a1 >= CurrentThread->InitialStack || (void *volatile)a1 <= CurrentThread->StackLimit) && a3 )
  {
    v13 = ViDeadlockGlobals;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    *(_QWORD *)(a3 + 120) = 0LL;
    *(_QWORD *)(a3 + 184) = 0LL;
    *(_DWORD *)(a3 + 4) = 0;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_DWORD *)a3 = v6;
    *(_QWORD *)(a3 + 8) = a1;
    *(_OWORD *)(a3 + 56) = *a4;
    v14 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
    *(_OWORD *)(a3 + 72) = a4[1];
    *(_OWORD *)(a3 + 88) = a4[2];
    *(_OWORD *)(a3 + 104) = a4[3];
    v15 = (_QWORD *)(a3 + 40);
    v16 = (a1 >> 12) - 1023 * ((v14 + (((a1 >> 12) - v14) >> 1)) >> 9);
    v17 = v13[2] + 16 * v16;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      __fastfail(3u);
    v19 = (unsigned int)ViDeadlockResourceTypeSizeInfo[v6];
    *v15 = v18;
    v15[1] = v17;
    *(_QWORD *)(v18 + 8) = v15;
    *(_QWORD *)v17 = v15;
    VfUtilAddressRangeAdd(&v13[2 * v16 + 4], a1, v19);
    ++*(_QWORD *)(v20 + 24);
    return 1;
  }
  return v10;
}
