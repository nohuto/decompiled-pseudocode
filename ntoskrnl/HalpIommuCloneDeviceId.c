/*
 * XREFs of HalpIommuCloneDeviceId @ 0x14038D3A8
 * Callers:
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405154C8 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     IidGetDeviceIdBufferSize @ 0x140822DAC (IidGetDeviceIdBufferSize.c)
 *     IidCloneDeviceId @ 0x140822DFC (IidCloneDeviceId.c)
 */

__int64 __fastcall HalpIommuCloneDeviceId(void *Src, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  result = IidGetDeviceIdBufferSize(Src, &v11);
  if ( (int)result >= 0 )
  {
    v6 = (void *)HalpMmAllocCtxAlloc(v5, v11);
    *a2 = v6;
    if ( v6 )
    {
      v8 = IidCloneDeviceId(Src, v6);
      if ( v8 < 0 )
      {
        HalpMmAllocCtxFree(v7, *a2, v9, v10);
        *a2 = 0LL;
      }
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
