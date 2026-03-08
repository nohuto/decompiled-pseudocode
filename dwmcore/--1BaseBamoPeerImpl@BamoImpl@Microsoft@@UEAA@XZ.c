/*
 * XREFs of ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1801B5B4C
 * Callers:
 *     ??_EBamoPeer@DiagnosticCallbacks_AutoBamos@@MEAAPEAXI@Z @ 0x1801B5DC0 (--_EBamoPeer@DiagnosticCallbacks_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1801B5E10 (--_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  void *v5; // rcx
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 11) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 3);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
}
