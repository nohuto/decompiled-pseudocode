/*
 * XREFs of ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C01F5EC4
 * Callers:
 *     ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F5C30 (-SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0027718 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0029A24 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D46F4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  int v13; // ebx
  int v14; // eax
  struct DirectComposition::CResourceMarshaler *v15; // rax
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *((_QWORD *)this + 10);
  v7 = 0;
  if ( !v6 )
    goto LABEL_8;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 108LL) )
  {
    v11 = (DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
    DirectComposition::CResourceMarshaler::AddRef(v11);
    --*((_DWORD *)v11 + 5);
    v12 = v17;
    if ( *((_DWORD *)v11 + 5) == 1 )
      v12 = v11;
    v17 = v12;
  }
  else
  {
    v12 = v17;
  }
  if ( !v12 )
  {
LABEL_8:
    v7 = 1;
    v13 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x6Cu, &v17);
    if ( v13 < 0 )
      goto LABEL_13;
    v12 = v17;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 16LL, a3, a4);
  v13 = v14;
  if ( v7 )
  {
    if ( v14 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 10));
      v15 = v17;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 10) = v15;
      *a5 = 1;
      return (unsigned int)v13;
    }
LABEL_13:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v17);
  }
  return (unsigned int)v13;
}
