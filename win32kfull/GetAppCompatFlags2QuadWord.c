__int64 __fastcall GetAppCompatFlags2QuadWord(struct tagTHREADINFO *a1)
{
  if ( !a1 )
    a1 = PtiCurrentShared(0LL);
  return *((_QWORD *)a1 + 81);
}
