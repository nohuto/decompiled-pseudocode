__int64 __fastcall CDrawingContext::PushLight(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // r8
  int v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  v4 = a1 + 368;
  v16 = a2;
  v15 = 10;
  v8 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(a1 + 368, &v15);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18B9u, 0LL);
  }
  else
  {
    v11 = CLightStack::Push(a1 + 560, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x18BCu, 0LL);
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v4, 0LL, v14);
    }
  }
  return v10;
}
