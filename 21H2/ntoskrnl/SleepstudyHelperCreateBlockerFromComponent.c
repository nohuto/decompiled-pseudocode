/*
 * XREFs of SleepstudyHelperCreateBlockerFromComponent @ 0x1408FB0C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140616FC0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408FB280 (SshpGenerateDeviceFriendlyName.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromComponent(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        int a4,
        _QWORD *a5)
{
  _QWORD *v5; // rbx
  _QWORD *PoolWithTag; // rax
  int DeviceFriendlyName; // edi
  __int128 v12; // xmm0

  v5 = 0LL;
  if ( a1 && a2 && a3 && a5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, *(_DWORD *)(a1 + 24));
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x50uLL);
    *v5 = a1;
    v12 = *a2;
    v5[4] = a3;
    *((_DWORD *)v5 + 11) = a4;
    *((_OWORD *)v5 + 1) = v12;
    *((_DWORD *)v5 + 10) = 52428;
    *((_BYTE *)v5 + 72) = 1;
    DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a3);
    if ( DeviceFriendlyName >= 0 )
    {
      *a5 = v5;
      return 0;
    }
  }
  else
  {
    DeviceFriendlyName = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  return (unsigned int)DeviceFriendlyName;
}
