void __fastcall CInternalMilCmdConnection::~CInternalMilCmdConnection(union _SLIST_HEADER *this)
{
  this->Alignment = (ULONGLONG)&CInternalMilCmdConnection::`vftable';
  CInternalMilCmdConnection::FreeBatchPool(this);
  CChannelTable::~CChannelTable((CChannelTable *)((char *)&this[3].HeaderX64 + 8));
  CConnection::~CConnection((CConnection *)this);
}
