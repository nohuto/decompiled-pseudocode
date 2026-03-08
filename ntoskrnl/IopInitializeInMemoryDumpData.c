/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140550F70
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403AB95C (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x140414050 (ZwFilterBootOption.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KdCopyDataBlock @ 0x140564CD0 (KdCopyDataBlock.c)
 *     IoSetEnvironmentVariableEx @ 0x14094D504 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r12
  int v2; // eax
  PVOID *v3; // rdi
  __int64 *v4; // r14
  unsigned int v5; // r15d
  void *ContiguousNodeMemory; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  __int128 v12; // [rsp+38h] [rbp-38h]
  _DWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v13[0] = 2012912317;
  v13[1] = 1295123289;
  v13[2] = -198680387;
  v13[3] = 1266192359;
  *(_QWORD *)&v12 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v12 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140C6A874 = 0;
    LODWORD(qword_140C6A860) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(1LL, 270532611LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_140C6A848;
    qword_140C6A858 = 9144LL;
    v4 = (__int64 *)&unk_140C6A848;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140C6A858, 0, -1, 0, 4, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140C6A858);
      v8 = *v4;
      *(_OWORD *)v8 = v12;
      *(_QWORD *)(v8 + 16) = 0x199B7088610836E8LL;
      if ( v1 )
        KdCopyDataBlock(*v4 + 8216, v7);
      ++v5;
      ++v4;
      if ( v5 >= 2 )
      {
        v9 = __rdtsc();
        LODWORD(qword_140C6A868) = v9;
        v10 = __rdtsc();
        HIDWORD(qword_140C6A868) = v10;
        HIDWORD(qword_140C6A868) = ExGenRandom(1) & 0x7FFFFFFF;
        v11 = IoSetEnvironmentVariableEx(
                (unsigned int)L"DumpInstance",
                (unsigned int)v13,
                (unsigned int)&qword_140C6A868,
                8,
                7);
        if ( v11 < 0 )
        {
          dword_140C6A874 = v11;
          qword_140C6A868 = 0x4547415045474150LL;
        }
        dword_140C6A844 = 1;
        goto LABEL_18;
      }
    }
    dword_140C6A874 = -1073741801;
    do
    {
      if ( *v3 )
      {
        MmFreeContiguousMemory(*v3);
        *v3 = 0LL;
      }
      ++v3;
      --v0;
    }
    while ( v0 );
LABEL_18:
    _InterlockedExchange(InMemData, 0);
  }
}
