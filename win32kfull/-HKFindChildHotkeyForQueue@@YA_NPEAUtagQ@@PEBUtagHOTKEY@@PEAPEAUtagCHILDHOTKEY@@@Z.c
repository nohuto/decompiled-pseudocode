char __fastcall HKFindChildHotkeyForQueue(struct tagQ *a1, const struct tagHOTKEY *a2, struct tagCHILDHOTKEY **a3)
{
  char *v3; // r9
  _QWORD *i; // rdx

  *a3 = 0LL;
  v3 = (char *)a2 + 56;
  for ( i = (_QWORD *)*((_QWORD *)a2 + 7); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v3 )
      return 0;
    if ( *(struct tagQ **)(*(i - 4) + 432LL) == a1 )
      break;
  }
  *a3 = (struct tagCHILDHOTKEY *)(i - 4);
  return 1;
}
