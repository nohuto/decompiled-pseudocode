/*
 * XREFs of SmpUpdatePagefileUsageCallback @ 0x140014FB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

char SmpUpdatePagefileUsageCallback()
{
  unsigned __int64 v0; // rbp
  unsigned int *Heap; // rax
  unsigned __int64 v2; // rsi
  SIZE_T i; // rdi
  NTSTATUS v4; // edi
  unsigned int *v5; // rbx
  __int64 v6; // rdi
  unsigned int *v7; // rcx
  __int64 j; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v13; // edx
  ULONG ReturnLength; // [rsp+30h] [rbp-F8h] BYREF
  char SystemInformation[8]; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v18; // [rsp+50h] [rbp-D8h]
  char v19[168]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+108h] [rbp-20h]

  v0 = SmpMemorySize / (unsigned __int64)(unsigned int)dword_140028BA8;
  LODWORD(Heap) = NtQuerySystemInformation(
                    MaxSystemInfoClass|SystemFullMemoryInformation,
                    SystemInformation,
                    0x20u,
                    0LL);
  if ( (int)Heap >= 0 )
  {
    v2 = v17;
    if ( v18 > qword_140028EE8 )
    {
      qword_140028EE8 = v18;
      v2 = v18;
    }
    LODWORD(Heap) = NtQuerySystemInformation(SystemMemoryListInformation, v19, 0xB0u, &ReturnLength);
    if ( (int)Heap >= 0 )
    {
      for ( i = 256LL; ; i = ReturnLength )
      {
        Heap = (unsigned int *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, i);
        v5 = Heap;
        if ( !Heap )
          break;
        v4 = NtQuerySystemInformation(SystemPageFileInformation, Heap, i, &ReturnLength);
        if ( v4 >= 0 )
        {
          v6 = 0LL;
          if ( ReturnLength )
          {
            v6 = v5[2];
            v7 = v5;
            for ( j = *v5; (_DWORD)j; j = *v7 )
            {
              v7 = (unsigned int *)((char *)v7 + j);
              v6 += v7[2];
            }
          }
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
          v9 = v6 + v20;
          v10 = 0x400000000uLL / (unsigned int)dword_140028BA8 + v2;
          if ( 10 * v2 / 9 <= v10 )
            v10 = 10 * v2 / 9;
          if ( v10 > v0 )
          {
            v11 = v10 - v0;
            if ( v11 > v9 )
              v9 = v11;
          }
          if ( v9 > 0xFFFFFFFF )
            LODWORD(v9) = -1;
          dword_140028EF4[(unsigned int)Data % 0xF0] = v9;
          v12 = 7;
          LODWORD(Data) = Data + 1;
          v13 = SmpPagefileUsage + 1;
          SmpPagefileUsage = v13;
          LOBYTE(Heap) = v13 - 1;
          if ( (unsigned int)(v13 - 1) < 7 )
            v12 = v13 - 1;
          if ( (v13 & v12) == 0 )
            LOBYTE(Heap) = NtSetValueKey(SmpMmKey, (PUNICODE_STRING)&SmpPagefileUsageValue, 0, 3u, &Data, 0x3C4u);
          return (char)Heap;
        }
        LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
        if ( v4 != -1073741820 )
          return (char)Heap;
      }
    }
  }
  return (char)Heap;
}
