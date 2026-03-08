/*
 * XREFs of ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C00619CC
 * Callers:
 *     ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0065310 (-SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C2170 (-SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0262DF0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0268790 (-SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C005F8A4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C0065BF8 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CWeakReferenceBase **a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        int a7,
        int a8,
        _BYTE *a9)
{
  int WeakReferenceBase; // edi
  struct DirectComposition::CResourceMarshaler *v10; // r9
  struct DirectComposition::CWeakReferenceBase *v13; // rdx
  struct DirectComposition::CResourceMarshaler *v14; // rax
  struct DirectComposition::CWeakReferenceBase *v15; // rbx
  bool v16; // zf
  int *v17; // rcx
  int v18; // edx
  int v19; // eax
  int v21; // ecx
  int v22; // eax
  struct DirectComposition::CWeakReferenceBase *v23; // [rsp+40h] [rbp+18h] BYREF

  WeakReferenceBase = 0;
  v10 = (struct DirectComposition::CResourceMarshaler *)a3;
  if ( a3 && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(a3[9], a5) )
    return (unsigned int)-1073741811;
  v13 = *a2;
  if ( *a2 )
    v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v13 + 2);
  else
    v14 = 0LL;
  if ( v10 == v14 )
  {
    if ( v13 && !v14 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(this, v13);
      *a2 = 0LL;
      v21 = *a6;
      if ( a8 == 1 )
        v22 = v21 & ~a7;
      else
        v22 = a7 | v21;
      *a6 = v22;
LABEL_14:
      *a9 = 1;
    }
  }
  else
  {
    v15 = 0LL;
    v23 = 0LL;
    if ( !v10 )
    {
LABEL_9:
      if ( *a2 )
        DirectComposition::CApplicationChannel::ReleaseWeakReference(this, *a2);
      v16 = a8 == 1;
      v17 = a6;
      *a2 = v15;
      v18 = *v17;
      if ( v16 )
        v19 = v18 & ~a7;
      else
        v19 = a7 | v18;
      *v17 = v19;
      goto LABEL_14;
    }
    WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(this, v10, &v23);
    if ( WeakReferenceBase >= 0 )
    {
      v15 = v23;
      goto LABEL_9;
    }
  }
  return (unsigned int)WeakReferenceBase;
}
