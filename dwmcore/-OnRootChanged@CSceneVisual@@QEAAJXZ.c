__int64 __fastcall CSceneVisual::OnRootChanged(CSceneVisual *this)
{
  __int64 v1; // rsi
  CSceneWorld *v3; // rax
  __int64 v4; // rcx
  CSceneWorld *v5; // rax
  struct CContent *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  CSceneNode *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 88);
  if ( !v1 )
  {
    v14 = CVisual::SetContent((struct CResource **)this, 0LL);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x31u, 0LL);
      return v9;
    }
    goto LABEL_15;
  }
  if ( !*((_QWORD *)this + 32) )
  {
    v3 = (CSceneWorld *)DefaultHeap::AllocClear(0xD0uLL);
    if ( v3 )
    {
      v5 = CSceneWorld::CSceneWorld(v3, *((struct CComposition **)this + 2), this);
      v17 = (__int64)v5;
      v6 = v5;
      if ( v5 )
      {
        (*(void (__fastcall **)(CSceneWorld *))(*(_QWORD *)v5 + 8LL))(v5);
        v7 = CVisual::SetContent((struct CResource **)this, v6);
        v9 = v7;
        if ( v7 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
          goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x26u, 0LL);
LABEL_13:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
        return v9;
      }
    }
    else
    {
      v17 = 0LL;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x24u, 0LL);
    goto LABEL_13;
  }
LABEL_7:
  v10 = *((_QWORD *)this + 32);
  if ( !v10 || (v11 = *(CSceneNode **)(v10 + 96), v17 = v1, v12 = CSceneNode::SetChildren(v11), v9 = v12, v12 >= 0) )
  {
LABEL_15:
    (*(void (__fastcall **)(CSceneVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2Cu, 0LL);
  return v9;
}
