__int64 __fastcall CBrushRenderingEffectFactory::CreateRenderingEffect(
        struct CBrushRenderingEffect *a1,
        __int128 *a2,
        __int64 *a3)
{
  unsigned int v6; // ebx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v8; // rcx
  int v9; // r10d
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( !v8 )
  {
    v8 = DefaultHeap::Alloc(0x110uLL);
    if ( !v8 )
      goto LABEL_8;
  }
  v10 = *a2;
  v11 = *((_QWORD *)a1 + 1);
  v15[1] = (char *)a1 + 16;
  v15[0] = 4LL;
  v16 = v10;
  v12 = CBrushRenderingEffect::CBrushRenderingEffect(v8, v11, &v16, v15);
  v13 = v12;
  if ( v12 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v12 + 8));
    *a3 = v13;
  }
  else
  {
LABEL_8:
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0x4Bu, 0LL);
  }
  return v6;
}
