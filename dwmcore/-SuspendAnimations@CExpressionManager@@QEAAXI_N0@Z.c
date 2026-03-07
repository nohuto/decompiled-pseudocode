void __fastcall CExpressionManager::SuspendAnimations(CExpressionManager *this, int a2, char a3, char a4)
{
  CExpressionManager *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rcx
  unsigned int v9; // ecx
  _QWORD *v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  char *v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int v30; // ebx
  _QWORD v31[2]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v33; // [rsp+78h] [rbp+10h] BYREF

  v33 = a2;
  v5 = this;
  if ( !a3 )
  {
    v13 = *((_DWORD *)this + 80);
    if ( v13 )
    {
      v14 = 0;
      v15 = (__int64 *)((char *)this + 296);
      v16 = 0LL;
      do
      {
        v17 = *(_QWORD *)(v16 + *v15);
        v31[0] = v17;
        if ( v17 && *(_DWORD *)(v17 + 176) == a2 )
        {
          v18 = (char *)v5 + 32 * *((unsigned int *)v5 + 41);
          v19 = *((_DWORD *)v18 + 48);
          v20 = v19 + 1;
          if ( v19 + 1 < v19 )
          {
            v30 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_44:
            ModuleFailFastForHRESULT(v30, retaddr);
          }
          if ( v20 > *((_DWORD *)v18 + 47) )
          {
            v29 = DynArrayImpl<1>::AddMultipleAndSet(v18 + 168, 8LL, v18, v31);
            v30 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v29, 0xC0u, 0LL);
              goto LABEL_44;
            }
          }
          else
          {
            LODWORD(this) = *((_DWORD *)v18 + 48);
            *(_QWORD *)(*((_QWORD *)v18 + 21) + 8LL * v19) = v17;
            *((_DWORD *)v18 + 48) = v20;
          }
          *(_QWORD *)(v16 + *v15) = 0LL;
        }
        ++v14;
        v16 += 8LL;
      }
      while ( v14 < v13 );
      v21 = 0LL;
      v22 = v13 - 1;
      if ( v13 != 1 )
      {
        do
        {
          v23 = *v15;
          while ( 1 )
          {
            v24 = *(_QWORD *)(v23 + 8 * v21);
            if ( !v24 || (unsigned int)v21 >= (unsigned int)v22 )
              break;
            v21 = (unsigned int)(v21 + 1);
          }
          while ( 1 )
          {
            v25 = *(_QWORD *)(v23 + 8 * v22);
            if ( v25 || (unsigned int)v21 >= (unsigned int)v22 )
              break;
            v22 = (unsigned int)(v22 - 1);
          }
          if ( !v24 && v25 )
          {
            *(_QWORD *)(v23 + 8 * v21) = v25;
            *(_QWORD *)(*v15 + 8 * v22) = 0LL;
          }
        }
        while ( (unsigned int)v21 < (unsigned int)v22 );
      }
      *((_DWORD *)v5 + 80) = v22;
      DynArrayImpl<1>::ShrinkToSize(v15, 8LL);
    }
    goto LABEL_7;
  }
  if ( !a4 )
  {
    v6 = *((unsigned int *)this + 41);
    v7 = 0LL;
    if ( *((_DWORD *)v5 + 8 * v6 + 48) )
    {
      do
      {
        v8 = *(_DWORD **)(*((_QWORD *)v5 + 4 * (unsigned int)v6 + 21) + 8 * v7);
        v31[0] = v8;
        if ( v8
          && v8[44] == a2
          && ((*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 56LL))(v8, 60LL)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 56LL))(v31[0], 92LL)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 56LL))(v31[0], 112LL)) )
        {
          v10 = (_QWORD *)((char *)v5 + 296);
          v11 = *((_DWORD *)v5 + 80);
          v12 = v11 + 1;
          if ( v11 + 1 < v11 )
          {
            v28 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_42:
            ModuleFailFastForHRESULT(v28, retaddr);
          }
          if ( v12 > *((_DWORD *)v5 + 79) )
          {
            v26 = DynArrayImpl<1>::AddMultipleAndSet((char *)v5 + 296, 8LL, v10, v31);
            v28 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC0u, 0LL);
              goto LABEL_42;
            }
          }
          else
          {
            *(_QWORD *)(*v10 + 8LL * v11) = v31[0];
            *((_DWORD *)v5 + 80) = v12;
          }
          *(_QWORD *)(*((_QWORD *)v5 + 4 * *((unsigned int *)v5 + 41) + 21) + 8 * v7) = 0LL;
        }
        v7 = (unsigned int)(v7 + 1);
        LODWORD(v6) = *((_DWORD *)v5 + 41);
      }
      while ( (unsigned int)v7 < *((_DWORD *)v5 + 8 * (unsigned int)v6 + 48) );
    }
LABEL_7:
    *((_BYTE *)v5 + 448) |= 8u;
    return;
  }
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
    (char *)this + 400,
    v31,
    &v33);
}
