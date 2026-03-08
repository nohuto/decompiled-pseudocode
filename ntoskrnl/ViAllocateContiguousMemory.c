/*
 * XREFs of ViAllocateContiguousMemory @ 0x140AC4A6C
 * Callers:
 *     ViHookDmaAdapter @ 0x140AC6520 (ViHookDmaAdapter.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ViAllocateContiguousMemory(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  __int64 result; // rax
  ULONG v5; // ebp
  __int64 v6; // r14
  int v7; // [rsp+50h] [rbp+8h]

  v2 = 0xFFFF;
  if ( *(_BYTE *)(a1 + 235) )
  {
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 232) )
    {
      v7 = -1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 244) == 1 )
        v2 = 0xFFFFFF;
      v7 = v2;
    }
    v3 = v7;
  }
  *(_DWORD *)(a1 + 328) = 32;
  *(_QWORD *)(a1 + 336) = a1 + 320;
  RtlClearAllBits((PRTL_BITMAP)(a1 + 328));
  result = ExAllocatePool2(64LL, 0x100uLL, 0x566C6148u);
  *(_QWORD *)(a1 + 296) = result;
  if ( result )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      *(_QWORD *)(v6 + *(_QWORD *)(a1 + 296)) = MmAllocateContiguousNodeMemory(12288LL, 0, v3, 0, 4, 0x80000000);
      if ( *(_QWORD *)(v6 + *(_QWORD *)(a1 + 296)) )
      {
        result = 304LL;
      }
      else
      {
        RtlSetBits((PRTL_BITMAP)(a1 + 328), v5, 1u);
        result = 308LL;
      }
      _InterlockedIncrement((volatile signed __int32 *)(result + a1));
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < 0x20 );
  }
  return result;
}
