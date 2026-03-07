__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        struct CHolographicClient **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CHolographicClient *v9; // rax
  __int64 v10; // rcx
  struct CHolographicInteropTaskQueue *v11; // rdi
  CHolographicClient *v12; // rax
  CHolographicClient *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  struct CHolographicInteropTaskQueue *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v6 = CHolographicInteropTaskQueue::Create(&v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x14u, 0LL);
    v11 = v17;
  }
  else
  {
    v9 = (CHolographicClient *)operator new(0x120uLL);
    v11 = v17;
    if ( v9 && (v12 = CHolographicClient::CHolographicClient(v9, a1, v17), (v13 = v12) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CHolographicClient *)((char *)v12 + 8));
      v14 = CHolographicClient::Initialize(v13);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1Au, 0LL);
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v13);
      }
      else
      {
        *a2 = v11;
        v11 = 0LL;
        *a3 = v13;
      }
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x17u, 0LL);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v11 + 8LL))(v11);
  return v8;
}
