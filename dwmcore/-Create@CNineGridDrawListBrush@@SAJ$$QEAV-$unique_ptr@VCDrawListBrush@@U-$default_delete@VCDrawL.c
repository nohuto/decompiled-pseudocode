__int64 __fastcall CNineGridDrawListBrush::Create(
        struct CNineGridDrawListBrush *a1,
        int a2,
        int a3,
        char a4,
        CNineGridDrawListBrush **a5)
{
  int v8; // ebp
  struct CObjectCache *ObjectCache; // r10
  _QWORD *v10; // rax
  int v11; // ecx
  CNineGridDrawListBrush *v12; // rax
  unsigned int v13; // ecx
  CNineGridDrawListBrush *v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi

  v8 = (int)a1;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( (v10 || (v10 = DefaultHeap::Alloc(0x240uLL)) != 0LL)
    && (v12 = (CNineGridDrawListBrush *)CNineGridDrawListBrush::CNineGridDrawListBrush((_DWORD)v10, v8, a2, a3, a4),
        (v14 = v12) != 0LL) )
  {
    v15 = CNineGridDrawListBrush::Initialize(v12);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x29u, 0LL);
      CNineGridDrawListBrush::`scalar deleting destructor'(v14, 1);
    }
    else
    {
      *a5 = v14;
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x27u, 0LL);
  }
  return v17;
}
