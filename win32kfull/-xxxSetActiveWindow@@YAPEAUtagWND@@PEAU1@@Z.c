struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rbx

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != *(_QWORD *)(gptiCurrent + 432LL) )
    return 0LL;
  v1 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  if ( v1 )
    v2 = *v1;
  else
    LODWORD(v2) = 0;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1);
  return (struct tagWND *)HMValidateHandleNoSecure(v2, 1);
}
