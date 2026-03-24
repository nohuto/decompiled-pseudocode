/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BD510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A9CF0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1801BD18C (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BD424 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BDAA4 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // r15d
  unsigned int v9; // ebx
  int v10; // ecx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rcx
  int v17; // eax
  CConditionalExpression *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  int IsAnyConditionSatisfied; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  char v38; // [rsp+30h] [rbp-59h]
  bool v39; // [rsp+31h] [rbp-58h] BYREF
  _BYTE v40[64]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v41; // [rsp+80h] [rbp-9h]
  int v42; // [rsp+88h] [rbp-1h]
  char v43; // [rsp+8Ch] [rbp+3h]

  v4 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = *((_DWORD *)this + 88) - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      memset_0(v40, 0, sizeof(v40));
      v11 = 0LL;
      v12 = (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 4;
      v41 = 0LL;
      v42 = 18;
      v43 = 0;
      v38 = 1;
      if ( v12 )
      {
        do
        {
          v13 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v39);
          v9 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x120u, 0LL);
            goto LABEL_23;
          }
          if ( v39 )
          {
            v15 = 0;
            v38 = 0;
            v16 = *(_QWORD *)(*((_QWORD *)this + 40) + 16LL * v4 + 8);
            v17 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v16 + 256LL))(
                    v16,
                    a2,
                    a3,
                    a4);
            v9 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, v17, 0x127u, 0LL);
              goto LABEL_23;
            }
            v19 = CConditionalExpression::AddStackValueToSum(v18, (struct CExpressionValue *)v40, a2);
            v9 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x128u, 0LL);
              goto LABEL_23;
            }
          }
          else
          {
            v15 = v38;
          }
          ++v4;
        }
        while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 4) );
        if ( v15 )
        {
          v11 = v41;
          goto LABEL_17;
        }
        v21 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v40);
        v9 = v21;
        if ( v21 >= 0 )
        {
          v11 = v41;
          goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x13Cu, 0LL);
LABEL_23:
        v27 = v41;
        if ( v41 )
        {
          v26 = *v41;
          goto LABEL_25;
        }
      }
      else
      {
LABEL_17:
        v23 = *((_QWORD *)this + 43);
        if ( v23 )
        {
          v24 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v23 + 256LL))(
                  v23,
                  a2,
                  a3,
                  a4);
          v9 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x131u, 0LL);
        }
        else
        {
          v9 = 1;
        }
LABEL_20:
        if ( v11 )
        {
          v26 = *v11;
          v27 = v11;
LABEL_25:
          (*(void (__fastcall **)(_QWORD *))(v26 + 16))(v27);
        }
      }
    }
  }
  else
  {
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
    v9 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, IsAnyConditionSatisfied, 0xF5u, 0LL);
    }
    else
    {
      v30 = *((int *)this + 89);
      if ( (int)v30 < 0 )
      {
        v34 = *((_QWORD *)this + 43);
        if ( v34 )
        {
          v35 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v34 + 256LL))(
                  v34,
                  a2,
                  a3,
                  a4);
          v9 = v35;
          if ( v35 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xFDu, 0LL);
        }
        else
        {
          return 1;
        }
      }
      else
      {
        v31 = *(_QWORD *)(*((_QWORD *)this + 40) + 16 * v30 + 8);
        v32 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v31 + 256LL))(
                v31,
                a2,
                a3,
                a4);
        v9 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xF9u, 0LL);
      }
    }
  }
  return v9;
}
