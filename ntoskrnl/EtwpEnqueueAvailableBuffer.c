/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x1402063C4
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140205030 (EtwpAllocateFreeBuffers.c)
 *     EtwpPrepareDirtyBuffer @ 0x140205FA4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140205FF4 (EtwpSwitchBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x140600688 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1406006D8 (EtwpRotateCompressionTarget.c)
 *     EtwpCompleteBuffer @ 0x140692D8C (EtwpCompleteBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x140206498 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402064E4 (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v5; // rcx
  _QWORD *v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // r8
  int v14; // eax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter4 = *a2;
  v5 = *(unsigned int *)(a1 + 4);
  v15 = 0;
  if ( (_DWORD)v5 != (_DWORD)BugCheckParameter4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v5, BugCheckParameter4);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 808));
  EtwpLockBufferList(a1, &v15);
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v10 = (_QWORD *)(a1 + 56), (v11 = *(_QWORD *)(a1 + 56)) == 0)
    || a3 == 4 )
  {
    v8 = a2 + 8;
LABEL_4:
    *v8 = 0LL;
    **(_QWORD **)(a1 + 48) = v8;
    goto LABEL_5;
  }
  if ( !a3 )
  {
    v12 = a2 + 8;
    *v12 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v12;
    if ( a1 + 56 == *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a1 + 48) = v12;
    goto LABEL_6;
  }
  v13 = 0LL;
  do
  {
    v14 = *(_DWORD *)(v11 + 12);
    if ( v13 )
    {
      if ( v14 != 6 )
        goto LABEL_16;
    }
    else if ( !v14 )
    {
      goto LABEL_16;
    }
    v13 = v10;
    if ( v14 != 6 )
    {
LABEL_16:
      v10 = (_QWORD *)v11;
      goto LABEL_17;
    }
    *v10 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
      *(_QWORD *)v11 = 0LL;
    else
      *(_QWORD *)(a1 + 48) = v10;
    *(_QWORD *)v11 = *(_QWORD *)(a1 + 1184);
    *(_QWORD *)(a1 + 1184) = v11;
LABEL_17:
    v11 = *v10;
  }
  while ( *v10 );
  v8 = a2 + 8;
  if ( !v13 )
    goto LABEL_4;
  *v8 = *v13;
  *v13 = v8;
  if ( v13 == *(_QWORD **)(a1 + 48) )
LABEL_5:
    *(_QWORD *)(a1 + 48) = v8;
LABEL_6:
  result = EtwpUnlockBufferList(a1, &v15);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
