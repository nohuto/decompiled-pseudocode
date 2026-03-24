/*
 * XREFs of PopFinalizeWakeInfo @ 0x140778834
 * Callers:
 *     PopTimeoutWakeTracking @ 0x14038B108 (PopTimeoutWakeTracking.c)
 *     PopHandleWakeSources @ 0x140998400 (PopHandleWakeSources.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PopFinalizeWakeInfo(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  void *v4; // rcx
  void *v5; // rcx

  KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  v2 = (__int64 **)(a1 + 24);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    if ( !*((_DWORD *)i + 4) )
    {
      v4 = (void *)i[6];
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x206D654Du);
        *(_OWORD *)(i + 5) = 0LL;
      }
      v5 = (void *)i[8];
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0x206D654Du);
        *(_OWORD *)(i + 7) = 0LL;
      }
    }
  }
}
