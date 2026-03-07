__int64 __fastcall CHwndBitmapProp::Initialize(CHwndBitmapProp *this)
{
  CompositionObject **v1; // rsi
  int SharedSystemVisualBitmapObject; // edi
  CompositionObject *v3; // rcx
  void *v4; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CompositionObject **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    KeBugCheck(0xC0000001);
  SharedSystemVisualBitmapObject = CreateSharedSystemVisualBitmapObject((char *)this + 24);
  if ( SharedSystemVisualBitmapObject >= 0 )
  {
    v3 = *v1;
    v6 = 0LL;
    SharedSystemVisualBitmapObject = CompositionObject::OpenDwmHandle(v3, &v6);
    if ( SharedSystemVisualBitmapObject >= 0 )
    {
      v4 = (void *)ReferenceDwmApiPort();
      DwmAsyncCreateDCompositionVisualBitmapForHwnd(v4);
    }
  }
  return (unsigned int)SharedSystemVisualBitmapObject;
}
