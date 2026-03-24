/*
 * XREFs of ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C015CEF4
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C012424C (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0008718 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESSSHAREDACCESS@@QEAA@XZ @ 0x1C015CF6C (--1DXGPROCESSSHAREDACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(DXGSHAREDRESOURCEACCESS *this, __int64 a2)
{
  _QWORD **v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi

  v3 = (_QWORD **)((char *)this + 48);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    v6 = v4 - 1;
    *v3 = v5;
    v5[1] = v3;
    if ( v4 != (_QWORD *)8 )
    {
      DXGPROCESSSHAREDACCESS::~DXGPROCESSSHAREDACCESS((DXGPROCESSSHAREDACCESS *)(v4 - 1));
      operator delete(v6);
    }
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSHAREDRESOURCEACCESS *)((char *)this + 8), a2);
}
