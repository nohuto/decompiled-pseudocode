/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C009334C
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0093290 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C00933D4 (-InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00935A0 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        void **a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  DirectComposition::CDCompMappedSharedSectionMarshaler *v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rbx
  int v10; // r11d

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v7
    && (v8 = (DirectComposition::CDCompMappedSharedSectionMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 120LL))(v7),
        (v9 = v8) != 0LL) )
  {
    v10 = DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(v8, a3, a4);
    if ( v10 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
