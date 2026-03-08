/*
 * XREFs of CleanupRemoteHandles @ 0x1C00CFCE0
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall CleanupRemoteHandles(_QWORD *a1))(void)
{
  char *v2; // rdx
  __int64 v3; // rcx
  __int64 (*result)(void); // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v2 = (char *)a1[7];
  if ( v2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    a1[7] = 0LL;
  }
  if ( gThinwireFileObject )
  {
    ObfDereferenceObject(gThinwireFileObject);
    gThinwireFileObject = 0LL;
  }
  if ( gVideoFileObject )
  {
    ObfDereferenceObject(gVideoFileObject);
    gVideoFileObject = 0LL;
  }
  if ( gpRemoteBeepDevice )
  {
    ObfDereferenceObject(gpRemoteBeepDevice);
    gpRemoteBeepDevice = 0LL;
  }
  if ( gRemoteMouseChannelHandlePair )
    ZwClose(gRemoteMouseChannelHandlePair);
  if ( *(&gRemoteMouseChannelHandlePair + 1) )
    ZwClose(*(&gRemoteMouseChannelHandlePair + 1));
  *(_OWORD *)&gRemoteMouseChannelHandlePair = 0LL;
  if ( gRemoteKeyboardChannelHandlePair )
    ZwClose(gRemoteKeyboardChannelHandlePair);
  v3 = (__int64)*(&gRemoteKeyboardChannelHandlePair + 1);
  if ( *(&gRemoteKeyboardChannelHandlePair + 1) )
    ZwClose(*(&gRemoteKeyboardChannelHandlePair + 1));
  result = (__int64 (*)(void))qword_1C02D7438;
  *(_OWORD *)&gRemoteKeyboardChannelHandlePair = 0LL;
  if ( qword_1C02D7438 )
  {
    result = (__int64 (*)(void))qword_1C02D7438(v3);
    if ( (_DWORD)result )
    {
      result = qword_1C02D6388;
      if ( qword_1C02D6388 )
      {
        result = (__int64 (*)(void))qword_1C02D6388();
        if ( (int)result >= 0 )
        {
          result = qword_1C02D6390;
          if ( qword_1C02D6390 )
            return (__int64 (*)(void))qword_1C02D6390();
        }
      }
    }
  }
  return result;
}
