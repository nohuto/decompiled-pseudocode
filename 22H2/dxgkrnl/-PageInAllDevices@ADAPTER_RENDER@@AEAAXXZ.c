/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02C1708
 * Callers:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C1F78 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  char *v2; // rdi
  __int64 v3; // rbp
  char *i; // rbx

  v2 = (char *)this + 144;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 864LL))(
             *((_QWORD *)this + 96),
             *((_QWORD *)i + 99)) < 0 )
      {
        WdLogSingleEntry1(1LL, 3176LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 3176LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v2 = (char *)this + 160;
    --v3;
  }
  while ( v3 );
}
