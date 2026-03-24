/*
 * XREFs of ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C029105C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::FreeHostHandle(DXGSYNCOBJECT *this, int a2)
{
  struct _KTHREAD **v4; // rdi
  __int64 v5; // rdx
  void **v6; // rbx
  _DWORD *v7; // rcx
  void **v8; // rax
  void **v9; // rdx

  if ( (*((_BYTE *)this + 196) & 1) != 0 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 32);
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v6 = (void **)((char *)this + 96);
    v7 = *v6;
    if ( *v6 != v6 )
    {
      while ( 1 )
      {
        v8 = *(void ***)v7;
        if ( v7[4] == a2 )
          break;
        v7 = *(_DWORD **)v7;
        if ( v8 == v6 )
          goto LABEL_6;
      }
      if ( v8[1] != v7 || (v9 = (void **)*((_QWORD *)v7 + 1), *v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      operator delete(v7);
    }
LABEL_6:
    DXGFASTMUTEX::Release(v4, v5);
  }
  else
  {
    *((_DWORD *)this + 22) = 0;
  }
}
