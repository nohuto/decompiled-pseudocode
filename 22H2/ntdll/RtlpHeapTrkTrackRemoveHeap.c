/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800FEA94
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800FE390 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800FDE8C (RtlpHeapTrkDereferenceStack.c)
 */

PVOID *__fastcall RtlpHeapTrkTrackRemoveHeap(PVOID a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID *v4; // rcx
  __int64 v5; // r8
  PVOID *v6; // rax
  PVOID **v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx
  PVOID *result; // rax
  _QWORD *v11; // rax
  PVOID *v12; // rcx
  PVOID **v13; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016DBC0 + 8 * v3));
    v4 = *(PVOID **)(qword_18016DA50 + 16LL * v2);
    v5 = qword_18016DA50 + 16LL * v2;
    if ( v4 != (PVOID *)v5 )
    {
      do
      {
        v6 = (PVOID *)*v4;
        if ( v4[2] == a1 )
        {
          if ( v6[1] != v4
            || (v7 = (PVOID **)v4[1], *v7 != v4)
            || (*v7 = v6, v6[1] = v7, v8 = BaseAddress[0], *((PVOID **)BaseAddress[0] + 1) != BaseAddress) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v4 = BaseAddress[0];
          v4[1] = BaseAddress;
          v8[1] = v4;
          BaseAddress[0] = v4;
        }
        v4 = v6;
      }
      while ( v6 != (PVOID *)v5 );
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016DBC0 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v9 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      return result;
    v11 = *(_QWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] )
      goto LABEL_16;
    v12 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *v12 != BaseAddress[0] )
      goto LABEL_16;
    *v12 = v11;
    v11[1] = v12;
    v13 = (PVOID **)v9[4];
    if ( v13 )
    {
      RtlpHeapTrkDereferenceStack(v13);
      v9[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v9);
  }
}
