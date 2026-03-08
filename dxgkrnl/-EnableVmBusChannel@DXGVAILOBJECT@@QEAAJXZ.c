/*
 * XREFs of ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0059E28
 * Callers:
 *     NtDxgkVailConnect @ 0x1C035FEE0 (NtDxgkVailConnect.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C035D334 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::EnableVmBusChannel(struct _KTHREAD **this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  struct DXGVMBUSCHANNEL *v5; // rcx
  __int64 result; // rax

  if ( this[8] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 339LL);
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
          339LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = this[14];
  result = 3221225473LL;
  if ( v5 )
    return EnableVmBusChannel(v5, 0);
  return result;
}
