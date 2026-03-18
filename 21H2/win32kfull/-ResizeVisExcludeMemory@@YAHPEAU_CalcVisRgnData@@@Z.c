/*
 * XREFs of ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0141050
 * Callers:
 *     ?ExcludeWindowRects@@YAHPEBUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C0048F40 (-ExcludeWindowRects@@YAHPEBUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall ResizeVisExcludeMemory(struct _CalcVisRgnData *a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rsi
  const void *v5; // rbp

  v2 = *((_DWORD *)a1 + 2) + 30;
  result = Win32AllocPoolZInit(8LL * v2, 1769370453LL);
  v4 = result;
  if ( result )
  {
    v5 = (const void *)*((_QWORD *)a1 + 2);
    memmove((void *)result, v5, 8LL * *((int *)a1 + 2));
    if ( *(_DWORD *)a1 )
      Win32FreePool(v5);
    else
      *(_DWORD *)a1 = 1;
    *((_DWORD *)a1 + 2) = v2;
    result = 1LL;
    *((_QWORD *)a1 + 2) = v4;
  }
  return result;
}
