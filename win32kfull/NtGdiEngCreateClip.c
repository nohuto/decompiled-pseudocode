/*
 * XREFs of NtGdiEngCreateClip @ 0x1C02CBB20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1C029B458 (-CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ.c)
 */

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
