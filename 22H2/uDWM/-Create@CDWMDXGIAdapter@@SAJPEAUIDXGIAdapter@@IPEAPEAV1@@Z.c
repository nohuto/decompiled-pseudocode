/*
 * XREFs of ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18003801C
 * Callers:
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180037CB8 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x1800380CC (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x1800386E4 (--0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::Create(struct IDXGIAdapter *a1, unsigned int a2, struct CDWMDXGIAdapter **a3)
{
  CDWMDXGIAdapter *v6; // rax
  CDWMDXGIAdapter *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (CDWMDXGIAdapter *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            384LL);
  if ( v6 )
    v7 = CDWMDXGIAdapter::CDWMDXGIAdapter(v6, a2, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (**(void (__fastcall ***)(CDWMDXGIAdapter *))v7)(v7);
    v8 = CDWMDXGIAdapter::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5Au);
    }
    else
    {
      *a3 = v7;
      (**(void (__fastcall ***)(CDWMDXGIAdapter *))v7)(v7);
    }
    (*(void (__fastcall **)(CDWMDXGIAdapter *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x56u);
  }
  return v9;
}
