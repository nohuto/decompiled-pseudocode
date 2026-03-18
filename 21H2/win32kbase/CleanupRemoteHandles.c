/*
 * XREFs of CleanupRemoteHandles @ 0x1C00C2980
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall CleanupRemoteHandles(_QWORD *a1, __int64 a2, __int64 a3))(void)
{
  char *v4; // rdx
  __int64 v5; // rcx
  __int64 (*result)(void); // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v4 = (char *)a1[7];
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
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
  v5 = (__int64)*(&gRemoteKeyboardChannelHandlePair + 1);
  if ( *(&gRemoteKeyboardChannelHandlePair + 1) )
    ZwClose(*(&gRemoteKeyboardChannelHandlePair + 1));
  result = (__int64 (*)(void))qword_1C029CC70;
  *(_OWORD *)&gRemoteKeyboardChannelHandlePair = 0LL;
  if ( qword_1C029CC70 )
  {
    result = (__int64 (*)(void))qword_1C029CC70(v5, v4, a3);
    if ( (_DWORD)result )
    {
      result = qword_1C029BAD0;
      if ( qword_1C029BAD0 )
      {
        result = (__int64 (*)(void))qword_1C029BAD0();
        if ( (int)result >= 0 )
        {
          result = qword_1C029BAD8;
          if ( qword_1C029BAD8 )
            return (__int64 (*)(void))qword_1C029BAD8();
        }
      }
    }
  }
  return result;
}
