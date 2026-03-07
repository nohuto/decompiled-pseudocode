bool __fastcall CInternalMilCmdConnection::ClearBatchCaches(union _SLIST_HEADER *this, DWORD a2)
{
  if ( *((_BYTE *)&this[11].HeaderX64 + 4) && GetTickCount() - LODWORD(this[11].Alignment) >= a2 )
  {
    CInternalMilCmdConnection::FreeBatchPool(this);
    *((_BYTE *)&this[11].HeaderX64 + 4) = 0;
  }
  return *((_BYTE *)&this[11].HeaderX64 + 4) == 0;
}
