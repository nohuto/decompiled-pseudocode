__int64 __fastcall CDrawingContext::PushClippingScope(__int64 a1, __int64 a2, char a3, char a4, struct CMILMatrix *a5)
{
  unsigned int v5; // ebx
  char v6; // si
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    v11 = CDrawingContext::FlushAllDeferredClipping((CDrawingContext *)a1);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xBFFu, 0LL);
      return v5;
    }
  }
  CScopedClipStack::GetTopGpuClipInScope((CScopedClipStack *)(a1 + 896), 0LL, a4 ^ 1);
  if ( a2 )
  {
    LODWORD(v16) = 4;
    *((_QWORD *)&v16 + 1) = a2;
    v13 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)(a1 + 368), &v16);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0Du, 0LL);
      return v5;
    }
    v6 = 1;
  }
  CScopedClipStack::EnterClippingScope((CScopedClipStack *)(a1 + 896), a3, (const struct CMILMatrix *)(a1 + 96), a5);
  if ( a4 )
    *(_BYTE *)(a1 + 8170) = 0;
  if ( (v5 & 0x80000000) != 0 && v6 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)(a1 + 368), 0LL);
  return v5;
}
