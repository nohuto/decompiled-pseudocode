/*
 * XREFs of EtwpEnableBootLoggerRegistryProviders @ 0x140B943A4
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpEnableKeyProviders @ 0x14083D574 (EtwpEnableKeyProviders.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnableBootLoggerRegistryProviders(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  ULONG_PTR v5; // r15
  WCHAR *Pool2; // rsi
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  const WCHAR *v9; // r14
  __int64 v10; // rax
  unsigned int *v11; // r14
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a1 + 2 * v3) );
  v5 = (unsigned int)(2 * v3 + 260);
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v5, 0x74777445u);
  if ( Pool2 )
  {
    v7 = (_QWORD *)(a2 + 8);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v9 = (const WCHAR *)i[2];
      if ( !RtlStringCbPrintfW(Pool2, v5, L"%ws\\%ws", a1, v9) )
      {
        RtlInitUnicodeString(&DestinationString, v9);
        v10 = EtwpAcquireLoggerContextByLoggerName(EtwpHostSiloState, &DestinationString, 0);
        v11 = (unsigned int *)v10;
        if ( v10 )
        {
          EtwpEnableKeyProviders(*(_QWORD *)(v10 + 1096), *(_DWORD *)v10, Pool2, 0LL, 0);
          EtwpReleaseLoggerContext(v11, 0);
        }
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
}
