/*
 * XREFs of ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x1801DD890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DataProviderRegistrarPrincipal@@UEAA@XZ @ 0x1801DD6F0 (--1DataProviderRegistrarPrincipal@@UEAA@XZ.c)
 */

DataProviderRegistrarPrincipal *__fastcall DataProviderRegistrarPrincipal::`vector deleting destructor'(
        DataProviderRegistrarPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di

  v4 = a2;
  DataProviderRegistrarPrincipal::~DataProviderRegistrarPrincipal(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
