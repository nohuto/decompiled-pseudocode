__int64 __fastcall CHolographicInteropTaskQueue::Create(struct CHolographicInteropTaskQueue **a1)
{
  CHolographicInteropTaskQueue *v2; // rax
  __int64 v3; // rcx
  CHolographicInteropTaskQueue *v4; // rax
  struct CHolographicInteropTaskQueue *v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  void (__fastcall **v9)(struct CHolographicInteropTaskQueue *); // rcx

  v2 = (CHolographicInteropTaskQueue *)operator new(0x40uLL);
  if ( v2 && (v4 = CHolographicInteropTaskQueue::CHolographicInteropTaskQueue(v2), (v5 = v4) != 0LL) )
  {
    v6 = CHolographicInteropTaskQueue::Initialize(v4);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x10u, 0LL);
      (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      v9 = *(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v5;
      *a1 = v5;
      (*v9)(v5);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0xEu, 0LL);
  }
  return v8;
}
