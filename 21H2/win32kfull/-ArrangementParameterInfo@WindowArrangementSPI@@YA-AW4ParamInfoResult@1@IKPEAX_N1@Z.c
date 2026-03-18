/*
 * XREFs of ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C0114DE8 (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x1C011CD80 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     _lambda_2297c699848e7a7bff373177413c6db4_::operator() @ 0x1C0120258 (_lambda_2297c699848e7a7bff373177413c6db4_--operator().c)
 *     _lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator() @ 0x1C0120298 (_lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_--operator().c)
 *     _lambda_0336b3a089846025bc79125dee2480fe_::operator() @ 0x1C01205B4 (_lambda_0336b3a089846025bc79125dee2480fe_--operator().c)
 *     _lambda_88f23c52c0dc3ab6faf80570be987f32_::operator() @ 0x1C01205F0 (_lambda_88f23c52c0dc3ab6faf80570be987f32_--operator().c)
 *     _lambda_17ffa216705245d0294b2aa95ba432df_::operator() @ 0x1C0120628 (_lambda_17ffa216705245d0294b2aa95ba432df_--operator().c)
 *     _lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator() @ 0x1C0120664 (_lambda_484f3fc5f209b5786cb6c1066b9b753c_--operator().c)
 *     UpdateWinIniInt @ 0x1C0158014 (UpdateWinIniInt.c)
 */

__int64 __fastcall WindowArrangementSPI::ArrangementParameterInfo(
        unsigned int a1,
        unsigned int a2,
        int *a3,
        char a4,
        char a5)
{
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // esi
  unsigned int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // r9d
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // al
  int v42; // [rsp+28h] [rbp-8h]
  int v43; // [rsp+50h] [rbp+20h] BYREF

  LOBYTE(v43) = 0;
  if ( a1 <= 0x88 )
  {
    if ( a1 == 136 )
    {
      v41 = byte_1C032CF59;
      goto LABEL_61;
    }
    if ( a1 > 0x83 )
    {
      v28 = a1 - 132;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( !v29 )
        {
          if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                               a2,
                               2LL,
                               lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_) )
            goto LABEL_36;
          LOBYTE(v35) = a2;
          if ( !(unsigned __int8)lambda_88f23c52c0dc3ab6faf80570be987f32_::operator()(v36, v35, 1LL) )
            goto LABEL_36;
          v42 = 2;
          v27 = 19;
          goto LABEL_35;
        }
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 != 1 )
            goto LABEL_36;
          if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                               a2,
                               3LL,
                               lambda_0336b3a089846025bc79125dee2480fe_::_lambda_invoker_cdecl_) )
            goto LABEL_36;
          LOBYTE(v31) = a2;
          if ( !(unsigned __int8)lambda_0336b3a089846025bc79125dee2480fe_::operator()(v32, v31, 1LL) )
            goto LABEL_36;
          v42 = 3;
          v27 = 20;
          goto LABEL_35;
        }
        v41 = byte_1C032CF55;
      }
      else
      {
        v41 = byte_1C032CF51;
      }
      goto LABEL_61;
    }
    if ( a1 != 131 )
    {
      v7 = a1 - 126;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                               a2,
                               0LL,
                               lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::_lambda_invoker_cdecl_) )
            goto LABEL_36;
          LOBYTE(v33) = a2;
          if ( !(unsigned __int8)lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator()(v34, v33, 1LL) )
            goto LABEL_36;
          v42 = 0;
          v27 = 16;
          goto LABEL_35;
        }
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              LOBYTE(v11) = dword_1C032CF64;
LABEL_11:
              v12 = v11 & 1;
LABEL_12:
              *a3 = v12;
              result = 0LL;
              goto LABEL_13;
            }
            goto LABEL_36;
          }
          if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                               a2,
                               1LL,
                               lambda_2297c699848e7a7bff373177413c6db4_::_lambda_invoker_cdecl_) )
            goto LABEL_36;
          LOBYTE(v24) = a2;
          if ( !(unsigned __int8)lambda_2297c699848e7a7bff373177413c6db4_::operator()(v25, v24, 1LL) )
            goto LABEL_36;
          v42 = 1;
          v27 = 17;
LABEL_35:
          LOBYTE(v26) = a4;
          anonymous_namespace_::UpdateThresholdFromMetric(v26, (unsigned int)&v43, (unsigned int)&a5, v27, a2, v42);
          goto LABEL_36;
        }
        v41 = byte_1C032CF4D;
      }
      else
      {
        v41 = byte_1C032CF49;
      }
LABEL_61:
      LOBYTE(v43) = v41;
      v12 = v43;
      goto LABEL_12;
    }
    v23 = 18;
    v22 = 1;
LABEL_26:
    if ( (unsigned int)CheckDesktopPolicy(0LL, v23) )
    {
      a5 = 0;
    }
    else if ( a4 )
    {
      LOBYTE(v43) = (unsigned int)UpdateWinIniInt(0LL, 4LL, v23, a2) != 0;
      a5 = v43;
    }
    if ( a5 )
    {
      if ( a2 )
        dword_1C032CF64 |= v22;
      else
        dword_1C032CF64 &= ~v22;
    }
    goto LABEL_36;
  }
  v14 = a1 - 137;
  if ( !v14 )
  {
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         4LL,
                         lambda_484f3fc5f209b5786cb6c1066b9b753c_::_lambda_invoker_cdecl_) )
      goto LABEL_36;
    LOBYTE(v39) = a2;
    if ( !(unsigned __int8)lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator()(v40, v39, 1LL) )
      goto LABEL_36;
    v42 = 4;
    v27 = 21;
    goto LABEL_35;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v41 = byte_1C032CF5D;
    goto LABEL_61;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         5LL,
                         lambda_17ffa216705245d0294b2aa95ba432df_::_lambda_invoker_cdecl_) )
      goto LABEL_36;
    LOBYTE(v37) = a2;
    if ( !(unsigned __int8)lambda_17ffa216705245d0294b2aa95ba432df_::operator()(v38, v37, 1LL) )
      goto LABEL_36;
    v42 = 5;
    v27 = 22;
    goto LABEL_35;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v11 = (unsigned int)dword_1C032CF64 >> 1;
    goto LABEL_11;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v22 = 2;
    v23 = 624;
    goto LABEL_26;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v11 = (unsigned int)dword_1C032CF64 >> 2;
    goto LABEL_11;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v22 = 4;
    v23 = 626;
    goto LABEL_26;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v11 = (unsigned int)dword_1C032CF64 >> 3;
    goto LABEL_11;
  }
  if ( v21 == 1 )
  {
    v22 = 8;
    v23 = 625;
    goto LABEL_26;
  }
LABEL_36:
  result = (_BYTE)v43 != 0;
LABEL_13:
  if ( a5 )
    return (unsigned int)result | 2;
  return result;
}
