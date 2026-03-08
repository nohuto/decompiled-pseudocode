/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140A73C40
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x140693F10 (EtwpGetNextGuidEntry.c)
 *     PcwAddInstance @ 0x14086B690 (PcwAddInstance.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2)
{
  __int64 result; // rax
  struct _PCW_BUFFER *v3; // r13
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v5; // r8
  signed __int64 *i; // rdx
  signed __int64 *NextGuidEntry; // rax
  NTSTATUS v8; // esi
  __int64 j; // r14
  unsigned int *v10; // rbx
  unsigned int v11; // esi
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v18; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+80h] [rbp+1Fh]

  *(_QWORD *)&Name.Length = 3014700LL;
  Name.Buffer = L"EventTracingCounterSet";
  result = 0LL;
  v19 = 0LL;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v3 = *(struct _PCW_BUFFER **)(a2 + 24);
    Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
    if ( v5 == 1 )
    {
      *(_QWORD *)&v17[12] = 0LL;
      *(_DWORD *)&v17[20] = 0;
      for ( i = 0LL; ; i = NextGuidEntry )
      {
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)Flink, i, 0);
        if ( !NextGuidEntry )
          break;
        if ( *((_DWORD *)NextGuidEntry + 24) )
        {
          if ( (signed __int64 *)NextGuidEntry[7] == NextGuidEntry + 7 )
            ++*(_DWORD *)&v17[20];
          else
            ++*(_DWORD *)&v17[12];
        }
        else
        {
          ++*(_DWORD *)&v17[16];
        }
      }
      *(_DWORD *)v17 = HIDWORD(Flink[258].Flink);
      *(_QWORD *)&v17[4] = *(struct _LIST_ENTRY **)((char *)&Flink[257].Blink + 4);
      Data.Data = v17;
      Data.Size = 24;
      return (unsigned int)PcwAddInstance(v3, &Name, 0, 1u, &Data);
    }
    else
    {
      v8 = 0;
      for ( j = 0LL; (unsigned int)j < LODWORD(Flink[1].Flink); j = (unsigned int)(j + 1) )
      {
        v10 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, j, 0);
        if ( v10 )
        {
          v18 = 0LL;
          v19 = 0LL;
          if ( v10[75] == 1 )
            LODWORD(v18) = v10[1] * v10[58];
          else
            DWORD1(v18) = v10[1] * v10[58];
          v11 = 0;
          v12 = KeNumberProcessors_0;
          LODWORD(v19) = v10[60];
          HIDWORD(v19) = v10[86];
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            do
            {
              v13 = *((_QWORD *)v10 + 137);
              if ( v13 == EtwpHostSiloState )
                v14 = *(_QWORD *)(KeGetPrcb(v11) + 34472) + 320LL;
              else
                v14 = *(_QWORD *)(v13 + 4144) + ((unsigned __int64)v11 << 6);
              ++v11;
              *((_QWORD *)&v18 + 1) += *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * j);
            }
            while ( v11 != v12 );
          }
          Data.Size = 24;
          Data.Data = &v18;
          v8 = PcwAddInstance(v3, (PCUNICODE_STRING)(v10 + 34), j, 1u, &Data);
          EtwpReleaseLoggerContext(v10, 0);
          if ( v8 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v8;
  }
  return result;
}
