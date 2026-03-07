void __fastcall CDrawingContext::PopClipBounds(CDrawingContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, &v7, a3);
  v5 = *((_DWORD *)this + 804);
  if ( v5 )
    *((_DWORD *)this + 804) = v5 - 1;
  v6 = *((_QWORD *)this + 113);
  LOBYTE(v4) = 1;
  v7 = 0LL;
  --*(_QWORD *)(v6 - 168);
  ((void (__fastcall *)(char *, _QWORD, __int64, __int128 *))CScopedClipStack::GetTopGpuClipInScope)(
    (char *)this + 896,
    0LL,
    v4,
    &v7);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(
                           (char *)this + 228,
                           &v7) )
    *((_BYTE *)this + 8169) = 1;
}
