/*
 * XREFs of ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C034B2D8
 * Callers:
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C01A6AC4 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::FreeHostHandle(DXGSYNCOBJECT *this, int a2)
{
  struct _KTHREAD **v4; // rdi
  void **v5; // rbx
  _DWORD *v6; // rcx
  void **v7; // rax
  void **v8; // rdx

  if ( (*((_BYTE *)this + 204) & 1) != 0 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 32);
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v5 = (void **)((char *)this + 104);
    v6 = *v5;
    if ( *v5 != v5 )
    {
      while ( 1 )
      {
        v7 = *(void ***)v6;
        if ( v6[4] == a2 )
          break;
        v6 = *(_DWORD **)v6;
        if ( v7 == v5 )
          goto LABEL_6;
      }
      if ( v7[1] != v6 || (v8 = (void **)*((_QWORD *)v6 + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      operator delete(v6);
    }
LABEL_6:
    DXGFASTMUTEX::Release(v4);
  }
  else
  {
    *((_DWORD *)this + 24) = 0;
  }
}
