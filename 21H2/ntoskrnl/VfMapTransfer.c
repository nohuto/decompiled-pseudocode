/*
 * XREFs of VfMapTransfer @ 0x1409CD870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1409CAE94 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409CB060 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CB16C (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x1409CEB2C (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x1409CEC54 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x1409CF914 (ViGetMapRegisterFile.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x1409D0094 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x1409D0A00 (ViSwap.c)
 */

__int64 VfMapTransfer(__int64 a1, ...)
{
  struct _MDL *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 AdapterInformationInternal; // rax
  char v7; // r13
  __int64 v8; // rbp
  unsigned int *v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 MapRegisterFile; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  int Response; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *RealDmaOperation)(__int64, struct _MDL *, __int64, __int64, unsigned int *, int); // [rsp+40h] [rbp-48h]
  struct _MDL *v20; // [rsp+98h] [rbp+10h] BYREF
  va_list va; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF
  va_list va1; // [rsp+A0h] [rbp+18h]
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF
  va_list va2; // [rsp+A8h] [rbp+20h]
  unsigned int *v26; // [rsp+B0h] [rbp+28h]
  __int64 v27; // [rsp+B8h] [rbp+30h]
  va_list va3; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v20 = va_arg(va1, struct _MDL *);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v26 = va_arg(va3, unsigned int *);
  v27 = va_arg(va3, _QWORD);
  v2 = v20;
  v3 = v24;
  v4 = v22;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, struct _MDL *, __int64, __int64, unsigned int *, int))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v7 = v27;
  v8 = AdapterInformationInternal;
  v9 = v26;
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED((ULONG_PTR)v2);
    ViCheckAdapterBuffers(v8);
    if ( *(_DWORD *)(v8 + 192) == 3 )
    {
      v10 = ViCheckMdlLength(v2, 0LL, *v9);
      if ( v10 )
      {
        v11 = v10;
        ViHalPreprocessOptions(
          byte_140C12EF8,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v10,
          0LL,
          0LL);
        VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140C12EF8);
      }
    }
    if ( v4 == -559026163 )
    {
      v4 = 0LL;
    }
    else
    {
      MapRegisterFile = ViGetMapRegisterFile(v4);
      v13 = MapRegisterFile;
      if ( MapRegisterFile )
      {
        v14 = ViMapDoubleBuffer(MapRegisterFile, v2, v7);
        if ( v14
          && (*v9 = v14, v15 = ViSwap((__int64 *)va1, (struct _MDL **)va, (__int64 *)va2), v3 = v24, v2 = v20, v15) )
        {
          v4 = v22;
        }
        else
        {
          v4 = *(_QWORD *)(v13 + 48);
        }
      }
    }
  }
  LOBYTE(Response) = v7;
  v16 = RealDmaOperation(a1, v2, v4, v3, v9, Response);
  if ( v8 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(v8, *v9, 0);
  return v16;
}
