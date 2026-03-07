struct tagKL *__fastcall LockKbdLayoutListHead(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  __int64 *v2; // rax
  int v3; // edx
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = (__int64 *)a2;
  if ( a1 )
  {
    v2 = (__int64 *)((char *)a1 + 72);
    v3 = 1;
  }
  else
  {
    v2 = &gspklWinstaLessSessionLayouts;
    v3 = 0;
  }
  v5[0] = v2;
  return (struct tagKL *)HMAssignmentLock(v5, v3);
}
