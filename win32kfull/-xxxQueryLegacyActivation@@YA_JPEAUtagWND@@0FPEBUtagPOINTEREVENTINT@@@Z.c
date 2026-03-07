__int64 __fastcall xxxQueryLegacyActivation(
        struct tagWND *a1,
        struct tagWND *a2,
        unsigned __int16 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v5; // r15
  __int64 v7; // rdi
  __int64 v8; // xmm0_8
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  int v15; // ecx
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = 0LL;
  v5 = a3;
  v7 = 3LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 112LL) )
  {
    v8 = *(_QWORD *)(gptiCurrent + 764LL);
    v9 = *(_QWORD *)(gptiCurrent + 776LL);
    v19 = *(_DWORD *)(gptiCurrent + 772LL);
    *(_QWORD *)(gptiCurrent + 776LL) = *((_QWORD *)a4 + 5);
    v10 = *((_QWORD *)a1 + 5);
    v11 = *((_QWORD *)a4 + 5);
    v20 = v11;
    v18 = v8;
    if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 )
    {
      DPITransformationMonitor = GetDPITransformationMonitor(v11, (__int64)a1);
      PhysicalToLogicalDPIPoint(&v20, &v20, 0LL, &DPITransformationMonitor);
      LODWORD(v11) = v20;
    }
    *(_DWORD *)(gptiCurrent + 764LL) = v11;
    *(_DWORD *)(gptiCurrent + 768LL) = HIDWORD(v20);
    if ( a2 )
      v12 = *(_QWORD *)a2;
    else
      v12 = 0LL;
    _InterlockedAdd(&glSendMessage, 1u);
    v13 = xxxSendTransformableMessageTimeout(a1, 0x21u, v12, (__int128 *)(v5 | 0x2460000), 0, 0, 0LL, 1, 1);
    v14 = v18;
    *(_QWORD *)(gptiCurrent + 776LL) = v9;
    v15 = v19;
    *(_QWORD *)(gptiCurrent + 764LL) = v14;
    *(_DWORD *)(gptiCurrent + 772LL) = v15;
    if ( v13 != 3 && v13 != 4 )
      return 1LL;
  }
  return v7;
}
