/*
 * XREFs of ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0236844
 * Callers:
 *     ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02365B0 (-SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0085E70 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD46C (-Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetTransformMatrixHelper(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // bp
  DirectComposition::CResourceMarshaler *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  struct DirectComposition::CResourceMarshaler *v15; // rdx
  int v16; // ebx
  int v17; // eax
  struct DirectComposition::CResourceMarshaler *v18; // rax
  struct DirectComposition::CResourceMarshaler *v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v6 = *((_QWORD *)this + 11);
  v7 = 0;
  if ( !v6 )
    goto LABEL_8;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 108LL) )
  {
    v11 = (DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
    DirectComposition::CResourceMarshaler::AddRef(v11);
    v14 = DirectComposition::CResourceMarshaler::Release(v11, v12, v13);
    v15 = v20;
    if ( v14 == 1 )
      v15 = v11;
    v20 = v15;
  }
  else
  {
    v15 = v20;
  }
  if ( !v15 )
  {
LABEL_8:
    v7 = 1;
    v16 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, (DirectComposition *)0x6C, &v20);
    if ( v16 < 0 )
      goto LABEL_13;
    v15 = v20;
  }
  v17 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v15, 16LL, a3, a4);
  v16 = v17;
  if ( v7 )
  {
    if ( v17 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 11));
      v18 = v20;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 11) = v18;
      *a5 = 1;
      return (unsigned int)v16;
    }
LABEL_13:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v20);
  }
  return (unsigned int)v16;
}
