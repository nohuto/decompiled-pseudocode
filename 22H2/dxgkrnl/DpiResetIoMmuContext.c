/*
 * XREFs of DpiResetIoMmuContext @ 0x1C0057B68
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02167E4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     IoMmuDeleteTreeNode @ 0x1C0056FEC (IoMmuDeleteTreeNode.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0057754 (DpiGetIoMmuContextFromDevice.c)
 *     IoMmuDeleteIoMmuDomain @ 0x1C02D20A0 (IoMmuDeleteIoMmuDomain.c)
 */

__int64 __fastcall DpiResetIoMmuContext(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rdi
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IoMmuContextFromDevice);
  *(_DWORD *)(IoMmuContextFromDevice + 136) &= ~1u;
  KeReleaseSpinLock((PKSPIN_LOCK)IoMmuContextFromDevice, v2);
  v3 = *(_QWORD **)(IoMmuContextFromDevice + 16);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v3 )
        {
          v4 = v3;
          v3 = (_QWORD *)*v3;
          *v4 = 0LL;
        }
        if ( !v3[1] )
          break;
        v5 = v3;
        v3 = (_QWORD *)v3[1];
        v5[1] = 0LL;
      }
      v6 = v3[2];
      IoMmuDeleteTreeNode(v3, IoMmuContextFromDevice + 16);
      v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v7 )
        break;
      v3 = (_QWORD *)v7;
    }
  }
  *(_QWORD *)(IoMmuContextFromDevice + 16) = 0LL;
  return IoMmuDeleteIoMmuDomain(IoMmuContextFromDevice);
}
