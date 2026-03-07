__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  struct CResponseItem *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_DWORD *)this + 42);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_9;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 41) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 144, 8LL, 1LL, &v9);
    v4 = v6;
    if ( v6 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u, 0LL);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, 0x19Au, 0LL);
    return v4;
  }
  *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v2) = a2;
  *((_DWORD *)this + 42) = v3;
LABEL_4:
  (**(void (__fastcall ***)(struct CResponseItem *))v9)(v9);
  return v4;
}
