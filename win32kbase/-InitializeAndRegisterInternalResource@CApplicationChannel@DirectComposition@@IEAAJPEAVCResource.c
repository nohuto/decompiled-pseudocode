/*
 * XREFs of ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069DA8
 * Callers:
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1700 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1820 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069E1C (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0091C00 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
        DirectComposition::CConnection **this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v4; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 16LL))(a2)
    && (v4 = DirectComposition::CConnection::AcquireShellResourceAccess(this[5]), v4 < 0)
    || (v4 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))a2)(a2), v4 < 0)
    || (v4 = DirectComposition::CApplicationChannel::RegisterResource(
               (DirectComposition::CApplicationChannel *)this,
               a2),
        v4 < 0) )
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
  }
  return (unsigned int)v4;
}
