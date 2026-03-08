/*
 * XREFs of ?ReleaseAllReferences@CGenericMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026F490
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026F460 (-FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CGenericMarshaler::ReleaseAllReferences(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CReferenceProperty **v2; // rbx
  DirectComposition::CReferenceProperty **v4; // rdi
  DirectComposition::CReferenceProperty *v5; // rcx

  v2 = (DirectComposition::CReferenceProperty **)*((_QWORD *)this + 7);
  v4 = &v2[*((_QWORD *)this + 8)];
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( *((_BYTE *)*v2 + 4) == 4 )
    {
      if ( v5 )
        DirectComposition::CReferenceProperty::FreeValue(v5, a2);
    }
    ++v2;
  }
}
