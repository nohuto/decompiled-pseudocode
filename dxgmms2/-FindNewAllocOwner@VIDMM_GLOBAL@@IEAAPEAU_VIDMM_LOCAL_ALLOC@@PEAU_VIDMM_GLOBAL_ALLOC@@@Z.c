struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::FindNewAllocOwner(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD **v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // r9

  v4 = (_QWORD **)((char *)a2 + 272);
  v5 = *v4;
  do
  {
    if ( v5 == v4 )
      return 0LL;
    v6 = v5 - 7;
    v5 = (_QWORD *)*v5;
  }
  while ( (v6[4] & 2) != 0 );
  v7 = *((_QWORD *)a2 + 15);
  if ( v7 )
  {
    VidMmRecordAlloc(this, a2, *((_QWORD *)a2 + 11), v7, *((_QWORD *)a2 + 2), 1);
    VidMmRecordAlloc(this, a2, v6, *((_QWORD *)a2 + 15), *((_QWORD *)a2 + 2), 0);
  }
  return (struct _VIDMM_LOCAL_ALLOC *)v6;
}
