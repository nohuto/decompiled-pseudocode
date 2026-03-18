/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C00848A8
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00845C0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C0085DB8 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD46C (-Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler *a3,
        char a4,
        bool *a5)
{
  bool *v5; // r15
  unsigned int v6; // ebx
  unsigned __int8 v11; // cl
  char v13; // r12
  struct DirectComposition::CResourceMarshaler *v14; // rcx
  DirectComposition::CResourceMarshaler *v15; // rbx
  int v16; // eax
  struct DirectComposition::CResourceMarshaler *v17; // rdx
  int v18; // eax
  struct DirectComposition::CResourceMarshaler *v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a3 != this[19] )
  {
    if ( !a3
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a3 + 96LL))(
           a3,
           199LL) )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[19]);
      this[19] = a3;
      if ( a3 )
        DirectComposition::CResourceMarshaler::AddRef(a3);
      goto LABEL_20;
    }
    v19 = 0LL;
    v13 = 0;
    v14 = this[19];
    if ( !v14 )
      goto LABEL_21;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 96LL))(
           v14,
           200LL) )
    {
      v15 = this[19];
      DirectComposition::CResourceMarshaler::AddRef(v15);
      v16 = DirectComposition::CResourceMarshaler::Release(v15);
      v17 = v19;
      if ( v16 == 1 )
        v17 = v15;
      v19 = v17;
    }
    else
    {
      v17 = v19;
    }
    if ( !v17 )
    {
LABEL_21:
      v13 = 1;
      v6 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, (DirectComposition *)0xC8, &v19);
      if ( (v6 & 0x80000000) != 0 )
        goto LABEL_26;
      v17 = v19;
    }
    v18 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(a2, v17, 0, a3);
    v6 = v18;
    if ( !v13 )
    {
      if ( v18 < 0 )
        return v6;
      goto LABEL_2;
    }
    if ( v18 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[19]);
      this[19] = v19;
LABEL_20:
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
      goto LABEL_2;
    }
LABEL_26:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v19);
    return v6;
  }
LABEL_2:
  v11 = *((_BYTE *)this + 320);
  if ( v11 >> 7 != a4 )
  {
    if ( this[19] )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
      v11 = *((_BYTE *)this + 320);
    }
    *((_BYTE *)this + 320) = (a4 << 7) | v11 & 0x7F;
  }
  return v6;
}
