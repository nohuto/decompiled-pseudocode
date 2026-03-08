/*
 * XREFs of ??_GCFormatConverter@@MEAAPEAXI@Z @ 0x1802B8320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFormatConverter@@MEAA@XZ @ 0x1802B81F8 (--1CFormatConverter@@MEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::`scalar deleting destructor'(CFormatConverter *this, char a2)
{
  CFormatConverter::~CFormatConverter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
