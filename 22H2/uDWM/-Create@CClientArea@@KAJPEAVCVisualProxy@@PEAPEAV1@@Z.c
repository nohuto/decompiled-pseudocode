/*
 * XREFs of ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800268D8
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EF40 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180024A3C (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029820 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800242E0 (--0CVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::Create(struct CVisualProxy *a1, struct CClientArea **a2)
{
  unsigned int v4; // ebx
  CVisual *v5; // rcx
  struct CClientArea *v6; // rcx

  v4 = 0;
  v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    248LL);
  if ( v5 )
  {
    CVisual::CVisual(v5);
    *(_QWORD *)v6 = &CClientArea::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Au);
  }
  return v4;
}
