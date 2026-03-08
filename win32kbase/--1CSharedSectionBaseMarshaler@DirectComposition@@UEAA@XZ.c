/*
 * XREFs of ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00BD3C4
 * Callers:
 *     ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BD380 (--_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A700 (--_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(
        DirectComposition::CSharedSectionBaseMarshaler *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionBaseMarshaler::`vftable';
  v1 = (void *)*((_QWORD *)this + 7);
  if ( v1 )
    ObfDereferenceObject(v1);
}
