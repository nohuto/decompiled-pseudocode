__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct CD3DDevice *a2, struct CD2DGenericInk **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CD2DGenericInk *v18; // rax
  struct CD2DGenericInk *v20; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0LL;
  v20 = 0LL;
  v6 = CD2DContext::CreateGenericInk((struct CD3DDevice *)((char *)a2 + 16), &v20);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1C2u, 0LL);
    v9 = (volatile signed __int32 *)v20;
  }
  else
  {
    v9 = (volatile signed __int32 *)v20;
    v10 = *((_QWORD *)v20 + 10);
    if ( *((_DWORD *)this + 58)
      && (v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 40LL))(
                  *((_QWORD *)v20 + 10),
                  *((_QWORD *)this + 26)),
          v8 = v11,
          v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1C8u, 0LL);
    }
    else
    {
      v13 = *((_DWORD *)this + 66);
      if ( v13
        && (v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v10 + 48LL))(
                    v10,
                    0LL,
                    *((_QWORD *)this + 30),
                    v13 / *((_DWORD *)this + 68),
                    *((_DWORD *)this + 69),
                    *((_DWORD *)this + 68),
                    0LL),
            v8 = v14,
            v14 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1D4u, 0LL);
      }
      else
      {
        v16 = CGenericInk::SetContextMsgRoutingInfo(this, a2);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1D7u, 0LL);
        }
        else
        {
          v18 = (struct CD2DGenericInk *)v9;
          v9 = 0LL;
          *a3 = v18;
          (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
        }
      }
    }
  }
  if ( v9 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v9);
  return v8;
}
