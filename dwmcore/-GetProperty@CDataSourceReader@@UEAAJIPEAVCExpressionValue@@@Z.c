int __fastcall CDataSourceReader::GetProperty(CDataSourceReader *this, unsigned int a2, struct CExpressionValue *a3)
{
  if ( (*((_BYTE *)this + 80) & 1) != 0 )
    return DataProviderManager::GetPropertyValue(
             *(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL),
             this,
             *((_QWORD *)this + 8),
             *((_QWORD *)this + 9),
             a2,
             a3);
  else
    return -2147467259;
}
