bool __fastcall VIDMM_SEGMENT::RepairPendingResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1, unsigned __int64 *a2)
{
  bool result; // al

  if ( !a1 || !*((_QWORD *)a1 + 25) )
    return 0;
  *a2 = *((_QWORD *)a1 + 16);
  result = 1;
  *((_QWORD *)a1 + 23) = 0LL;
  *((_QWORD *)a1 + 25) = 0LL;
  return result;
}
