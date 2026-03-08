/*
 * XREFs of DpiMiracastGetDeviceContextFromLuid @ 0x1C005F39C
 * Callers:
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0061380 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall DpiMiracastGetDeviceContextFromLuid(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+54h] [rbp+Ch]

  v8 = HIDWORD(a1);
  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = (__int64 *)qword_1C013B8A0;
  if ( (__int64 *)qword_1C013B8A0 == &qword_1C013B8A0 )
    goto LABEL_8;
  do
  {
    v5 = v4;
    if ( __PAIR64__(v8, v3) == v4[12] )
      break;
    v4 = (__int64 *)*v4;
  }
  while ( v4 != &qword_1C013B8A0 );
  if ( v4 == &qword_1C013B8A0 )
  {
LABEL_8:
    v5 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 6);
    _InterlockedXor((volatile signed __int32 *)v5 + 7, (unsigned int)v5);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
