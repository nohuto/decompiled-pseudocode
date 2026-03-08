/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C0015070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchResumeAdapter @ 0x1C00AD540 (VidSchResumeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C00AE170 (VidSchSuspendAdapter.c)
 */

char __fastcall VidSchiDeferredVisibilityThread(__int64 a1)
{
  __int64 v2; // r8
  char v3; // bp
  int v4; // r12d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  char result; // al
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  char v14; // [rsp+60h] [rbp-38h]

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v14 = 1;
    v12 = 4024;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v12, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)4024);
  DxgCoreInterface[14]((ADAPTER_DISPLAY *)a1, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)3);
  if ( *(_DWORD *)(a1 + 200) == 1 )
  {
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 2820);
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 2928) + 744LL);
    _InterlockedExchange((volatile __int32 *)(v6 + 2456), 0);
    if ( *(_DWORD *)(v6 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8LL * v5 + 3200) + 78784LL), 0, 3) == 3 )
        {
          if ( *(int *)(a1 + 2820) >= 3100 )
          {
            v3 = 0;
          }
          else if ( v4 >= 3000 && !v3 )
          {
            VidSchSuspendAdapter(v6, 0LL, 0LL);
            v3 = 1;
          }
          LOBYTE(v2) = 1;
          LOBYTE(v11) = v3;
          v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int))DxgCoreInterface[30])(
                 *(_QWORD *)(a1 + 2920),
                 v5,
                 v2,
                 0x2000LL,
                 v11);
          if ( v9 < 0 )
          {
            v10 = v9;
            WdLogSingleEntry3(1LL, v5, a1, v9);
            ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to enable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
              v5,
              a1,
              v10,
              0LL,
              0LL);
          }
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(v6 + 40) );
      if ( v3 )
        VidSchResumeAdapter(v6, 0LL);
    }
  }
  DxgCoreInterface[15]((ADAPTER_DISPLAY *)a1, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)3);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DxgCoreInterface[4](
      *(ADAPTER_DISPLAY **)(a1 + 16),
      (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a1);
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[80])(&v12);
  if ( v14 )
  {
    result = byte_1C00769C1;
    if ( byte_1C00769C1 < 0 )
      return McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit);
  }
  return result;
}
