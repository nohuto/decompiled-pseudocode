/*
 * XREFs of HmgFreeDcAttr @ 0x1C002B44C
 * Callers:
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C002B6CC (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0037AB0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 *     GdiThreadCallout @ 0x1C00826D0 (GdiThreadCallout.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v5 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v4);
      v7 = v5 + 192;
      v8 = *(_QWORD **)(v5 + 192);
      if ( v8 == (_QWORD *)(v5 + 192) || *((_DWORD *)v8 + 4) == 11 )
      {
        v8 = PALLOCMEM2(0x70uLL, 1717789767LL, 0);
        if ( !v8 )
          return GreReleaseHmgrSemaphore(v6);
        v9 = *(_QWORD *)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
          __fastfail(3u);
        *v8 = v9;
        v8[1] = v7;
        *(_QWORD *)(v9 + 8) = v8;
        *(_QWORD *)v7 = v8;
        *((_DWORD *)v8 + 4) = 0;
      }
      v8[(unsigned int)(*((_DWORD *)v8 + 4))++ + 3] = a1;
      *(_QWORD *)(v5 + 40) = a1;
      return GreReleaseHmgrSemaphore(v6);
    }
  }
  return result;
}
