/*
 * XREFs of ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x1C012E824
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall InputTransform::ClearTransforms(InputTransform *this, struct tagWND *a2)
{
  __int64 v2; // rdi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  CompositionObject *v8; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    v4 = (_QWORD **)(v2 + 8);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      Win32FreePool(v5);
    }
    v8 = *(CompositionObject **)(*((_QWORD *)this + 34) + 96LL);
    if ( v8 )
    {
      CompositionObject::Release(v8);
      *(_QWORD *)(*((_QWORD *)this + 34) + 96LL) = 0LL;
    }
    Win32FreePool(*((void **)this + 34));
    *((_QWORD *)this + 34) = 0LL;
  }
}
