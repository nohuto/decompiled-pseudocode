/*
 * XREFs of ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02D55E8
 * Callers:
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02D590C (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02D5C70 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C02D5DB4 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpandScanline(STACKOBJ *this, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int *v6; // rbp
  unsigned int v7; // esi
  _DWORD *v8; // rax
  _DWORD *v9; // rdi

  v4 = a3;
  if ( (_DWORD)a3 == 1 )
    v6 = (unsigned int *)*((_QWORD *)this + 3);
  else
    v6 = (unsigned int *)*((_QWORD *)this + 2);
  v7 = a2 + 160;
  if ( a2 + 160 < a2 )
    return 0LL;
  if ( a2 == -160 )
    return 0LL;
  v8 = (_DWORD *)Win32AllocPool(v7, 1684817479LL, a3, a4);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  memmove(v8, v6, v6[2]);
  v9[2] = v7;
  Win32FreePool(v6);
  if ( v4 == 1 )
    *((_QWORD *)this + 3) = v9;
  else
    *((_QWORD *)this + 2) = v9;
  return 1LL;
}
