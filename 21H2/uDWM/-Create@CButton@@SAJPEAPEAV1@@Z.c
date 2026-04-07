/*
 * XREFs of ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x180028DB4
 * Callers:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x1800256D4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800273D0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ??0CButton@@IEAA@XZ @ 0x180028D0C (--0CButton@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::Create(struct CButton **a1)
{
  CButton *v2; // rax
  CButton *v3; // rbx
  int v4; // eax
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10u);
    return (unsigned int)v5;
  }
  v2 = (CButton *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    416LL);
  if ( v2 )
    v3 = CButton::CButton(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = CButton::Initialize(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x10u);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
      v5 = 0;
    }
    if ( v5 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x10u);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v5;
}
