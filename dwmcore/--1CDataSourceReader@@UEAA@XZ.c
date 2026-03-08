/*
 * XREFs of ??1CDataSourceReader@@UEAA@XZ @ 0x180225A8C
 * Callers:
 *     ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x180225B10 (--_ECDataSourceReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801B4B84 (-RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x1801B4CB8 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 */

void __fastcall CDataSourceReader::~CDataSourceReader(CDataSourceReader *this)
{
  char v2; // al

  *(_QWORD *)this = &CDataSourceReader::`vftable';
  v2 = *((_BYTE *)this + 80);
  if ( (v2 & 2) != 0 )
  {
    DataProviderManager::RemoveReaderFromReadyList(*(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL), this);
    *((_BYTE *)this + 80) &= ~2u;
    v2 = *((_BYTE *)this + 80);
  }
  if ( (v2 & 1) != 0 )
  {
    DataProviderManager::UnregisterReaderForDataSource(
      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL),
      *((_QWORD *)this + 8),
      *((_QWORD *)this + 9),
      this);
    *((_BYTE *)this + 80) &= ~1u;
  }
  CResource::~CResource(this);
}
