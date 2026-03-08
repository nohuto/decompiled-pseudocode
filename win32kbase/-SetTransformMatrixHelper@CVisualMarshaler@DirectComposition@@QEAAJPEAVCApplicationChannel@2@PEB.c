/*
 * XREFs of ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009244
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7380 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0009440 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v7; // rcx
  char v10; // r14
  int v11; // eax
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  bool *v15; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+60h] [rbp+8h] BYREF

  v7 = *((_QWORD *)this + 17);
  if ( !v7 )
  {
LABEL_2:
    v18 = 0LL;
    goto LABEL_3;
  }
  v17 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 144LL))(v7);
  v10 = 0;
  v18 = v17;
  v12 = v17;
  if ( v17 )
  {
    if ( *((_QWORD *)v17 + 3) == 1LL )
      goto LABEL_4;
    goto LABEL_2;
  }
LABEL_3:
  v10 = 1;
  v11 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x6Eu, &v18);
  v12 = v18;
  v13 = v11;
  if ( v11 < 0 )
    goto LABEL_11;
LABEL_4:
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 0x10u, a3, a4);
  v13 = v14;
  if ( v10 )
  {
    if ( v14 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 17));
      v15 = a5;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 17) = v12;
      *v15 = 1;
      return v13;
    }
LABEL_11:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  }
  return v13;
}
