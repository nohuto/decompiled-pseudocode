/*
 * XREFs of ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1820
 * Callers:
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A13E8 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00A1498 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069DA8 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C00A1AF0 (--0-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@P.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A1B7C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
        DirectComposition::CApplicationChannel *this,
        DirectComposition *a2,
        _DWORD *Object,
        struct DirectComposition::CResourceMarshaler **a4)
{
  __int64 QuotaZInit; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  int v9; // edi
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( (_DWORD)a2 == 196 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   this,
                   (unsigned __int64)a2,
                   0x188uLL,
                   0x76684344u);
    v8 = (struct DirectComposition::CResourceMarshaler *)QuotaZInit;
    if ( QuotaZInit )
    {
      DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>(
        QuotaZInit,
        Object + 6);
      *((_DWORD *)v8 + 4) |= 2u;
      *(_QWORD *)v8 = &DirectComposition::CHostVisualMarshaler::`vftable';
      *((_DWORD *)v8 + 96) |= 1u;
      goto LABEL_4;
    }
    v9 = -1073741801;
LABEL_10:
    Object[15] = 0;
    ObfDereferenceObject(Object);
    return (unsigned int)v9;
  }
  v9 = DirectComposition::GeneratedCreateSharedWriteMarshaler(
         (DirectComposition *)(unsigned int)a2,
         (int)Object + 24,
         (const struct DirectComposition::CSharedSystemResource *)&v11,
         a4);
  if ( v9 < 0 )
    goto LABEL_10;
  v8 = v11;
LABEL_4:
  v9 = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
         (DirectComposition::CConnection **)this,
         v8);
  if ( v9 >= 0 )
    *a4 = v8;
  return (unsigned int)v9;
}
