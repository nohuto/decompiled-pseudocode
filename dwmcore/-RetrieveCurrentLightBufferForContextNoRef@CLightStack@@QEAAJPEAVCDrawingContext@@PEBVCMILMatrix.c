__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v4; // r12d
  unsigned int v7; // ebx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  int DestLightsArray; // eax
  unsigned int v13; // ecx
  int v14; // r13d
  struct CHwLightCollectionBuffer **v15; // rsi
  unsigned int v16; // edx
  const struct LightInfo *v17; // rcx
  struct CDrawingContext *v18; // r13
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  char *v25; // rdi
  int v26; // eax
  unsigned int v27; // ecx
  bool v28[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct CDrawingContext *v29; // [rsp+48h] [rbp-B8h]
  struct CHwLightCollectionBuffer **v30; // [rsp+50h] [rbp-B0h]
  void *Buf2[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+6Ch] [rbp-94h]
  _BYTE v34[24]; // [rsp+78h] [rbp-88h] BYREF
  struct LightInfo *v35[2]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A4h] [rbp-5Ch]
  unsigned int v38; // [rsp+A8h] [rbp-58h]
  _BYTE v39[720]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v40[10]; // [rsp+380h] [rbp+280h] BYREF
  int v41; // [rsp+428h] [rbp+328h]
  int v42; // [rsp+46Ch] [rbp+36Ch]

  v4 = 0;
  v30 = a4;
  *a4 = 0LL;
  v29 = a2;
  v7 = 0;
  if ( !*((_DWORD *)this + 24) && *((_DWORD *)this + 6) )
  {
    v9 = *((_QWORD *)a2 + 1007);
    Buf2[0] = v34;
    v28[0] = 1;
    Buf2[1] = v34;
    v32 = 3;
    v33 = 3LL;
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    DestLightsArray = CLightStack::GetDestLightsArray((__int64 *)this, v10, v9, v11, 1, (__int64)Buf2, v28);
    v7 = DestLightsArray;
    if ( DestLightsArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, DestLightsArray, 0x8Bu, 0LL);
      goto LABEL_11;
    }
    if ( (unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 112, a3)
      && (v14 = HIDWORD(v33), *((_DWORD *)this + 52) == HIDWORD(v33))
      && !memcmp_0(*((const void **)this + 23), Buf2[0], 8LL * HIDWORD(v33)) )
    {
      v15 = (struct CHwLightCollectionBuffer **)((char *)this + 104);
    }
    else
    {
      v15 = (struct CHwLightCollectionBuffer **)((char *)this + 104);
      ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
      v14 = HIDWORD(v33);
    }
    if ( *v15 )
      goto LABEL_10;
    v16 = 0;
    v35[1] = (struct LightInfo *)v39;
    v36 = 3;
    v17 = (const struct LightInfo *)v39;
    v37 = 3;
    v35[0] = (struct LightInfo *)v39;
    v38 = 0;
    if ( v14 )
    {
      v18 = v29;
      while ( 1 )
      {
        v41 = 0;
        v42 = 0;
        v19 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _OWORD *))(**((_QWORD **)Buf2[0] + v4) + 208LL))(
                *((_QWORD *)Buf2[0] + v4),
                v18,
                a3,
                v40);
        v7 = v19;
        if ( v19 < 0 )
          break;
        v21 = DynArray<LightInfo,0>::AddMultipleAndSet((__int64)v35, v40);
        v7 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xA2u, 0LL);
          goto LABEL_26;
        }
        if ( ++v4 >= HIDWORD(v33) )
        {
          v16 = v38;
          v17 = v35[0];
          goto LABEL_19;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA0u, 0LL);
    }
    else
    {
LABEL_19:
      v23 = CHwLightCollectionBuffer::Create(v17, v16, v28[0], v15);
      v7 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xAAu, 0LL);
      }
      else
      {
        *((_OWORD *)this + 7) = *(_OWORD *)a3;
        *((_OWORD *)this + 8) = *((_OWORD *)a3 + 1);
        *((_OWORD *)this + 9) = *((_OWORD *)a3 + 2);
        *((_OWORD *)this + 10) = *((_OWORD *)a3 + 3);
        *((_DWORD *)this + 44) = *((_DWORD *)a3 + 16);
        v25 = (char *)this + 184;
        if ( *(_QWORD *)v25 != *((_QWORD *)v25 + 1) )
        {
          operator delete(*(void **)v25);
          *(_QWORD *)v25 = 0LL;
        }
        *(_QWORD *)(v25 + 20) = v33;
        v26 = DynArrayImpl<0>::DetachData((__int64)Buf2, 8u, v25);
        v7 = v26;
        if ( v26 >= 0 )
        {
          DynArrayImpl<0>::~DynArrayImpl<0>(v35);
LABEL_10:
          *v30 = *v15;
LABEL_11:
          DynArrayImpl<0>::~DynArrayImpl<0>(Buf2);
          return v7;
        }
        *(_QWORD *)(v25 + 20) = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xADu, 0LL);
      }
    }
LABEL_26:
    DynArrayImpl<0>::~DynArrayImpl<0>(v35);
    goto LABEL_11;
  }
  return v7;
}
