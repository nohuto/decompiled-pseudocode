__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  unsigned int v3; // r14d
  char v7; // al
  const struct D2D_SIZE_F *v8; // r12
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  __int64 v14; // rbx
  const struct CShape **v15; // rbx
  char v16; // r12
  const struct CShape *v17; // rbx
  __int64 v18; // rbx
  CShape *v19; // rcx
  int v20; // eax
  struct CShape *v21; // r14
  int ShapeDataWorker; // eax
  unsigned int v23; // ecx
  __int64 v24; // rbx
  int TrimmedShapeData; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  _DWORD v31[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v32; // [rsp+38h] [rbp-51h]
  int v33; // [rsp+40h] [rbp-49h]
  int v34; // [rsp+44h] [rbp-45h]
  __int64 v35; // [rsp+48h] [rbp-41h]
  __int128 v36; // [rsp+50h] [rbp-39h]
  int v37; // [rsp+60h] [rbp-29h]
  int v38; // [rsp+64h] [rbp-25h]
  int v39; // [rsp+68h] [rbp-21h]
  int v40; // [rsp+6Ch] [rbp-1Dh]
  int v41; // [rsp+70h] [rbp-19h]
  struct CShape *v42; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v43[6]; // [rsp+88h] [rbp-1h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 136) )
  {
    v14 = *((_QWORD *)this + 2);
    if ( GetCurrentThreadId() == *(_DWORD *)(v14 + 680) )
    {
      v15 = (const struct CShape **)((char *)this + 104);
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        v16 = 1;
        ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 104));
        v3 = ShapeDataWorker;
        if ( ShapeDataWorker < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, ShapeDataWorker, 0xAAu, 0LL);
          return v3;
        }
        *((_DWORD *)this + 8) &= ~1u;
      }
      else
      {
        v16 = 0;
      }
      if ( !*((_BYTE *)this + 137) )
      {
        v17 = *v15;
        if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
          (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
        *((_BYTE *)a3 + 8) = 0;
        *(_QWORD *)a3 = v17;
        *((_BYTE *)a3 + 8) = 0;
        return v3;
      }
      if ( v16 )
        goto LABEL_33;
      if ( *((_BYTE *)this + 138) || !*((_QWORD *)this + 15) )
      {
        v15 = (const struct CShape **)((char *)this + 104);
LABEL_33:
        TrimmedShapeData = CGeometry::GetTrimmedShapeData(this, *v15, (CGeometry *)((char *)this + 120));
        v3 = TrimmedShapeData;
        if ( TrimmedShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, TrimmedShapeData, 0xB2u, 0LL);
          return v3;
        }
        *((_BYTE *)this + 138) = 0;
      }
LABEL_31:
      v24 = *((_QWORD *)this + 15);
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v24;
      *((_BYTE *)a3 + 8) = 0;
      return v3;
    }
  }
  v7 = *((_BYTE *)this + 136);
  if ( v7 || (*((_BYTE *)this + 32) & 1) != 0 || (v18 = *((_QWORD *)this + 13)) == 0 )
  {
    v8 = 0LL;
    if ( v7 )
      v8 = a2;
    v9 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 216LL))(
           this,
           v8,
           a3);
    v11 = v9;
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xFAu, 0LL);
      goto LABEL_51;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 232LL))(this) && *(_QWORD *)a3 )
    {
      (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)this + 224LL))(
        this,
        v8,
        v43);
      v19 = *(CShape **)a3;
      v31[0] = v43[0];
      v31[1] = v43[1];
      v41 = 5124;
      v33 = v43[2];
      v34 = v43[3];
      v37 = v43[4];
      v36 = _xmm;
      v38 = v43[5];
      v40 = (int)FLOAT_1_0;
      v32 = 0LL;
      v35 = 0LL;
      v39 = 0;
      v20 = CShape::CopyShape(v19, (const struct CMILMatrix *)v31, &v42);
      v11 = v20;
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v20, 0x108u, 0LL);
        goto LABEL_51;
      }
      v21 = v42;
      if ( *((_BYTE *)a3 + 8) )
      {
        v12 = *(void (__fastcall ****)(_QWORD, __int64))a3;
        if ( *(_QWORD *)a3 )
          (**v12)(v12, 1LL);
      }
      *(_QWORD *)a3 = v21;
      *((_BYTE *)a3 + 8) = 1;
    }
    v3 = v11;
    if ( v11 >= 0 )
    {
      if ( *((_BYTE *)this + 137) )
      {
        v29 = CGeometry::GetTrimmedShapeData(this, *(const struct CShape **)a3, a3);
        v3 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xCAu, 0LL);
      }
      return v3;
    }
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, v11, 0xC6u, 0LL);
    return v3;
  }
  if ( *((_BYTE *)this + 137) )
  {
    if ( !*((_BYTE *)this + 138) && *((_QWORD *)this + 15) )
      goto LABEL_31;
    v27 = CGeometry::GetTrimmedShapeData(this, *((const struct CShape **)this + 13), a3);
    v3 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xD3u, 0LL);
  }
  else
  {
    if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
      (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
    *(_QWORD *)a3 = v18;
    *((_BYTE *)a3 + 8) = 0;
  }
  return v3;
}
