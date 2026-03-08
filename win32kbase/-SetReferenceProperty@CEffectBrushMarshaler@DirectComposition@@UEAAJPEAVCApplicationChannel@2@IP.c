/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00A2630
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x1C0064ED0 (-SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEA.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // ebx
  unsigned int v12; // r9d
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  bool *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int128 v18; // rax
  __int64 QuotaZInit; // rax
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  __int64 v26; // [rsp+20h] [rbp-58h]
  char v27; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  if ( (a3 & 0xC0000000) != 0x80000000 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return (unsigned int)DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                               a2,
                               (struct DirectComposition::CResourceMarshaler **)this + 10,
                               (__int64)a4,
                               1,
                               135,
                               (int *)this + 4,
                               64,
                               0,
                               a5);
    }
    else if ( !a4
           || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 96LL))(a4) )
    {
      return (unsigned int)DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                             a2,
                             (struct DirectComposition::CResourceMarshaler **)this + 9,
                             (__int64)a4,
                             1,
                             28,
                             (int *)this + 4,
                             32,
                             0,
                             a5);
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 181)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v12, 22)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v20, 9)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v21, 15)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v22, 113)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v23, 73)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v24, 203)
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v25, 57) )
  {
    return (unsigned int)-1073741811;
  }
  v13 = *((_QWORD *)this + 11);
  if ( !v13 )
  {
    v16 = *((_QWORD *)this + 9);
    if ( v16 )
    {
      v17 = *(unsigned int *)(v16 + 80);
      v18 = *(unsigned int *)(v16 + 80) * (unsigned __int128)8uLL;
      if ( is_mul_ok(v17, 8uLL) )
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       (NSInstrumentation::CLeakTrackingAllocator *)v17,
                       *((unsigned __int64 *)&v18 + 1),
                       v18,
                       0x69664344u);
        *((_QWORD *)this + 11) = QuotaZInit;
        v13 = QuotaZInit;
        if ( QuotaZInit )
          *((_DWORD *)this + 24) = *(_DWORD *)(*((_QWORD *)this + 9) + 80LL);
        else
          v5 = -1073741801;
      }
      else
      {
        v5 = -1073741675;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  v27 = 0;
  v14 = a3 & 0x3FFFFFFF;
  if ( v5 >= 0 )
  {
    if ( v14 >= *((unsigned int *)this + 24) )
      return (unsigned int)-1073741811;
    v5 = DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(
           this,
           a2,
           (struct DirectComposition::CResourceMarshaler **)(v13 + 8 * v14),
           (unsigned int *)a4,
           v26,
           0,
           &v27);
    if ( v27 )
    {
      v15 = a5;
      *((_DWORD *)this + 25) = 0;
      *v15 = 1;
    }
  }
  return (unsigned int)v5;
}
