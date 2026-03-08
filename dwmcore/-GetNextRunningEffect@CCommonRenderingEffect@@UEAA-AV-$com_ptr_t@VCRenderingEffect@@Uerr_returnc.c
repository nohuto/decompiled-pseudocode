/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800B54A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18009280C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800B5814 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B5850 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CCommonRenderingEffect::GetNextRunningEffect(_BYTE *a1, _QWORD *a2, _BYTE *a3, _BYTE *a4)
{
  int v8; // ebx
  struct CCommonRenderingEffect **v9; // r9
  _QWORD *v10; // r12
  __int64 v11; // rbx
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v14; // r11
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rbp
  int v18; // eax
  struct CCommonRenderingEffect *v19; // rcx
  bool v20; // sf
  _BYTE *v22; // r13
  struct CObjectCache *ObjectCache; // rax
  int v24; // edx
  __int16 v25; // bp
  char v26; // r14
  _QWORD *v27; // rsi
  __int16 v28; // bx
  char v29; // di
  __int64 v30; // rax
  __int64 v31; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  struct CCommonRenderingEffect *v33; // [rsp+70h] [rbp+8h] BYREF
  __int16 v34; // [rsp+80h] [rbp+18h] BYREF
  char v35; // [rsp+82h] [rbp+1Ah]

  *a4 = 0;
  v8 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 72LL))(a3);
  if ( v8 != (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 72LL))(a1) )
  {
    *a2 = a3;
    (**(void (__fastcall ***)(_BYTE *))a3)(a3);
    return a2;
  }
  if ( a3 == a1 )
  {
    *a4 = 1;
    *a2 = a1;
    (**(void (__fastcall ***)(_BYTE *))a1)(a1);
    return a2;
  }
  v9 = &v33;
  v10 = 0LL;
  v33 = 0LL;
  v11 = a3 - a1;
  v12 = a3 + 65;
  v13 = a1 + 32;
  v14 = (_BYTE *)(a1 - a3);
  v15 = 0LL;
  do
  {
    v16 = *(_QWORD *)&v13[v11 - 8];
    if ( *((_QWORD *)v13 - 1) )
    {
      if ( v16 )
      {
        v17 = *((_QWORD *)v13 - 2);
        if ( v17 )
        {
          if ( v17 != *(_QWORD *)&v13[v11 - 16] || *v13 != v13[v11] )
            goto LABEL_23;
        }
        else if ( *(_QWORD *)&v13[v11 - 8 + (_QWORD)v14] != v16 || *v13 != v13[v11] )
        {
LABEL_23:
          *a2 = a3;
          (**(void (__fastcall ***)(_BYTE *, _BYTE *, __int64, struct CCommonRenderingEffect **))a3)(a3, v12, v15, v9);
          return a2;
        }
        if ( v12[(_QWORD)v14 - 1] != *(v12 - 1) || v12[(_QWORD)v14] != *v12 || v12[(_QWORD)v14 + 1] != v12[1] )
          goto LABEL_23;
      }
      else
      {
        *(_DWORD *)v9 = -1;
      }
    }
    else if ( v16 )
    {
      *(_DWORD *)v9 = 1;
    }
    v15 = (unsigned int)(v15 + 1);
    v13 += 24;
    v12 += 3;
    v9 = (struct CCommonRenderingEffect **)((char *)v9 + 4);
  }
  while ( (unsigned int)v15 < 2 );
  if ( a1[70] )
  {
    v18 = (int)v33;
    v19 = (struct CCommonRenderingEffect *)HIDWORD(v33);
    v20 = (int)v33 < 0;
    if ( (int)v33 <= 0 )
    {
      if ( SHIDWORD(v33) <= 0 )
      {
        *a4 = 1;
        *a2 = a1;
        (**(void (__fastcall ***)(_BYTE *, _BYTE *, __int64, struct CCommonRenderingEffect **))a1)(a1, v12, v15, v9);
        return a2;
      }
      v20 = (int)v33 < 0;
    }
    if ( !v20 && SHIDWORD(v33) >= 0 )
    {
      *a4 = 1;
LABEL_29:
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        a2,
        a3);
      return a2;
    }
    if ( !CCommonRegistryData::EnableCommonSuperSets )
      goto LABEL_29;
    v22 = a3;
    *a4 = 1;
    if ( v18 < 0 )
      v22 = a1;
    if ( (int)v19 >= 0 )
      a1 = a3;
    ObjectCache = CThreadContext::GetObjectCache(v19);
    v24 = *((_DWORD *)ObjectCache + 1);
    if ( v24 )
    {
      v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *v10;
      *((_DWORD *)ObjectCache + 1) = v24 - 1;
    }
    if ( !v10 )
    {
      v10 = DefaultHeap::Alloc(0x48uLL);
      if ( !v10 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v25 = *(_WORD *)(a1 + 67);
    v26 = a1[69];
    v27 = (_QWORD *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
    v28 = *((_WORD *)v22 + 32);
    v29 = v22[66];
    v30 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v22 + 16LL))(v22, 0LL);
    LOWORD(v33) = v25;
    BYTE2(v33) = v26;
    v34 = v28;
    v35 = v29;
    v31 = CCommonRenderingEffect::CCommonRenderingEffect((__int64)v10, v30, (__int64)&v34, v27, (__int64)&v33);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      v31);
    return a2;
  }
  else
  {
    if ( v33 )
      goto LABEL_29;
    *a4 = 1;
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      a1);
    return a2;
  }
}
