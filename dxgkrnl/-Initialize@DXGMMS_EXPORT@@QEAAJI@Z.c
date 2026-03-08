/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0214D04
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C0214B78 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C0214E94 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  char *v2; // rdi
  const WCHAR *v5; // rdx
  unsigned int i; // esi
  NTSTATUS v7; // ecx
  void *ExportAddress; // rax
  int v9; // eax
  __int64 v10; // rsi
  void *v11; // r14
  void *v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  __int64 v18; // rbx
  const wchar_t *v19; // r9
  int v20; // edx

  v2 = (char *)this + 8;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v18 = -1073741811LL;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v19 = L"Unsupported DXGMMS version requested, returning 0x%I64x";
      goto LABEL_32;
    }
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 8), v5);
  for ( i = 0; ; ++i )
  {
    v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x38uLL);
    if ( v7 >= 0 || v7 == -1073741554 )
      break;
    if ( i >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 27LL, v7, i, 0LL);
    }
    else
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
        "We broke into the  debugger to allow a chance for debugging this issue.\n"
        "Another attempt to load it will be made now.\n",
        v7);
      __debugbreak();
    }
  }
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "DriverUnload", 0xDu);
  *((_QWORD *)this + 10) = ExportAddress;
  if ( ExportAddress )
  {
    v9 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))this + 5))(0LL, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)(a2 + 1), v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to load dxgmms%u.sys. Status=0x%.8x",
        (unsigned int)(a2 + 1),
        v10,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v10;
    }
    *(_BYTE *)this = 1;
    v11 = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
    v12 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
    v13 = v12;
    if ( v11 && v12 )
    {
      v14 = operator new[](0x10uLL, 0x4B677844u, 64LL);
      v15 = a2 + 1;
      if ( v14 )
      {
        *(_DWORD *)v14 = v15;
        *(_QWORD *)(v14 + 8) = v11;
      }
      else
      {
        v14 = 0LL;
      }
      *((_QWORD *)this + 9) = v14;
      if ( v14 )
      {
        v16 = operator new[](0x10uLL, 0x4B677844u, 64LL);
        if ( v16 )
        {
          *(_DWORD *)v16 = v15;
          *(_QWORD *)(v16 + 8) = v13;
        }
        else
        {
          v16 = 0LL;
        }
        *((_QWORD *)this + 8) = v16;
        if ( *((_QWORD *)this + 9) )
          return 0LL;
        v18 = -1073741801LL;
        WdLogSingleEntry1(6LL, -1073741801LL);
        v19 = L"Failed to allocate VIDSCH_EXPORT returning 0x%I64x";
      }
      else
      {
        v18 = -1073741801LL;
        WdLogSingleEntry1(6LL, -1073741801LL);
        v19 = L"Failed to allocate VIDMM_EXPORT returning 0x%I64x";
      }
      v20 = 262145;
      goto LABEL_33;
    }
    v18 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v19 = L"Required export can't be found in dxgmms.sys, returning 0x%I64x";
  }
  else
  {
    v18 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v19 = L"Cannot find DriverUnload export in dxgmms.sys, returning 0x%I64x";
  }
LABEL_32:
  v20 = 0x40000;
LABEL_33:
  DxgkLogInternalTriageEvent(0LL, v20, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v18;
}
