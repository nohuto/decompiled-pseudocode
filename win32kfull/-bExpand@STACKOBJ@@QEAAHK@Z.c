/*
 * XREFs of ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02D551C
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02D5C70 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2, __int64 a3, __int64 a4)
{
  void *v4; // rsi
  unsigned int v5; // edi
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = (void *)*((_QWORD *)this + 4);
  v5 = a2 + 400;
  if ( a2 + 400 < a2 )
    return 0LL;
  if ( a2 == -400 )
  {
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  v7 = (void *)Win32AllocPool(v5, 1684817479LL, a3, a4);
  *((_QWORD *)this + 4) = v7;
  if ( !v7 )
    return 0LL;
  memmove(v7, v4, *((unsigned int *)this + 1));
  v8 = *((_QWORD *)this + 1);
  v9 = *((_QWORD *)this + 4);
  *(_DWORD *)this = v5;
  v10 = v9 - (_QWORD)v4 + v8;
  v11 = *((_DWORD *)this + 1) == 0;
  *((_QWORD *)this + 1) = v10;
  if ( v11 )
  {
    *(_QWORD *)(v10 + 16) = v10;
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 16);
    if ( v12 != v9 )
    {
      do
      {
        v13 = v9 - (_QWORD)v4 + v12;
        *(_QWORD *)(v10 + 16) = v13;
        v10 = v13;
        v12 = *(_QWORD *)(v13 + 16);
      }
      while ( v12 != *((_QWORD *)this + 4) );
    }
  }
  Win32FreePool(v4);
  return 1LL;
}
