/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x180109280
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWalkHeapInternal @ 0x180002560 (RtlpWalkHeapInternal.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlLockHeap @ 0x18005F960 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005FA00 (RtlUnlockHeap.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180108C48 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010920C (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 Mapping; // rax
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v13; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+30h] [rbp-49h]
  __int64 v16; // [rsp+38h] [rbp-41h]
  __int128 v17; // [rsp+40h] [rbp-39h] BYREF
  __int128 v18; // [rsp+50h] [rbp-29h]
  __int128 v19; // [rsp+60h] [rbp-19h]
  _QWORD v20[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+Fh]

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v13);
  v6 = v13;
  v20[0] = 524290LL;
  if ( Context < 0 )
    v6 = 0LL;
  v20[1] = HeapHandle;
  v7 = HeapHandle[4] == -571548178;
  v13 = v6;
  if ( v7 )
  {
    v22 = *((_QWORD *)HeapHandle + 16) << 12;
    v22 += *((_QWORD *)HeapHandle + 11) << 12;
    v21 = *((_QWORD *)HeapHandle + 17) << 12;
    v6 = v13;
    v21 += *((_QWORD *)HeapHandle + 12) << 12;
  }
  else
  {
    v21 = *((_QWORD *)HeapHandle + 72) - *((_QWORD *)HeapHandle + 83);
    v22 = *((_QWORD *)HeapHandle + 71);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v20, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6 + 1);
      ++*(_DWORD *)&v6->0;
    }
    RtlLockHeap(HeapHandle);
    while ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64)&v17) >= 0 )
    {
      if ( (BYTE2(v18) & 1) != 0 )
      {
        v16 = *((_QWORD *)&v17 + 1);
        v14 = v17;
        v15 = 0LL;
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v6, v17);
          if ( Mapping )
            v15 = *(_QWORD *)(Mapping + 16);
        }
        else
        {
          v15 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v14, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v14 = 305450479LL;
    v16 = 0xFFFFFFFFLL;
    v15 = 0LL;
    v8 = v11(&v14, 24LL, v10);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
    {
      --*(_DWORD *)&v6->0;
      RtlReleaseSRWLockShared(v6 + 1);
    }
  }
  return (unsigned int)v8;
}
