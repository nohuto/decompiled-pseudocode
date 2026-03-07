__int64 __fastcall CHolographicViewer::AcquireBuffer(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 (__fastcall *v10)(PVOID, _QWORD, _QWORD); // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = this + 14;
  AcquireSRWLockShared(this + 14);
  Ptr = this[10].Ptr;
  if ( Ptr )
  {
    v10 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    v11 = v10(Ptr, 0LL, &v15);
    v9 = v11;
    if ( v11 < 0 )
    {
      v14 = 107;
    }
    else
    {
      v11 = (**v15)(v15, a2, a3);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      v14 = 108;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v14, 0LL);
    goto LABEL_10;
  }
  v8 = (int)this[13].Ptr;
  v9 = -2005270527;
  if ( v8 == 3 )
    v9 = -2005270490;
  MilInstrumentationCheckHR_MaybeFailFast(2289696806LL, 0LL, 0, v9, 0x68u, 0LL);
LABEL_10:
  ReleaseSRWLockShared(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return v9;
}
