/*
 * XREFs of ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x180229100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x18022907C (--1CDataSourceReader@@UEAA@XZ.c)
 */

CDataSourceReader *__fastcall CDataSourceReader::`vector deleting destructor'(CDataSourceReader *this, char a2)
{
  CDataSourceReader::~CDataSourceReader(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
