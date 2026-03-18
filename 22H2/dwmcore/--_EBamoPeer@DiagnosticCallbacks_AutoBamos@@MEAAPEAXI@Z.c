/*
 * XREFs of ??_EBamoPeer@DiagnosticCallbacks_AutoBamos@@MEAAPEAXI@Z @ 0x1801B8FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1801B8D4C (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

DiagnosticCallbacks_AutoBamos::BamoPeer *__fastcall DiagnosticCallbacks_AutoBamos::BamoPeer::`vector deleting destructor'(
        DiagnosticCallbacks_AutoBamos::BamoPeer *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = a2;
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(
    (DiagnosticCallbacks_AutoBamos::BamoPeer *)((char *)this + 8),
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
