/*
 * XREFs of ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C0059D80
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DA98 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C035D334 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::EnableVmBusChannel(struct _KTHREAD **this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  struct DXGVMBUSCHANNEL *v5; // rcx
  __int64 result; // rax

  if ( this[5] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 485LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0LL,
          2,
          -1,
          L"m_VailMutex.IsOwner()",
          485LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = this[9];
  result = 3221225473LL;
  if ( v5 )
    return EnableVmBusChannel(v5, 1);
  return result;
}
