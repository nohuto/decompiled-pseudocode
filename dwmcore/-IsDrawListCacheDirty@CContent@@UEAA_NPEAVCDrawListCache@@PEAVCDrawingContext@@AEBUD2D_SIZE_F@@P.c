char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        __int64 a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  __int64 v6; // rbx
  int v7; // edi
  _DWORD *v8; // rsi
  __int64 v9; // rax
  struct _LIST_ENTRY *v10; // r12
  struct _LIST_ENTRY **p_Blink; // rdi
  CVisual *v12; // r15
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  float v20; // xmm6_4
  float v21; // xmm0_4
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  CVisual *v23; // rdi
  struct CTreeData *TreeData; // rax
  unsigned __int64 v25; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  bool v28; // al
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  __int128 v34; // [rsp+20h] [rbp-91h] BYREF
  __int128 v35; // [rsp+30h] [rbp-81h]
  __int128 v36; // [rsp+40h] [rbp-71h]
  __int128 v37; // [rsp+50h] [rbp-61h]
  int v38; // [rsp+60h] [rbp-51h]
  int v39; // [rsp+68h] [rbp-49h]
  void (__fastcall ***v40)(_QWORD, __int64); // [rsp+70h] [rbp-41h] BYREF
  char v41; // [rsp+78h] [rbp-39h]
  __int64 v42; // [rsp+80h] [rbp-31h]
  __int64 v43; // [rsp+88h] [rbp-29h]
  char v44; // [rsp+90h] [rbp-21h]
  __int128 v45; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD v46[6]; // [rsp+B0h] [rbp-1h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a2 + 32) )
  {
    v7 = *(_DWORD *)(a2 + 88);
    if ( (v7 & 6) == 0 || *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) == ((*(_DWORD *)(a2 + 88) & 4) != 0) )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(a2 + 96) == (*((_DWORD *)a3 + 84) != 0) )
      {
        if ( (v7 & 0x8E0) == 0 )
          goto LABEL_53;
        if ( (v7 & 0x800) == 0
          || (v23 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24),
              TreeData = CVisual::FindTreeData(v23, *((const struct CVisualTree **)a3 + 1007)),
              v25 = *(_QWORD *)(v6 + 32),
              v25 >= *((_QWORD *)TreeData + 31))
          && ((*((_BYTE *)v23 + 272) & 2) == 0 || v25 >= *((_QWORD *)g_pComposition + 39)) )
        {
          v14 = *((_DWORD *)a3 + 100);
          v38 = 0;
          if ( v14 )
          {
            v15 = (unsigned int)(v14 - 1);
            v16 = *((_QWORD *)a3 + 52);
            a2 = 68 * v15;
            v17 = *(_OWORD *)(68 * v15 + v16 + 16);
            v34 = *(_OWORD *)(68 * v15 + v16);
            v18 = *(_OWORD *)(68 * v15 + v16 + 32);
            v35 = v17;
            v19 = *(_OWORD *)(68 * v15 + v16 + 48);
            LODWORD(v16) = *(_DWORD *)(68 * v15 + v16 + 64);
            v36 = v18;
            v37 = v19;
            v38 = v16;
          }
          else
          {
            CMILMatrix::SetToIdentity((CMILMatrix *)&v34);
          }
          if ( (*(_BYTE *)(v6 + 88) & 0x20) == 0 || CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v34) )
          {
            v7 = *(_DWORD *)(v6 + 88);
            if ( (v7 & 0x40) == 0
              || (LOBYTE(a2) = 1, (unsigned __int8)CMILMatrix::IsAffine<1>(&v34, a2))
              && (v20 = sqrtf_0(
                          (float)(*(float *)&v34 * *(float *)&v34)
                        + (float)(*((float *)&v34 + 1) * *((float *)&v34 + 1))),
                  v21 = sqrtf_0(
                          (float)(*(float *)&v35 * *(float *)&v35)
                        + (float)(*((float *)&v35 + 1) * *((float *)&v35 + 1))),
                  COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - *(float *)(v6 + 80)) & _xmm) <= 0.000081380211)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - *(float *)(v6 + 84)) & _xmm) <= 0.000081380211 )
            {
              if ( (v7 & 0x80u) == 0 || (v28 = CMILMatrix::ProducesUniformZ<1>((__int64)&v34)) )
              {
LABEL_53:
                if ( !*(_BYTE *)(v6 + 102)
                  || *((_DWORD *)a3 + 85) != 4
                  && ((v7 & 0x200) == 0
                   || (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a3 + 83)) != 3) )
                {
                  if ( (*(_BYTE *)(v6 + 92) & 0x10) == 0 )
                    return 0;
                  v9 = (*(__int64 (__fastcall **)(char *, __int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*((_QWORD *)a3 + 3) + 32LL))(
                         (char *)a3 + 24,
                         a2,
                         a3,
                         a4);
                  v10 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 1007);
                  p_Blink = 0LL;
                  v12 = (CVisual *)v9;
                  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v10->Flink[11].Blink)(v10) )
                  {
                    p_Blink = (struct _LIST_ENTRY **)((char *)v12 + 336);
                  }
                  else
                  {
                    TreeDataListHead = CVisual::GetTreeDataListHead(v12);
                    if ( TreeDataListHead )
                    {
                      Flink = TreeDataListHead->Flink;
                      if ( TreeDataListHead->Flink != TreeDataListHead )
                      {
                        while ( Flink[2].Flink != v10 )
                        {
                          Flink = Flink->Flink;
                          if ( Flink == TreeDataListHead )
                            goto LABEL_9;
                        }
                        p_Blink = &Flink[-23].Blink;
                      }
                    }
                  }
LABEL_9:
                  if ( *(_QWORD *)(v6 + 40) >= (unsigned __int64)p_Blink[14] )
                    return 0;
                  if ( !*(_BYTE *)(v6 + 100) )
                  {
                    v39 = 0;
                    v40 = 0LL;
                    v41 = 0;
                    v44 = 0;
                    *(_QWORD *)&v34 = 0LL;
                    v42 = 1LL;
                    v43 = 0LL;
                    CMILMatrix::SetToIdentity((CMILMatrix *)((char *)&v34 + 8));
                    CDrawingContext::GetCpuClip(a3, (struct CCpuClip *)&v34);
                    if ( !(_QWORD)v34 )
                    {
                      v22 = v40;
                      if ( !v40 )
                      {
LABEL_27:
                        if ( v41 )
                        {
                          if ( v22 )
                            (**v22)(v22, 1LL);
                        }
                        return 0;
                      }
                    }
                    if ( a5 )
                    {
                      v8 = v46;
                      v29 = *((_DWORD *)a5 + 1);
                      v46[0] = *(_DWORD *)a5;
                      v30 = *((_DWORD *)a5 + 4);
                      v46[1] = v29;
                      v31 = *((_DWORD *)a5 + 5);
                      v46[2] = v30;
                      v32 = *((_DWORD *)a5 + 12);
                      v46[3] = v31;
                      v33 = *((_DWORD *)a5 + 13);
                      v46[4] = v32;
                      v46[5] = v33;
                    }
                    v45 = *(_OWORD *)(v6 + 64);
                    if ( (unsigned __int8)CCpuClip::FullyContains(&v34, &v45, v8) )
                    {
                      v22 = v40;
                      goto LABEL_27;
                    }
                    CShapePtr::Release((CShapePtr *)&v40);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
