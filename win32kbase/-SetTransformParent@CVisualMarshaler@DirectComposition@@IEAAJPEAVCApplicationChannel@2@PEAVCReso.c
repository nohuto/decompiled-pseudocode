/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C0069BC8
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0069940 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C00C1D44 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler *a3,
        char a4,
        bool *a5)
{
  bool *v5; // r12
  unsigned int v7; // esi
  __int64 v12; // r9
  struct DirectComposition::CResourceMarshaler *v13; // rax
  char v14; // r13
  struct DirectComposition::CResourceMarshaler *v15; // rdi
  int v16; // eax
  int v17; // eax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v7 = 0;
  if ( a3 != this[18] )
  {
    if ( a3 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a3 + 9),
                               200LL) )
      {
        if ( v12 )
        {
          v13 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 176LL))(v12);
          v14 = 0;
          v18 = v13;
          v15 = v13;
          if ( !v13 )
            goto LABEL_13;
          if ( *((_QWORD *)v13 + 3) == 1LL )
          {
LABEL_9:
            v16 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(a2, v15, 0, a3);
            v7 = v16;
            if ( !v14 )
            {
              if ( v16 < 0 )
                return v7;
              goto LABEL_2;
            }
            if ( v16 >= 0 )
            {
              DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
              this[18] = v15;
LABEL_20:
              *((_DWORD *)this + 4) |= 0x200u;
              *v5 = 1;
              goto LABEL_2;
            }
LABEL_21:
            DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
            return v7;
          }
        }
        v18 = 0LL;
LABEL_13:
        v14 = 1;
        v17 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0xC9u, &v18);
        v15 = v18;
        v7 = v17;
        if ( v17 < 0 )
          goto LABEL_21;
        goto LABEL_9;
      }
      DirectComposition::CResourceMarshaler::AddRef(a3);
    }
    DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
    this[18] = a3;
    goto LABEL_20;
  }
LABEL_2:
  if ( *((_BYTE *)this + 312) >> 7 != a4 )
  {
    if ( this[18] )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
    }
    *((_BYTE *)this + 312) = (a4 << 7) | (_BYTE)this[39] & 0x7F;
  }
  return v7;
}
