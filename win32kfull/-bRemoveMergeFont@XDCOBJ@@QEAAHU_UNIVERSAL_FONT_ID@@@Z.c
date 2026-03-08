/*
 * XREFs of ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02C2F6C
 * Callers:
 *     NtGdiRemoveMergeFont @ 0x1C027B140 (NtGdiRemoveMergeFont.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 */

_BOOL8 __fastcall XDCOBJ::bRemoveMergeFont(Gre::Base *a1, __int64 a2)
{
  BOOL v2; // ebx
  Gre::Base *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // r9
  __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  struct Gre::Base::SESSION_GLOBALS *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 2072LL);
  v5 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = v4;
      if ( v2 )
        break;
      v7 = *v4;
      if ( *(_DWORD *)(*v4 + 136LL) == (_DWORD)a2 && (v8 = *(_DWORD *)(v7 + 208), v9 = 0, v8) )
      {
        a1 = (Gre::Base *)(v7 + 216);
        while ( *(_DWORD *)(*(_QWORD *)a1 + 88LL) != HIDWORD(a2) )
        {
          ++v9;
          a1 = (Gre::Base *)((char *)a1 + 8);
          if ( v9 >= v8 )
            goto LABEL_8;
        }
        v2 = 1;
      }
      else
      {
LABEL_8:
        v4 = (_QWORD *)v4[1];
      }
      if ( v2 )
        v6 = v5;
      v5 = v6;
      if ( !v4 )
      {
        if ( !v2 )
          return v2;
        break;
      }
    }
    v10 = Gre::Base::Globals(a1);
    GreAcquireSemaphore(*((_QWORD *)v10 + 6));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v10 + 6), 14LL);
    v11 = *((_QWORD *)v10 + 796);
    v12 = *(_QWORD *)(*v4 + 128LL);
    --*(_DWORD *)(*v4 + 64LL);
    v16[0] = v12;
    v13 = 64;
    if ( v12 != v11 )
      v13 = 32;
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v16, (struct PFF *)*v4, 0LL, v13);
    if ( v2 )
    {
      v14 = v4[1];
      if ( v4 == *(_QWORD **)(*(_QWORD *)v3 + 2072LL) )
        *(_QWORD *)(*(_QWORD *)v3 + 2072LL) = v14;
      else
        v5[1] = v14;
      Win32FreePool(v4);
    }
  }
  return v2;
}
