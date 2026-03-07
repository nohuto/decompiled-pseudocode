int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C3ED88);
  v2 = _InterlockedOr64(&qword_140C3ED88, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C3ED98, 0, 0);
  return v2;
}
