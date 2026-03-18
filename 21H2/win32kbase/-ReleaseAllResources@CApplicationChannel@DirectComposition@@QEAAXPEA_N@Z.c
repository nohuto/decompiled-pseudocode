/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0014D9C
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0080410 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00B1700 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C0014068 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0098354 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(
        DirectComposition::CApplicationChannel *this,
        bool *a2)
{
  _QWORD *i; // rdi
  DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  unsigned __int64 j; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (_QWORD *)((char *)this + 248);
        (_QWORD *)*i != i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          (struct DirectComposition::CResourceMarshaler *)(*i - 392LL)) )
  {
    ;
  }
  for ( j = 0LL;
        DirectComposition::CLinearObjectTableBase::EnumerateObjects(
          (DirectComposition::CApplicationChannel *)((char *)this + 56),
          &j);
        DirectComposition::CApplicationChannel::ReleaseResource(this, j) )
  {
    ;
  }
  j = 0LL;
  while ( 1 )
  {
    v5 = (DirectComposition::CResourceMarshaler *)DirectComposition::CLinearObjectTableBase::EnumerateObjects(
                                                    (DirectComposition::CApplicationChannel *)((char *)this + 112),
                                                    &j);
    v6 = v5;
    if ( !v5 )
      break;
    DirectComposition::CResourceMarshaler::AddRef(v5);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 88LL))(
      v6,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v6);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 129) != 0;
}
