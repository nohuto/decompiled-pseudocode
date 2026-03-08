/*
 * XREFs of ??_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1801B5E10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1801B5B4C (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::`scalar deleting destructor'(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
