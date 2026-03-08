/*
 * XREFs of ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C000831C
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 * Callees:
 *     ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1C0008398 (-Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C0247E50 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Create(
        const struct tagCOMPOSITION_TARGET_ID *a1,
        struct DirectComposition::CCompClockInfo **a2)
{
  char *QuotaZInit; // rax
  DirectComposition::CCompClockInfo *v5; // rbx
  int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // edi

  *a2 = 0LL;
  QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         a1,
                         (unsigned __int64)a2,
                         0x14uLL,
                         0x64704344u);
  v5 = (DirectComposition::CCompClockInfo *)QuotaZInit;
  if ( QuotaZInit )
  {
    v6 = *((_DWORD *)a1 + 4);
    v7 = *(_QWORD *)a1;
    *((_DWORD *)QuotaZInit + 4) = 0;
    *((_DWORD *)QuotaZInit + 3) = v6;
    *(_QWORD *)(QuotaZInit + 4) = v7;
    v9 = DirectComposition::CCompClockInfo::Initialize((DirectComposition::CCompClockInfo *)QuotaZInit);
    if ( v9 < 0 )
    {
      DirectComposition::CCompClockInfo::`scalar deleting destructor'(v5, v8);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v5);
      *a2 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
