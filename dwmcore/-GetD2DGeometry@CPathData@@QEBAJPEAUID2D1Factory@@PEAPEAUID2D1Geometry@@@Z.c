__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 *v6; // r14
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, struct ID2D1Geometry **); // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, struct ID2D1GeometrySink **); // rdi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct ID2D1Geometry *v20; // rax
  struct ID2D1Geometry *v22; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1GeometrySink *v23; // [rsp+68h] [rbp+38h] BYREF

  v23 = a2;
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v22 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 5);
  if ( !v3 )
  {
    v8 = *v6;
    v23 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v8 + 80);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v22);
    v10 = v9(v6, &v22);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x67u, 0LL);
    }
    else
    {
      v12 = (__int64)v22;
      v13 = *(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v22 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      v14 = v13(v12, &v23);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x68u, 0LL);
      }
      else
      {
        v16 = CPathData::PushIntoSink(this, v23);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x6Au, 0LL);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v23 + 72LL))(v23);
          v4 = v18;
          if ( v18 >= 0 )
          {
            if ( v6 == *((__int64 **)this + 5) )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, (signed __int64)v22, 0LL) )
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=((__int64 *)&v22, *((_QWORD *)this + 8));
              else
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
            goto LABEL_12;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x6Cu, 0LL);
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=((__int64 *)&v22, *((_QWORD *)this + 8));
LABEL_12:
  v20 = v22;
  v22 = 0LL;
  *a3 = v20;
LABEL_18:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v22);
  return v4;
}
