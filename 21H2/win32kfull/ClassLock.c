/*
 * XREFs of ClassLock @ 0x1C00F56D8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v5; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v8; // eax

  v3 = *(_DWORD *)(a1 + 72);
  if ( v3 < 131068 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 72) = v3 + 1;
    if ( a1 == v5 )
    {
LABEL_3:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *a2 = *(_QWORD *)(ThreadWin32Thread + 16);
      *(_QWORD *)(ThreadWin32Thread + 16) = a2;
      a2[2] = ClassUnlockWorker;
      result = 1LL;
      a2[1] = a1;
      return result;
    }
    v8 = *(_DWORD *)(v5 + 72);
    if ( v8 < 131068 )
    {
      *(_DWORD *)(v5 + 72) = v8 + 1;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 72) = v3;
  }
  return 0LL;
}
