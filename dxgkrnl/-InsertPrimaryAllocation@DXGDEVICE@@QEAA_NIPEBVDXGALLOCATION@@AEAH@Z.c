/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0003164
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0177D38 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // ecx
  char v11; // bl
  unsigned int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  void *v18; // rax
  void *v19; // r12
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  void *v26; // rcx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  _BYTE v30[8]; // [rsp+60h] [rbp-48h] BYREF
  DXGPUSHLOCK *v31; // [rsp+68h] [rbp-40h]
  int v32; // [rsp+70h] [rbp-38h]

  v4 = a2;
  v7 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (DXGDEVICE *)((char *)this + 336), 0);
  DXGPUSHLOCK::AcquireExclusive(v31);
  v8 = (unsigned int)v4;
  v9 = *((unsigned int *)this + v4 + 246);
  v10 = (unsigned __int8)*((_DWORD *)this + v4 + 310);
  v11 = 0;
  v32 = 2;
  if ( (_DWORD)v9 == v10 )
  {
    v16 = v9;
    LODWORD(v9) = 2 * v9;
    if ( (unsigned int)v9 >= 0xFF )
    {
      LODWORD(v9) = 255;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      LODWORD(v9) = 4;
    }
    if ( (_DWORD)v9 == (_DWORD)v16 )
    {
      WdLogSingleEntry1(2LL, 807LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v21,
          v20,
          v22,
          0,
          0,
          -1,
          (__int64)L"Reached maximum number of primary allocation, rejecting this request",
          39,
          0,
          0,
          0,
          0);
      goto LABEL_7;
    }
    v17 = 8LL * (unsigned int)v9;
    if ( !is_mul_ok((unsigned int)v9, 8uLL) )
      v17 = -1LL;
    v18 = (void *)operator new[](v17, 1265072196LL, 256LL);
    v19 = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(6LL, (unsigned int)v9);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v24,
          v23,
          v25,
          0,
          1,
          -1,
          (__int64)L"Failed to grow device primary allocation array to %d entries",
          v9,
          0,
          0,
          0,
          0);
      goto LABEL_7;
    }
    if ( (_DWORD)v16 )
    {
      memmove(v18, *((const void **)this + v8 + 107), 8 * v16);
      v26 = (void *)*((_QWORD *)this + v8 + 107);
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
    *((_QWORD *)this + v8 + 107) = v19;
    v7 = a4;
    *((_DWORD *)this + v8 + 246) = v9;
  }
  v12 = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v13 = v12;
      if ( !*(_QWORD *)(*((_QWORD *)this + v8 + 107) + 8LL * v12) )
        break;
      if ( ++v12 >= (unsigned int)v9 )
        goto LABEL_26;
    }
    v14 = WdLogNewEntry5_WdTrace();
    v11 = 1;
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = v8;
    *(_QWORD *)(*((_QWORD *)this + v8 + 107) + 8 * v13) = a3;
    ++*((_BYTE *)this + 4 * v8 + 1240);
    *v7 = (*((_DWORD *)this + v8 + 310) >> 8) & 1;
  }
  else
  {
LABEL_26:
    WdLogSingleEntry1(1LL, 859LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v28,
        v27,
        v29,
        0,
        2,
        -1,
        (__int64)L"Can't find room in device primary allocation array",
        91,
        0,
        0,
        0,
        0);
  }
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v11;
}
