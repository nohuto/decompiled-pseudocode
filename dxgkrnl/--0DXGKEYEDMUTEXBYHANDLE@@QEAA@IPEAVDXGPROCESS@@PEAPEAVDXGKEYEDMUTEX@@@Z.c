/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0057808
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C0349D0C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C034CA20 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C034E9D0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C034EC90 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053210 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGKEYEDMUTEX **a4)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  DXGKEYEDMUTEX *v15; // rcx
  _BYTE v16[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)a3 + 74)
    || (v9 = *((_QWORD *)a3 + 35), ((a2 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60))
    || (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) != 0
    || (v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F) == 0 )
  {
LABEL_9:
    *(_QWORD *)this = 0LL;
    goto LABEL_10;
  }
  if ( v10 != 9 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
        0LL,
        0,
        -1,
        L"Handle type mismatch",
        267LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_9;
  }
  v15 = *(DXGKEYEDMUTEX **)(v9 + 16LL * v8);
  *(_QWORD *)this = v15;
  if ( v15 )
    DXGKEYEDMUTEX::AcquireReference(v15);
LABEL_10:
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
