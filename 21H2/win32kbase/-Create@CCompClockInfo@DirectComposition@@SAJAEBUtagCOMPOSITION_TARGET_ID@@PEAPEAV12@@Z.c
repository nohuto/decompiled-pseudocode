/*
 * XREFs of ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C00DD278
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0213278 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x1C0083410 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1C00DD3D0 (-Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ.c)
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C0211030 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Create(
        const struct tagCOMPOSITION_TARGET_ID *a1,
        struct DirectComposition::CCompClockInfo **a2)
{
  __int64 v4; // rax
  DirectComposition::CCompClockInfo *v5; // rbx
  int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // edi

  *a2 = 0LL;
  v4 = DirectComposition::Memory::AllocateAndClear_0(0x14uLL, 1685078852, 1);
  v5 = (DirectComposition::CCompClockInfo *)v4;
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 4);
    v7 = *(_QWORD *)a1;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 12) = v6;
    *(_QWORD *)(v4 + 4) = v7;
    v9 = DirectComposition::CCompClockInfo::Initialize((DirectComposition::CCompClockInfo *)v4);
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
