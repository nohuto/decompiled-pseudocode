__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int v4; // ebx
  PSLIST_ENTRY v5; // rax

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 220);
  v4 = v1 & 0x13000003;
  if ( v3 && v3 == KeGetCurrentThread()[1].CurrentRunTime )
    v4 |= 1u;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 768));
  if ( v5 )
    RtlpHpVsContextFreeList(a1 + 704, v4, v5);
  RtlpHpLfhContextCompact(a1 + 896, v4);
  RtlpHpSegContextCompact(a1 + 320, v4);
  RtlpHpSegContextCompact(a1 + 512, v4);
  return 0LL;
}
