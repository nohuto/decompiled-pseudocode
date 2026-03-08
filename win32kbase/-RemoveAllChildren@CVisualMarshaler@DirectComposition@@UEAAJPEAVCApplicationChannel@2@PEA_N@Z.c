/*
 * XREFs of ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1C0064D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveAllChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        bool *a3)
{
  struct DirectComposition::CResourceMarshaler *v3; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 22);
  if ( v3 || *((_QWORD *)this + 25) )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    while ( v3 )
    {
      *((_QWORD *)this + 22) = *((_QWORD *)v3 + 23);
      v8 = *(_QWORD *)v3;
      *((_QWORD *)v3 + 23) = 0LL;
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *))(v8 + 312))(
        v3,
        a2);
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v3);
      v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 22);
    }
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 25);
      if ( !v9 )
        break;
      v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = *(_QWORD *)(v9 + 208);
      *(_QWORD *)(v9 + 208) = 0LL;
      *(_DWORD *)(v9 + 16) &= ~8u;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    }
    *a3 = 1;
  }
  return 0LL;
}
