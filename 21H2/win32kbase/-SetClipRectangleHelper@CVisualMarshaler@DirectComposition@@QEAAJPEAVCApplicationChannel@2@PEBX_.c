/*
 * XREFs of ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084C00
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0084A60 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0085E70 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD46C (-Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // bp
  DirectComposition::CResourceMarshaler *v11; // rbx
  int v12; // eax
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  int v14; // eax
  int v15; // ebx
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *((_QWORD *)this + 21);
  v7 = 0;
  if ( !v6 )
    goto LABEL_9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 137LL) )
  {
    v11 = (DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 21);
    DirectComposition::CResourceMarshaler::AddRef(v11);
    v12 = DirectComposition::CResourceMarshaler::Release(v11);
    v13 = v17;
    if ( v12 == 1 )
      v13 = v11;
    v17 = v13;
  }
  else
  {
    v13 = v17;
  }
  if ( !v13 )
  {
LABEL_9:
    v7 = 1;
    v15 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, (DirectComposition *)0x89, &v17);
    if ( v15 < 0 )
    {
LABEL_13:
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v17);
      return (unsigned int)v15;
    }
    v13 = v17;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v13, 0x10u, a3, a4);
  v15 = v14;
  if ( v7 )
  {
    if ( v14 >= 0 )
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 152LL))(
        this,
        a2,
        6LL,
        v17,
        a5);
    goto LABEL_13;
  }
  return (unsigned int)v15;
}
