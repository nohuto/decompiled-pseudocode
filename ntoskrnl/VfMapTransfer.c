__int64 VfMapTransfer(int a1, ...)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  struct _MDL *v4; // rsi
  __int64 RealDmaAdapter; // r13
  __int64 AdapterInformationInternal; // rax
  char v8; // r12
  __int64 v9; // rbp
  unsigned int *v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 MapRegisterFile; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  int Response; // [rsp+28h] [rbp-50h]
  struct _MDL *v20; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF
  va_list va2; // [rsp+98h] [rbp+20h]
  unsigned int *v26; // [rsp+A0h] [rbp+28h]
  __int64 v27; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

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
  v2 = v24;
  v3 = v22;
  v4 = v20;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = v27;
  v9 = AdapterInformationInternal;
  v10 = v26;
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED((ULONG_PTR)v4);
    ViCheckAdapterBuffers(v9);
    if ( *(_DWORD *)(v9 + 224) == 3 )
    {
      v11 = ViCheckMdlLength(v4, 0LL, *v10);
      if ( v11 )
      {
        v12 = v11;
        ViHalPreprocessOptions(
          byte_140C0DD40,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v11,
          0LL,
          0LL);
        VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140C0DD40);
      }
    }
    if ( v3 == -559026163 )
    {
      v3 = 0LL;
    }
    else
    {
      MapRegisterFile = ViGetMapRegisterFile(v3);
      v14 = MapRegisterFile;
      if ( MapRegisterFile )
      {
        v15 = ViMapDoubleBuffer(MapRegisterFile, v4, v8);
        if ( v15
          && (*v10 = v15, v16 = ViSwap((__int64 *)va1, (struct _MDL **)va, (__int64 *)va2), v2 = v24, v4 = v20, v16) )
        {
          v3 = v22;
        }
        else
        {
          v3 = *(_QWORD *)(v14 + 48);
        }
      }
    }
  }
  LOBYTE(Response) = v8;
  v17 = (*(__int64 (__fastcall **)(__int64, struct _MDL *, __int64, __int64, unsigned int *, int))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                                 + 64LL))(
          RealDmaAdapter,
          v4,
          v3,
          v2,
          v10,
          Response);
  if ( v9 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(v9, *v10, 0);
  return v17;
}
