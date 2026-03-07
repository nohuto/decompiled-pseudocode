__int64 __fastcall CDrawListEntryBatch::RenderLoop<0>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  struct CRenderingEffect *v3; // rbx
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v7; // r8
  struct CBatchCommand **v8; // rdi
  bool i; // zf
  CBatchCommand *v10; // r12
  CBatchCommand *v11; // rcx
  struct CRenderingEffect *RenderingEffect; // rax
  void (__fastcall *v13)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, char *); // rdi
  struct CRenderingEffect *v14; // rax
  struct CRenderingEffect *v15; // rax
  struct CRenderingEffect *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  const struct CRenderingEffect *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  struct CRenderingEffect *v23; // [rsp+30h] [rbp-20h] BYREF
  struct CBatchCommand **v24; // [rsp+38h] [rbp-18h] BYREF
  struct CBatchCommand **v25; // [rsp+40h] [rbp-10h]
  char v26; // [rsp+90h] [rbp+40h] BYREF
  struct CRenderingEffect *v27; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = 0;
  v27 = 0LL;
  v5 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  v8 = (struct CBatchCommand **)(v7 + 8LL * *(unsigned int *)(a1 + 48));
  v25 = (struct CBatchCommand **)(v7 + 8LL * *(unsigned int *)(a1 + 52));
  for ( i = v8 == v25; ; i = v8 == v25 )
  {
    v24 = v8;
    if ( i )
      break;
    v10 = *v8;
    if ( !CBatchCommand::ApplyRenderState(*v8, (struct IDrawListStateSink *)a2) )
      goto LABEL_17;
    if ( !v3 )
    {
      CD3DBatchExecutionContext::Flush(a2, 0x80000000);
      v11 = v10;
LABEL_5:
      RenderingEffect = CBatchCommand::GetRenderingEffect(v11);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
        (__int64 *)&v27,
        (void (__fastcall ***)(_QWORD))RenderingEffect);
      v3 = v27;
      goto LABEL_11;
    }
    v11 = v10;
    if ( *(int *)(a2 + 40) < 0 )
      goto LABEL_5;
    v13 = *(void (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, char *))(*(_QWORD *)v3 + 80LL);
    v14 = CBatchCommand::GetRenderingEffect(v10);
    v13(v3, &v23, v14, &v26);
    if ( v23 != v3 )
    {
      CD3DBatchExecutionContext::Flush(a2, 0x80000000);
      v15 = v23;
      v16 = v3;
      v23 = 0LL;
      v3 = v15;
      v27 = v15;
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v23);
LABEL_11:
    if ( *(int *)(a2 + 40) >= 0 )
    {
      if ( v5 >= 0 )
      {
LABEL_21:
        v19 = v3;
        goto LABEL_15;
      }
    }
    else
    {
      v17 = CD3DBatchExecutionContext::SetRenderingEffectState((CD3DBatchExecutionContext *)a2, v3);
      v5 = v17;
      if ( v17 >= 0 )
        goto LABEL_21;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x162u, 0LL);
    }
    v19 = 0LL;
LABEL_15:
    v20 = CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
            (CD3DBatchExecutionContext *)a2,
            (const struct CBatchCommand *const **)&v24,
            v19);
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x169u, 0LL);
      break;
    }
    *(_DWORD *)(a2 + 40) = 0;
    v8 = v24;
LABEL_17:
    ++v8;
  }
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v27);
  return v4;
}
