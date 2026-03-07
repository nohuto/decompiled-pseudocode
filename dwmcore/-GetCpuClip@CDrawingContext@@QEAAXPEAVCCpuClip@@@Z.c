void __fastcall CDrawingContext::GetCpuClip(CDrawingContext *this, struct CCpuClip *a2)
{
  _OWORD *v4; // r9
  __int64 v5; // rax
  _OWORD *v6; // r15
  struct _LIST_ENTRY *v7; // rdi
  _OWORD *v8; // r12
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  struct _LIST_ENTRY *v12; // r12
  struct _LIST_ENTRY **p_Blink; // rdi
  CVisual *v14; // r15
  __int64 v15; // rax
  int v16; // r13d
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v21; // r8
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  int v23; // [rsp+24h] [rbp-A5h]
  __int128 v24; // [rsp+30h] [rbp-99h] BYREF
  __int128 v25; // [rsp+40h] [rbp-89h]
  __int128 v26; // [rsp+50h] [rbp-79h]
  __int128 v27; // [rsp+60h] [rbp-69h]
  int v28; // [rsp+70h] [rbp-59h]
  _OWORD v29[4]; // [rsp+80h] [rbp-49h] BYREF
  int v30; // [rsp+C0h] [rbp-9h]
  struct D2D_MATRIX_3X2_F v31; // [rsp+C8h] [rbp-1h] BYREF

  if ( *((_BYTE *)a2 + 88) )
  {
    v19 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 10);
    if ( v19 )
      (**v19)(v19, 1LL);
  }
  *((_QWORD *)a2 + 10) = 0LL;
  *((_BYTE *)a2 + 88) = 0;
  *((_BYTE *)a2 + 112) = 0;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 12) = 1LL;
  *((_QWORD *)a2 + 13) = 0LL;
  CMILMatrix::SetToIdentity((struct CCpuClip *)((char *)a2 + 8));
  if ( *(_BYTE *)(*((_QWORD *)this + 113) - 8LL) != (_BYTE)v4 )
  {
    v28 = (int)v4;
    v5 = *((_QWORD *)this + 113);
    v6 = v4;
    v7 = (struct _LIST_ENTRY *)v4;
    v8 = v4;
    v23 = 16;
    if ( v5 == *((_QWORD *)this + 112) || *(_QWORD *)(v5 - 176) <= (unsigned __int64)v4 )
    {
      v16 = 1;
      goto LABEL_14;
    }
    v9 = *((_DWORD *)this + 116);
    if ( v9 )
      v10 = *(_DWORD *)(*((_QWORD *)this + 60) + 4LL * (unsigned int)(v9 - 1));
    else
      v10 = (int)v4;
    if ( *((_DWORD *)this + 100) == v10 )
    {
      v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
      v12 = (struct _LIST_ENTRY *)*((_QWORD *)this + 1007);
      p_Blink = 0LL;
      v14 = (CVisual *)v11;
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v12->Flink[11].Blink)(v12) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)v14 + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v14);
        if ( TreeDataListHead )
        {
          for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
          {
            if ( i[2].Flink == v12 )
            {
              p_Blink = &i[-23].Blink;
              break;
            }
          }
        }
      }
      v7 = p_Blink[16];
LABEL_11:
      if ( CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)this + 896)) )
      {
        v15 = *((_QWORD *)this + 346);
        v16 = *(_DWORD *)(v15 - 8);
        v6 = *(_OWORD **)(v15 - 40);
      }
      else
      {
        v16 = 1;
        v6 = v4;
      }
      v8 = *(_OWORD **)(*((_QWORD *)this + 113) - 16LL);
LABEL_14:
      if ( *((_BYTE *)a2 + 88) != (_BYTE)v4 )
      {
        v22 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 10);
        if ( v22 )
        {
          (**v22)(v22, 1LL);
          v4 = 0LL;
        }
      }
      *((_QWORD *)a2 + 10) = v4;
      *((_BYTE *)a2 + 88) = (_BYTE)v4;
      *((_BYTE *)a2 + 112) = (_BYTE)v4;
      *(_QWORD *)a2 = v6;
      *((_DWORD *)a2 + 24) = v16;
      *((_DWORD *)a2 + 25) = v23;
      *((_QWORD *)a2 + 13) = v8;
      if ( v7 )
      {
        *(struct _LIST_ENTRY *)((char *)a2 + 8) = *v7;
        *(struct _LIST_ENTRY *)((char *)a2 + 24) = v7[1];
        *(struct _LIST_ENTRY *)((char *)a2 + 40) = v7[2];
        *(struct _LIST_ENTRY *)((char *)a2 + 56) = v7[3];
        *((_DWORD *)a2 + 18) = v7[4].Flink;
      }
      else
      {
        CMILMatrix::SetToIdentity((struct CCpuClip *)((char *)a2 + 8));
      }
      return;
    }
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
    if ( CCpuClippingData::CalcScopeTransformFromWorld(
           (const struct CMILMatrix *)(v21 - 84),
           TopByReference,
           (struct CMILMatrix *)&v24)
      && CMILMatrix::ProducesUniformZ<1>((__int64)&v24) )
    {
      if ( COERCE_FLOAT(DWORD2(v27) & _xmm) >= 0.000081380211 )
      {
        if ( !CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)this + 113) - 84LL) )
          return;
        *(_QWORD *)&v31.m11 = v24;
        *(_QWORD *)&v31.m[1][0] = v25;
        *(_QWORD *)&v31.m[2][0] = v27;
        CMILMatrix::CMILMatrix((CMILMatrix *)v29, &v31);
        v28 = v30;
        v24 = v29[0];
        v23 = 144;
        v25 = v29[1];
        v26 = v29[2];
        v27 = v29[3];
      }
      v7 = (struct _LIST_ENTRY *)&v24;
      if ( CMILMatrix::IsInvertibleDeterminant((float)(*((float *)&v25 + 1) * *(float *)&v24) - (float)(*(float *)&v25 * *((float *)&v24 + 1))) )
        goto LABEL_11;
    }
  }
}
