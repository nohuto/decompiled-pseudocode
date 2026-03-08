/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800976E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800DA970 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?AddSortedAnimation@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x1800DAA84 (-AddSortedAnimation@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18022FA20 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(
        CKeyframeAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  unsigned int i; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD *v12; // rax
  void *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // edx
  __int64 v17; // rdi
  char v18; // r15
  int v19; // eax
  char v20; // cl
  struct _RTL_GENERIC_TABLE *v21; // rcx
  _QWORD *v22; // rax
  void *v23; // rdi
  _QWORD *v24; // rbx
  int v25; // eax
  bool v26; // zf
  unsigned int k; // r12d
  __int64 j; // rdi
  void *v29; // rcx
  void *v30; // rcx
  __int64 v31; // rcx
  void *v32; // rcx
  __int64 m; // rbx
  __int128 v34; // [rsp+20h] [rbp-58h]
  __int128 Buffer; // [rsp+30h] [rbp-48h] BYREF
  void *v36; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 50) + 8LL * i), a2);
  if ( !*((_QWORD *)this + 42) )
  {
    *((_QWORD *)this + 42) = 0LL;
    v25 = CWeakReference<CResource>::Create(this, (char *)this + 336);
    if ( v25 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v25, retaddr);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
  if ( !*((_QWORD *)this + 42) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)&v34 = *((_QWORD *)this + 42);
  DWORD2(v34) = 31;
  v36 = 0LL;
  Buffer = v34;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 328), &Buffer);
  v7 = v36;
  v8 = v6;
  while ( v7 )
  {
    v29 = v7;
    v7 = (void *)*((_QWORD *)v7 + 2);
    operator delete(v29, 0x18uLL);
  }
  if ( v8 )
  {
    for ( j = v8[2]; j; j = *(_QWORD *)(j + 16) )
      CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
  }
  v9 = *((_QWORD *)this + 43);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 16);
    if ( v10 )
    {
      *(_QWORD *)&v34 = *((_QWORD *)this + 43);
      DWORD2(v34) = 1;
      v11 = (struct _RTL_GENERIC_TABLE *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 328LL);
      v36 = 0LL;
      Buffer = v34;
      v12 = RtlLookupElementGenericTable(v11, &Buffer);
      v13 = v36;
      v14 = v12;
      while ( v13 )
      {
        v30 = v13;
        v13 = (void *)*((_QWORD *)v13 + 2);
        operator delete(v30, 0x18uLL);
      }
      if ( v14 )
      {
        v15 = v14[2];
        if ( v15 )
        {
          v16 = CBaseExpression::s_recursionLevel;
          do
          {
            v17 = *(_QWORD *)(v15 + 8);
            v18 = 0;
            v19 = *(_DWORD *)(v17 + 156) + 1;
            *(_DWORD *)(v17 + 156) = v19;
            if ( v19 <= 1 )
            {
              v20 = 0;
              if ( *((_BYTE *)a2 + 8) && *(_QWORD *)(v17 + 224) != *(_QWORD *)a2 )
              {
                *(_QWORD *)(v17 + 224) = *(_QWORD *)a2;
                v20 = 1;
              }
              if ( (*(_QWORD *)(v17 + 160) != *(_QWORD *)a2 || v20) && v16 <= 0x10 )
              {
                v18 = 1;
                v26 = (*(_BYTE *)(v17 + 232) & 2) == 0;
                CBaseExpression::s_recursionLevel = v16 + 1;
                if ( v26 )
                {
                  for ( k = 0; k < *(_DWORD *)(v17 + 264); ++k )
                    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*(_QWORD *)(v17 + 240) + 8LL * k), a2);
                }
                if ( *(_DWORD *)(v17 + 212) == 90 )
                {
                  v31 = *(_QWORD *)(*(_QWORD *)(v17 + 184) + 16LL);
                  if ( v31 )
                    CInteractionTracker::InsertDependenciesForProperty(v31, a2, *(unsigned int *)(v17 + 192));
                }
                (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *))(*(_QWORD *)v17 + 200LL))(
                  v17,
                  a2);
                if ( (*(_BYTE *)(v17 + 216) & 2) != 0 )
                {
                  CExpressionManager::AddSortedAnimation(
                    *(CExpressionManager **)(*(_QWORD *)(v17 + 16) + 424LL),
                    (struct CBaseExpression *)v17);
                  v16 = CBaseExpression::s_recursionLevel;
                  *(_QWORD *)(v17 + 160) = *(_QWORD *)a2;
LABEL_31:
                  CBaseExpression::s_recursionLevel = --v16;
                  goto LABEL_17;
                }
                v16 = CBaseExpression::s_recursionLevel;
              }
            }
            *(_QWORD *)(v17 + 160) = *(_QWORD *)a2;
            if ( v18 )
              goto LABEL_31;
LABEL_17:
            --*(_DWORD *)(v17 + 156);
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( v15 );
        }
      }
      *(_QWORD *)&v34 = v9;
      DWORD2(v34) = 2;
      v21 = (struct _RTL_GENERIC_TABLE *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 328LL);
      v36 = 0LL;
      Buffer = v34;
      v22 = RtlLookupElementGenericTable(v21, &Buffer);
      v23 = v36;
      v24 = v22;
      while ( v23 )
      {
        v32 = v23;
        v23 = (void *)*((_QWORD *)v23 + 2);
        operator delete(v32, 0x18uLL);
      }
      if ( v24 )
      {
        for ( m = v24[2]; m; m = *(_QWORD *)(m + 16) )
          CBaseExpression::InsertInOrder(*(CBaseExpression **)(m + 8), a2);
      }
    }
  }
}
