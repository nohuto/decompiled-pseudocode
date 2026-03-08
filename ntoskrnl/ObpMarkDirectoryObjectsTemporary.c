/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x14076F1F8
 * Callers:
 *     ObpDeleteDirectoryName @ 0x14076F180 (ObpDeleteDirectoryName.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpUnlockDirectory @ 0x140699588 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14076F3D0 (ObpLockDirectoryExclusive.c)
 *     ObpDeleteSymbolicLinkName @ 0x14076F408 (ObpDeleteSymbolicLinkName.c)
 */

_QWORD *__fastcall ObpMarkDirectoryObjectsTemporary(_QWORD **Object, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rax
  _QWORD **v5; // r14
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  char v10; // r12
  __int64 v11; // r13
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rdx
  struct _OBJECT_TYPE *v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  _QWORD *v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  _QWORD *v20; // [rsp+98h] [rbp+10h]
  _QWORD **v21; // [rsp+A0h] [rbp+18h]
  __int64 v22; // [rsp+A8h] [rbp+20h]

  v20 = a2;
  v2 = a2;
  v18 = 0LL;
  v19 = 0LL;
  ObpLockDirectoryExclusive(&v18, Object);
  v4 = 37LL;
  v21 = Object;
  v22 = 37LL;
  v5 = Object;
  v6 = Object;
  do
  {
    v7 = *v5;
    v8 = v6;
    if ( *v5 )
    {
      do
      {
        v10 = 0;
        v16 = v7[1];
        v17 = v8;
        v11 = v16 - 48;
        if ( (*(_BYTE *)(v16 - 48 + 26) & 2) != 0 )
          v12 = v11 - ObpInfoMaskToOffset[*(_BYTE *)(v16 - 48 + 26) & 3];
        else
          v12 = 0LL;
        v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 + 24) ^ (unsigned __int64)BYTE1(v11)];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
        *(_BYTE *)(v11 + 27) &= ~0x10u;
        if ( *(_QWORD *)(v11 + 8) || *(_DWORD *)(v12 + 24) )
        {
          v2 = v20;
        }
        else
        {
          if ( v15 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(v16);
          v14 = v7;
          *v8 = *v7;
          v7 = (_QWORD *)*v7;
          *(_QWORD *)v12 = 0LL;
          v2 = v14;
          *v14 = v20;
          v20 = v14;
          ObfDereferenceObjectWithTag(Object, 0x6944624Fu);
          v10 = 1;
        }
        v8 = v7;
        ExReleasePushLockEx((__int64 *)(v11 + 16), 0LL);
        KeLeaveCriticalRegion();
        if ( v10 )
          v8 = v17;
        else
          v7 = (_QWORD *)*v7;
      }
      while ( v7 );
      v5 = v21;
      v4 = v22;
    }
    ++v5;
    ++v6;
    --v4;
    v21 = v5;
    v22 = v4;
  }
  while ( v4 );
  ObpUnlockDirectory((__int64)&v18);
  return v2;
}
