/*
 * XREFs of EtwpLogSessionWorkingSetInfo @ 0x1408A25EC
 * Callers:
 *     EtwpLogMemInfoWs @ 0x1408A21C4 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MmQuerySessionWorkingSetInformation @ 0x140463F64 (MmQuerySessionWorkingSetInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogSessionWorkingSetInfo(__int64 a1)
{
  void *v2; // rbx
  __int64 Pool2; // rax
  char *v4; // rdi
  unsigned int v5; // eax
  __int64 i; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  char *v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v13 = 10;
  v2 = 0LL;
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    Pool2 = ExAllocatePool2(64LL, 40 * v13, 1953985605LL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
      break;
    if ( (unsigned int)MmQuerySessionWorkingSetInformation(Pool2, &v13) != -1073741820 )
    {
      if ( v13 )
      {
        v4 = (char *)ExAllocatePool2(64LL, 68 * v13, 1953985605LL);
        if ( v4 )
        {
          v5 = v13;
          for ( i = 0LL; (unsigned int)i < v13; v5 = v13 )
          {
            v7 = 5 * i;
            v8 = (unsigned int)i;
            v9 = *((_DWORD *)v2 + 10 * i);
            i = (unsigned int)(i + 1);
            v10 = 68 * v8;
            *(_DWORD *)&v4[v10] = v9;
            *(_QWORD *)&v4[v10 + 4] = *((_QWORD *)v2 + v7 + 1);
            v11 = *((_QWORD *)v2 + v7 + 2);
            *(_QWORD *)&v4[v10 + 60] = 0LL;
            *(_QWORD *)&v4[v10 + 12] = v11;
            *(_QWORD *)&v4[v10 + 20] = *((_QWORD *)v2 + v7 + 3);
            v12 = *((_QWORD *)v2 + v7 + 4);
            *(_QWORD *)&v4[v10 + 44] = 0LL;
            *(_QWORD *)&v4[v10 + 36] = 0LL;
            *(_QWORD *)&v4[v10 + 52] = 0LL;
            *(_QWORD *)&v4[v10 + 28] = v12;
          }
          UserData.Reserved = 0;
          v17 = 0;
          UserData.Ptr = (ULONGLONG)&v13;
          UserData.Size = 4;
          v15 = v4;
          v16 = 68 * v5;
          if ( a1 )
          {
            EtwpLogKernelEvent((__int64)&UserData, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, 0x27Eu, 0x401804u);
          }
          else
          {
            if ( _bittest((_DWORD *)PerfGlobalGroupMask + 1, 0x17u) )
              EtwTraceKernelEvent((__int64)&UserData, 2u, 0x20800000u, 0x27Eu, 0x401804u);
            if ( EtwpHostSiloState != -4540 )
            {
              if ( _bittest((const signed __int32 *)(EtwpHostSiloState + 4544), 0x17u) )
                EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_SESSIONWS, 0LL, 2u, &UserData);
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
      ExFreePoolWithTag(v2, 0);
      return;
    }
  }
}
