__int64 __fastcall GetAppImeCompatFlags(struct tagTHREADINFO *a1)
{
  if ( !a1 )
    a1 = PtiCurrentShared(0LL);
  return *(unsigned int *)(*((_QWORD *)a1 + 53) + 768LL);
}
