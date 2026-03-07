__int64 __fastcall ADAPTER_RENDER::WriteVirtualFunctionConfig(__int64 a1, int a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  v3 = (__int64 *)(a1 + 1864);
  v5 = (__int64 *)(a1 + 1872);
  if ( a2 == 1 )
    v7 = *v5;
  else
    v7 = *v3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(v7 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v8 = *(_DWORD *)(a3 + 8);
  v15 = 1;
  if ( a2 != 1 )
    v5 = v3;
  v9 = *v5;
  if ( *v5
    && v8 < *(_DWORD *)(v9 + 12)
    && *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL * v8)
    && (_mm_lfence(), (v10 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL * v8)) != 0) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL))(v10, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(a3 + 8));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid virtual GPU index: %I64n",
      *(unsigned int *)(a3 + 8),
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v11;
}
