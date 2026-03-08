/*
 * XREFs of ACPIEcReadWrite @ 0x1C0083300
 * Callers:
 *     ACPIEcOtherIrpDispatch @ 0x1C00832C0 (ACPIEcOtherIrpDispatch.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcQueueEcIrp @ 0x1C0024F24 (ACPIEcQueueEcIrp.c)
 */

__int64 __fastcall ACPIEcReadWrite(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  int v7; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( *(_BYTE *)(a2 + 64) )
  {
    *(_DWORD *)(a2 + 48) = -1073741790;
    IofCompleteRequest((PIRP)a2, 0);
    return 3221225506LL;
  }
  else
  {
    *(_QWORD *)(a2 + 56) = *(unsigned int *)(v4 + 8);
    *(_DWORD *)(a2 + 48) = 259;
    *(_BYTE *)(v4 + 3) |= 1u;
    v7 = ACPIEcQueueEcIrp(
           v5,
           (*(_BYTE *)v4 != 3) + 0x80,
           *(_QWORD *)(v4 + 24),
           *(_DWORD *)(v4 + 8),
           *(_QWORD *)(a2 + 24),
           (__int64)ACPIEcReadWriteCompletion,
           a2);
    if ( v7 < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = v7;
      IofCompleteRequest((PIRP)a2, 0);
    }
    return 259LL;
  }
}
