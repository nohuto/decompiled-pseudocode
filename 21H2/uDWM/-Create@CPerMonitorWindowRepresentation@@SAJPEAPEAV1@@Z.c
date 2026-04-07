/*
 * XREFs of ?Create@CPerMonitorWindowRepresentation@@SAJPEAPEAV1@@Z @ 0x1800BEB78
 * Callers:
 *     ?UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ @ 0x18001FD94 (-UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::Create(struct CPerMonitorWindowRepresentation **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)v3 = &CPerMonitorWindowRepresentation::`vftable';
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(v3 + 56) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = (struct CPerMonitorWindowRepresentation *)v3;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x37u);
  }
  return v2;
}
