/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180224590
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800BD2D0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1802241FC (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18022448C (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180224B14 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
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
  char v11; // r13
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  CConditionalExpression *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int IsAnyConditionSatisfied; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  bool v35; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v36[64]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v37; // [rsp+80h] [rbp-9h] BYREF
  int v38; // [rsp+88h] [rbp-1h]
  char v39; // [rsp+8Ch] [rbp+3h]

  v4 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = *((_DWORD *)this + 94) - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      memset_0(v36, 0, sizeof(v36));
      v11 = 1;
      v12 = (__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4;
      v37 = 0LL;
      v38 = 18;
      v39 = 0;
      if ( v12 )
      {
        do
        {
          v13 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v35);
          v9 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x120u, 0LL);
            goto LABEL_15;
          }
          if ( v35 )
          {
            v11 = 0;
            v15 = *(_QWORD *)(*((_QWORD *)this + 43) + 16LL * v4 + 8);
            v16 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v15 + 256LL))(
                    v15,
                    a2,
                    a3,
                    a4);
            v9 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v16, 0x127u, 0LL);
              goto LABEL_15;
            }
            v18 = CConditionalExpression::AddStackValueToSum(v17, (struct CExpressionValue *)v36, a2);
            v9 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x128u, 0LL);
              goto LABEL_15;
            }
          }
          ++v4;
        }
        while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 44) - *((_QWORD *)this + 43)) >> 4) );
        if ( v11 )
          goto LABEL_16;
        v20 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v36);
        v9 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x13Cu, 0LL);
      }
      else
      {
LABEL_16:
        v22 = *((_QWORD *)this + 46);
        if ( v22 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v22 + 256LL))(
                  v22,
                  a2,
                  a3,
                  a4);
          v9 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x131u, 0LL);
        }
        else
        {
          v9 = 1;
        }
      }
LABEL_15:
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v37);
    }
  }
  else
  {
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
    v9 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, IsAnyConditionSatisfied, 0xF5u, 0LL);
    }
    else
    {
      v27 = *((int *)this + 95);
      if ( (int)v27 < 0 )
      {
        v31 = *((_QWORD *)this + 46);
        if ( v31 )
        {
          v32 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v31 + 256LL))(
                  v31,
                  a2,
                  a3,
                  a4);
          v9 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xFDu, 0LL);
        }
        else
        {
          return 1;
        }
      }
      else
      {
        v28 = *(_QWORD *)(*((_QWORD *)this + 43) + 16 * v27 + 8);
        v29 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v28 + 256LL))(
                v28,
                a2,
                a3,
                a4);
        v9 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xF9u, 0LL);
      }
    }
  }
  return v9;
}
