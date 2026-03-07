struct _PATHOBJ *__fastcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _PATHOBJ *result; // rax
  struct _PATHOBJ *v4; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (struct _PATHOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++result[52].cCurves;
    result = UMPDOBJ::GetCLIPOBJPath((UMPDOBJ *)result, a1);
    --v4[52].cCurves;
  }
  return result;
}
