void __fastcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL *v1; // r8
  struct tagBWL *v2; // rdx
  struct tagBWL *v3; // r8

  if ( *(_QWORD *)a1 == 3LL )
    goto LABEL_9;
  v1 = (struct tagBWL *)gpbwlList;
  v2 = (struct tagBWL *)gpbwlList;
  if ( !gpbwlList )
    return;
  while ( v2 != a1 )
  {
    v1 = v2;
    v2 = *(struct tagBWL **)v2;
    if ( !v2 )
      return;
  }
  *(_QWORD *)v1 = *(_QWORD *)a1;
  v3 = pbwlCache;
  if ( pbwlCache )
  {
    if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2)
                                                                                                 - (_QWORD)pbwlCache
                                                                                                 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      pbwlCache = a1;
      a1 = v3;
    }
LABEL_9:
    Win32FreePool(a1);
    return;
  }
  pbwlCache = a1;
}
