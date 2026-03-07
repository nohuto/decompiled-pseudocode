struct _CLIPOBJ *NtGdiEngCreateClip()
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _CLIPOBJ *result; // rax
  struct _CLIPOBJ *v2; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (struct _CLIPOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v2 = result;
  if ( result )
  {
    ++result[17].rclBounds.right;
    result = UMPDOBJ::CreateCLIPOBJ((UMPDOBJ *)result);
    --v2[17].rclBounds.right;
  }
  return result;
}
