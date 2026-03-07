__int64 __fastcall HalpDmaInitMemory(__int64 a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  HalpDmaAdapterListLock = 0LL;
  qword_140C64028 = (__int64)&HalpDmaAdapterList;
  HalpDmaAdapterList = (__int64)&HalpDmaAdapterList;
  LOWORD(HalpNewAdapter.Header.Lock) = 1;
  HalpNewAdapter.Header.Size = 6;
  HalpNewAdapter.Header.SignalState = 1;
  HalpNewAdapter.Header.WaitListHead.Blink = &HalpNewAdapter.Header.WaitListHead;
  HalpNewAdapter.Header.WaitListHead.Flink = &HalpNewAdapter.Header.WaitListHead;
  v10 = 0x1000000LL;
  qword_140C63C48 = HalpAllocPhysicalMemory(a1, &v10, 16LL, 0x10000LL);
  dword_140C63C40 = qword_140C63C48 != 0 ? 0x10000 : 0;
  qword_140C63E28 = HalpAllocPhysicalMemory(a1, &v10, 16LL, 0x10000LL);
  v2 = 32;
  dword_140C63E20 = qword_140C63E28 != 0 ? 0x10000 : 0;
  v3 = (unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL ? 0x10000 : 196608;
  v4 = v3 >> 12;
  do
  {
    v5 = v2;
    v10 = (1LL << v2) - 1;
    v6 = HalpAllocPhysicalMemory(a1, &v10, v4, 0x10000LL);
    v2 = v5;
    if ( v6 )
      break;
    v2 = v5 + 1;
  }
  while ( v5 + 1 <= 0x20 );
  qword_140C63D28 = v6;
  dword_140C63D20 = v6 != 0 ? v3 : 0;
  if ( v2 >= 0x40 )
    qword_140C63CF0 = -1LL;
  else
    qword_140C63CF0 = (1LL << v2) - 1;
  v7 = 32;
  while ( 1 )
  {
    v8 = v7;
    v10 = (1LL << v7) - 1;
    result = HalpAllocPhysicalMemory(a1, &v10, v4, 0x10000LL);
    v7 = v8;
    if ( result )
      break;
    v7 = v8 + 1;
    if ( v8 + 1 > 0x20 )
    {
      v3 = 0;
      break;
    }
  }
  qword_140C63F08 = result;
  dword_140C63F00 = v3;
  if ( v7 >= 0x40 )
  {
    qword_140C63ED0 = -1LL;
  }
  else
  {
    result = (1LL << v7) - 1;
    qword_140C63ED0 = result;
  }
  return result;
}
