/*
 * XREFs of ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x1801E43F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x1801E432C (--1DataProviderProxy@@UEAA@XZ.c)
 */

DataProviderProxy *__fastcall DataProviderProxy::`vector deleting destructor'(DataProviderProxy *this, char a2)
{
  DataProviderProxy::~DataProviderProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
