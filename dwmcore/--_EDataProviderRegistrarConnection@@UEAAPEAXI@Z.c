/*
 * XREFs of ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801DD040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B5A04 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

DataProviderRegistrarConnection *__fastcall DataProviderRegistrarConnection::`vector deleting destructor'(
        DataProviderRegistrarConnection *this,
        char a2)
{
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DataProviderRegistrarConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
