void __fastcall CBatchOptimizer::Flush(CBatchOptimizer *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 *v4; // r9
  _QWORD *v5; // r8
  int *v6; // r13
  __int64 *v7; // r10
  char *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r12d
  char *v11; // r15
  __int64 v12; // rbp
  unsigned int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // ebp
  unsigned int v17; // edx
  CBatchCommand *v18; // rcx
  __int64 v19; // r14
  void (__fastcall ***v20)(_QWORD); // rcx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  __int64 v24; // r14
  unsigned int v25; // eax
  unsigned int v26; // ebp
  __int64 v27; // rdx
  int v28; // eax
  int v29; // r10d
  _DWORD *v30; // r8
  __int64 v32; // r12
  __int64 v33; // r15
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ebp
  unsigned int v37; // ecx
  _QWORD v38[2]; // [rsp+30h] [rbp-78h] BYREF
  CBatchCommand **v39; // [rsp+40h] [rbp-68h]
  unsigned int v40[2]; // [rsp+48h] [rbp-60h] BYREF
  char v41; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  _QWORD *v43; // [rsp+B0h] [rbp+8h]
  __int64 *v44; // [rsp+B8h] [rbp+10h]
  __int64 v45; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+20h] BYREF

  while ( *((_BYTE *)this + 4240) )
  {
    if ( *((_DWORD *)this + 8) <= 1u )
      break;
    CBatchOptimizer::TryMergeOneLayer(this);
  }
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *((int *)this + v2 + 11);
      if ( *((_DWORD *)this + 130 * v3 + 25) )
        break;
      CBatchOptimizer::DiscardEmptyLayers(this, v2 - 1, 1u);
      v2 = *((_DWORD *)this + 8);
      if ( !v2 )
        goto LABEL_46;
    }
    v4 = (__int64 *)((char *)this + 8);
    v5 = (_QWORD *)((char *)this + 40);
    v44 = (__int64 *)((char *)this + 8);
    v43 = (_QWORD *)((char *)this + 40);
    v6 = (int *)((char *)this + 48);
    v7 = (__int64 *)((char *)this + 8);
    while ( 1 )
    {
      v8 = (char *)this + 520 * *v6;
      v9 = *((_QWORD *)v8 + 14);
      v10 = *((_DWORD *)v8 + 24);
      v11 = v8 + 120;
      if ( !v9 )
        goto LABEL_22;
      v12 = *v5;
      if ( *v5 )
        break;
      v13 = *((_DWORD *)v8 + 25);
      if ( v13 > 1 || (v7 = v4, v44 = v4, *((_DWORD *)v8 + 26)) )
      {
        v11 = v8 + 120;
        v14 = v10 - v13;
        if ( v10 != v13 )
        {
          v32 = *v7;
          v33 = (int)v14;
          gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v38, (int)v14);
          v38[1] = v8 + 120;
          if ( v38[0] == -1LL || v8 == (char *)-120LL && v38[0] )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          v34 = CDrawListBatchManager::RawAddBatchCommands(v32, (unsigned int *)v38);
          if ( v34 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v34, retaddr);
          v7 = v44;
          v11 = &v8[8 * v33 + 120];
          v10 = v13;
        }
        v15 = *v7 + 40;
        v45 = 0LL;
        v39 = (CBatchCommand **)&v45;
        *(_QWORD *)v40 = 0LL;
        v41 = 1;
        v16 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v15, v40);
        if ( v41 )
        {
          v17 = v40[0];
          v18 = *v39;
          *v39 = *(CBatchCommand **)v40;
          if ( v18 )
            CBatchCommand::`scalar deleting destructor'(v18, v17);
        }
        if ( v16 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v16, retaddr);
        v19 = v45;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_DWORD *)v19 = 3;
        *(_DWORD *)(v19 + 16) = *((_DWORD *)v8 + 22);
        *(_BYTE *)(v19 + 20) = v8[92];
        v20 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 14);
        *(_QWORD *)(v19 + 8) = v20;
        if ( v20 )
          (**v20)(v20);
        *(_DWORD *)(v19 + 24) = *((_DWORD *)v8 + 25);
        v46 = v45;
        *v43 = v45;
        v21 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(*v44, &v46, 1LL);
        v23 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x91u, 0LL);
          ModuleFailFastForHRESULT(v23, retaddr);
        }
        v45 = 0LL;
        goto LABEL_19;
      }
LABEL_20:
      v3 = *((_QWORD *)v8 + 14);
      *((_QWORD *)v8 + 14) = 0LL;
      if ( v3 )
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64 *))(*(_QWORD *)v3 + 8LL))(v3, v9, v5, v4);
        v4 = (__int64 *)((char *)this + 8);
      }
LABEL_22:
      v24 = *v4;
      v44 = v4;
      if ( !v11 && v10 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v25 = *(_DWORD *)(v24 + 24);
      v26 = v25 + v10;
      if ( v25 + v10 < v25 )
      {
        v36 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_55:
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xA2u, 0LL);
        ModuleFailFastForHRESULT(v36, retaddr);
      }
      if ( v26 > *(_DWORD *)(v24 + 20) )
      {
        v35 = DynArrayImpl<0>::AddMultipleAndSet(v24, 8LL, v10, v11);
        v36 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v35, 0xC0u, 0LL);
          goto LABEL_55;
        }
      }
      else
      {
        memcpy_0((void *)(*(_QWORD *)v24 + 8LL * v25), v11, 8LL * v10);
        *(_DWORD *)(v24 + 24) = v26;
      }
      *((_QWORD *)v8 + 12) = 0LL;
      if ( *((_DWORD *)v8 + 26) )
      {
        v5 = (_QWORD *)((char *)this + 40);
      }
      else
      {
        v5 = v43;
        *v43 = 0LL;
      }
      *((_DWORD *)v8 + 26) = 0;
      v27 = 0LL;
      v43 = v5;
      v28 = *((_DWORD *)this + 8) - 1;
      if ( *((_DWORD *)this + 8) != 1 )
      {
        v29 = *v6;
        v30 = (_DWORD *)((char *)this + 48);
        do
        {
          ++v27;
          *v30 = v30[1];
          ++v30;
        }
        while ( v27 != v28 );
        v5 = v43;
        *((_DWORD *)this + v28 + 12) = v29;
      }
      if ( (*((_DWORD *)this + 8))-- == 1 )
        goto LABEL_34;
      v7 = v44;
      v4 = (__int64 *)((char *)this + 8);
    }
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v12 + 8, v9);
    *(_DWORD *)(v12 + 24) += *((_DWORD *)v8 + 25);
LABEL_19:
    v4 = (__int64 *)((char *)this + 8);
    goto LABEL_20;
  }
LABEL_46:
  v6 = (int *)((char *)this + 48);
LABEL_34:
  *((_OWORD *)this + 1) = SharedStateLayer::StateBlock::kBlank;
  *((_BYTE *)this + 4240) = 0;
  *v6 = 0;
  *((_DWORD *)this + 13) = 1;
  *((_DWORD *)this + 14) = 2;
  *((_DWORD *)this + 15) = 3;
  *((_DWORD *)this + 16) = 4;
  *((_DWORD *)this + 17) = 5;
  *((_DWORD *)this + 18) = 6;
  *((_DWORD *)this + 19) = 7;
}
