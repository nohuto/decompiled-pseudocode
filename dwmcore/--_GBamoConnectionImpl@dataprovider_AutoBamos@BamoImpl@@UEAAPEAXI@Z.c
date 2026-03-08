/*
 * XREFs of ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1801B5D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B5A04 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *__fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`scalar deleting destructor'(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
