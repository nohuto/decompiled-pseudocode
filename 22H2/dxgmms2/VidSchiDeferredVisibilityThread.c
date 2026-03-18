/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C00012D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     VidSchSuspendAdapter @ 0x1C0086510 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x1C0088380 (VidSchResumeAdapter.c)
 */

char __fastcall VidSchiDeferredVisibilityThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  char v5; // bp
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rsi
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-78h]
  unsigned int v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  char v17; // [rsp+60h] [rbp-38h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v17 = 1;
    v15 = 4024;
    if ( byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4024LL);
  }
  else
  {
    v17 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v15, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)4024);
  DxgCoreInterface[14]((ADAPTER_DISPLAY *)a1, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)3);
  if ( *(_DWORD *)(a1 + 200) == 1 )
  {
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 2820);
    v7 = 0;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 2928) + 744LL);
    _InterlockedExchange((volatile __int32 *)(v8 + 2456), 0);
    if ( *(_DWORD *)(v8 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v8 + 8LL * v7 + 3200) + 78784LL), 0, 3) == 3 )
        {
          if ( *(int *)(a1 + 2820) >= 3100 )
          {
            v5 = 0;
          }
          else if ( v6 >= 3000 && !v5 )
          {
            VidSchSuspendAdapter(v8, 0LL, 0LL);
            v5 = 1;
          }
          LOBYTE(v4) = 1;
          LOBYTE(v14) = v5;
          v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int))DxgCoreInterface[30])(
                  *(_QWORD *)(a1 + 2920),
                  v7,
                  v4,
                  0x2000LL,
                  v14);
          if ( v12 < 0 )
          {
            v13 = v12;
            WdLogSingleEntry3(1LL, v7, a1, v12);
            ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to enable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
              v7,
              a1,
              v13,
              0LL,
              0LL);
          }
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v8 + 40) );
      if ( v5 )
        VidSchResumeAdapter(v8, 0LL);
    }
  }
  DxgCoreInterface[15]((ADAPTER_DISPLAY *)a1, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)3);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DxgCoreInterface[4](
      *(ADAPTER_DISPLAY **)(a1 + 16),
      (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a1);
  result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[80])(&v15);
  if ( v17 )
  {
    result = byte_1C0076981;
    if ( byte_1C0076981 < 0 )
      return McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v15);
  }
  return result;
}
