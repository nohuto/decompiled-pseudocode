__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // bp
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // edi
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r8
  _OWORD v21[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  if ( a5 )
  {
    *((_QWORD *)&v21[0] + 1) = a2;
    LODWORD(v21[0]) = 6;
    v9 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v9, 0xFF9u, 0LL);
      return v10;
    }
    v5 = 1;
  }
  *(_QWORD *)&v21[0] = a3;
  v11 = *((_DWORD *)this + 130);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v10 = -2147024362;
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v13, 0xFFEu, 0LL);
    goto LABEL_15;
  }
  v13 = 0;
  if ( v12 <= *((_DWORD *)this + 129) )
  {
    *(_QWORD *)(*((_QWORD *)this + 62) + 8LL * v11) = a3;
    *((_DWORD *)this + 130) = v12;
    goto LABEL_7;
  }
  v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 496, 8LL, 1LL, v21);
  v13 = v18;
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xC0u, 0LL);
    goto LABEL_14;
  }
LABEL_7:
  v10 = v13;
  if ( !a4
    || (v15 = (*(__int64 (__fastcall **)(struct CLayer *, CDrawingContext *))(*(_QWORD *)a3 + 16LL))(a3, this),
        v10 = v15,
        v15 >= 0) )
  {
    ++dword_1803E29F8;
    ++dword_1803E2AA8;
    return v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1003u, 0LL);
  --*((_DWORD *)this + 130);
LABEL_15:
  if ( v5 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, 0LL, v20);
  return v10;
}
