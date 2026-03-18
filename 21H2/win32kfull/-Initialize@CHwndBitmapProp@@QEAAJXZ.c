/*
 * XREFs of ?Initialize@CHwndBitmapProp@@QEAAJXZ @ 0x1C02DBAB0
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C024A2D0 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     DwmAsyncCreateDCompositionVisualBitmapForHwnd @ 0x1C0271D90 (DwmAsyncCreateDCompositionVisualBitmapForHwnd.c)
 */

__int64 __fastcall CHwndBitmapProp::Initialize(CHwndBitmapProp *this)
{
  CompositionObject **v1; // rsi
  __int64 v2; // rbx
  int SharedSystemVisualBitmapObject; // edi
  CompositionObject *v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rsi
  void *v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CompositionObject **)((char *)this + 24);
  v2 = 0LL;
  if ( *((_QWORD *)this + 3) )
    KeBugCheck(0xC0000001);
  SharedSystemVisualBitmapObject = CreateSharedSystemVisualBitmapObject((char *)this + 24);
  if ( SharedSystemVisualBitmapObject >= 0 )
  {
    v5 = *v1;
    v11 = 0LL;
    SharedSystemVisualBitmapObject = CompositionObject::OpenDwmHandle(v5, (void **)&v11);
    if ( SharedSystemVisualBitmapObject >= 0 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 2);
      v8 = v11;
      if ( v7 )
        v2 = *v7;
      v9 = (void *)ReferenceDwmApiPort(v6);
      DwmAsyncCreateDCompositionVisualBitmapForHwnd(v9, v2, v8);
    }
  }
  return (unsigned int)SharedSystemVisualBitmapObject;
}
