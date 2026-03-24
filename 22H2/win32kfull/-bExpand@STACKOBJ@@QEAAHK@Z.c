/*
 * XREFs of ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02B8AC4
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02B91B0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2)
{
  void *v2; // rsi
  unsigned int v3; // edi
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = (void *)*((_QWORD *)this + 4);
  v3 = a2 + 400;
  if ( a2 + 400 < a2 )
    return 0LL;
  v5 = PALLOCMEM2(v3, 1684817479LL, 0);
  *((_QWORD *)this + 4) = v5;
  if ( !v5 )
    return 0LL;
  memmove(v5, v2, *((unsigned int *)this + 1));
  v6 = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 4);
  *(_DWORD *)this = v3;
  v8 = v7 - (_QWORD)v2 + v6;
  v9 = *((_DWORD *)this + 1) == 0;
  *((_QWORD *)this + 1) = v8;
  if ( v9 )
  {
    *(_QWORD *)(v8 + 16) = v8;
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 16);
    if ( v10 != v7 )
    {
      do
      {
        v11 = v7 - (_QWORD)v2 + v10;
        *(_QWORD *)(v8 + 16) = v11;
        v8 = v11;
        v10 = *(_QWORD *)(v11 + 16);
      }
      while ( v10 != *((_QWORD *)this + 4) );
    }
  }
  Win32FreePool(v2);
  return 1LL;
}
