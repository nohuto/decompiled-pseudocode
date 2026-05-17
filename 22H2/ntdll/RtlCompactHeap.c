/*
 * XREFs of RtlCompactHeap @ 0x1800F2280
 * Callers:
 *     RtlDebugCompactHeap @ 0x1800F8C2C (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlpHpHeapCompact @ 0x180006AE4 (RtlpHpHeapCompact.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpCoalesceHeap @ 0x1800F352C (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8C2C (RtlDebugCompactHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010DF24 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _TEB *v10; // rbx
  char v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v11 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)Src, a2 & 1);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)Src + 29) | a2;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v5 = 0LL;
      v12 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v11 = 1;
      }
      v6 = RtlpCoalesceHeap(Src);
      v8 = v6;
      if ( v6 )
      {
        v5 = 16LL * *(unsigned __int16 *)(v6 + 8);
        v12 = v5;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v9 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v9 + 40) > v5 )
          v5 = *(_QWORD *)(v9 + 40);
        v12 = v5;
      }
      if ( !v5 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v10 = NtCurrentTeb();
        v10->LastErrorValue = RtlNtStatusToDosError(0);
        v5 = v12;
      }
      if ( v11 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v8, v7);
      return v5;
    }
  }
}
