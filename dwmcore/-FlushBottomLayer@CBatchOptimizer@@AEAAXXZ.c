void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  char *v4; // rbx
  char *v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // rdx
  char *v8; // r15
  __int64 v9; // r14
  char *v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // edx
  CBatchCommand *v15; // rcx
  CBatchCommand *v16; // rbx
  char *v17; // r12
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rbx
  gsl::details *v22; // rcx
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // r14
  gsl::details *v26; // rcx
  int v27; // eax
  unsigned int v28; // r12d
  CBatchCommand **v29; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v30[2]; // [rsp+28h] [rbp-18h] BYREF
  char v31; // [rsp+30h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+28h]
  CBatchCommand *v33; // [rsp+70h] [rbp+30h] BYREF

  v1 = *((int *)this + 12);
  v2 = 520 * v1;
  v4 = (char *)this + 520 * v1 + 120;
  v5 = v4;
  v6 = *((_DWORD *)this + 130 * v1 + 24);
  v7 = *((_QWORD *)this + 65 * v1 + 14);
  v8 = (char *)this + 520 * v1;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v9 + 8, v7);
      v10 = (char *)this + 112;
      *(_DWORD *)(v9 + 24) += *((_DWORD *)v8 + 25);
      v5 = v4;
    }
    else
    {
      v28 = *((_DWORD *)v8 + 25);
      if ( v28 > 1 || (v5 = (char *)this + 520 * v1 + 120, *(_DWORD *)((char *)this + v2 + 104)) )
      {
        v5 = (char *)this + 520 * v1 + 120;
        v11 = v6 - v28;
        if ( v6 != v28 )
        {
          v24 = *((_QWORD *)this + 1);
          v25 = (int)v11;
          gsl::details::extent_type<-1>::extent_type<-1>(&v29, (int)v11);
          *(_QWORD *)v30 = v4;
          if ( v29 == (CBatchCommand **)-1LL || !v4 && v29 )
          {
            gsl::details::terminate(v26);
            __debugbreak();
          }
          v27 = CDrawListBatchManager::RawAddBatchCommands(v24, &v29);
          if ( v27 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v27, retaddr);
          v5 = &v4[8 * v25];
          v6 = v28;
        }
        v12 = *((_QWORD *)this + 1);
        v29 = &v33;
        v33 = 0LL;
        *(_QWORD *)v30 = 0LL;
        v31 = 1;
        v13 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v12 + 40, v30);
        if ( v31 )
        {
          v14 = v30[0];
          v15 = *v29;
          *v29 = *(CBatchCommand **)v30;
          if ( v15 )
            CBatchCommand::`scalar deleting destructor'(v15, v14);
        }
        if ( v13 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
        v16 = v33;
        *(_DWORD *)v33 = 3;
        *((_QWORD *)v16 + 1) = 0LL;
        v17 = (char *)this + v2 + 112;
        *((_DWORD *)v16 + 4) = *(_DWORD *)((char *)this + v2 + 88);
        *((_BYTE *)v16 + 20) = *((_BYTE *)this + v2 + 92);
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((char *)v16 + 8, *(_QWORD *)v17);
        *((_DWORD *)v16 + 6) = *((_DWORD *)v8 + 25);
        v18 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 5) = v33;
        v19 = CDrawListBatchManager::AddBatchCommand(v18, &v33);
        if ( v19 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v19, retaddr);
        if ( v33 )
          CBatchCommand::`scalar deleting destructor'(v33, v20);
        goto LABEL_12;
      }
      v10 = (char *)this + 112;
    }
    v17 = &v10[v2];
LABEL_12:
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(v17);
  }
  v21 = *((_QWORD *)this + 1);
  gsl::details::extent_type<-1>::extent_type<-1>(&v29, v6);
  *(_QWORD *)v30 = v5;
  if ( v29 == (CBatchCommand **)-1LL || !v5 && v29 )
  {
    gsl::details::terminate(v22);
    JUMPOUT(0x18000DDABLL);
  }
  v23 = CDrawListBatchManager::RawAddBatchCommands(v21, &v29);
  if ( v23 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
  *(_DWORD *)((char *)this + v2 + 96) = 0;
  *((_DWORD *)v8 + 25) = 0;
  if ( !*(_DWORD *)((char *)this + v2 + 104) )
    *((_QWORD *)this + 5) = 0LL;
  *(_DWORD *)((char *)this + v2 + 104) = 0;
}
