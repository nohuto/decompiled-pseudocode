struct IBatchList *__fastcall DirectComposition::CBatch::CBatchListProxy::GetNext(
        DirectComposition::CBatch::CBatchListProxy *this)
{
  return (struct IBatchList *)((**((_QWORD **)this + 1) + 120LL) & -(__int64)(**((_QWORD **)this + 1) != 0LL));
}
