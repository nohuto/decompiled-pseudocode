/*
 * XREFs of ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0006DBC
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

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // bp
  int v11; // ebx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  int v13; // eax
  struct DirectComposition::CResourceMarshaler *v14; // rax
  DirectComposition::CResourceMarshaler *v16; // rbx
  int v17; // eax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v6 = *((_QWORD *)this + 18);
  v7 = 0;
  if ( !v6 )
    goto LABEL_2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 108LL) )
  {
    v16 = (DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
    DirectComposition::CResourceMarshaler::AddRef(v16);
    v17 = DirectComposition::CResourceMarshaler::Release(v16);
    v12 = v18;
    if ( v17 == 1 )
      v12 = v16;
    v18 = v12;
  }
  else
  {
    v12 = v18;
  }
  if ( !v12 )
  {
LABEL_2:
    v7 = 1;
    v11 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, (DirectComposition *)0x6C, &v18);
    if ( v11 < 0 )
      goto LABEL_15;
    v12 = v18;
  }
  v13 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 0x10u, a3, a4);
  v11 = v13;
  if ( v7 )
  {
    if ( v13 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 18));
      v14 = v18;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 18) = v14;
      *a5 = 1;
      return (unsigned int)v11;
    }
LABEL_15:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v18);
  }
  return (unsigned int)v11;
}
