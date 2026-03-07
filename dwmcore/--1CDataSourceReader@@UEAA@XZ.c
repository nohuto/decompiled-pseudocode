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
