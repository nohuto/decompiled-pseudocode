struct tagWND *__fastcall tagQ::UnlockFocusWnd(tagQ *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 60); i; i = *(_QWORD *)(i + 1528) )
    *(_QWORD *)(*(_QWORD *)(i + 448) + 32LL) = 0LL;
  return (struct tagWND *)HMAssignmentUnlockWorker((char *)this + 120);
}
