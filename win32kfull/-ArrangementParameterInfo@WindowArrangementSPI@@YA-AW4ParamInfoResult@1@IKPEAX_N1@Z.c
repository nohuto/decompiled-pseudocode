/*
 * XREFs of ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0102EC8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator() @ 0x1C00F068C (_lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_--operator().c)
 *     _lambda_2297c699848e7a7bff373177413c6db4_::operator() @ 0x1C00F06EC (_lambda_2297c699848e7a7bff373177413c6db4_--operator().c)
 *     _lambda_88f23c52c0dc3ab6faf80570be987f32_::operator() @ 0x1C00F0C8C (_lambda_88f23c52c0dc3ab6faf80570be987f32_--operator().c)
 *     _lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator() @ 0x1C00F0CEC (_lambda_484f3fc5f209b5786cb6c1066b9b753c_--operator().c)
 *     _lambda_17ffa216705245d0294b2aa95ba432df_::operator() @ 0x1C00F0D4C (_lambda_17ffa216705245d0294b2aa95ba432df_--operator().c)
 *     _lambda_0336b3a089846025bc79125dee2480fe_::operator() @ 0x1C00F0DAC (_lambda_0336b3a089846025bc79125dee2480fe_--operator().c)
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C01027F0 (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x1C010284C (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     UpdateWinIniInt @ 0x1C01C9800 (UpdateWinIniInt.c)
 */

__int64 __fastcall WindowArrangementSPI::ArrangementParameterInfo(
        unsigned int a1,
        unsigned int a2,
        int *a3,
        char a4,
        bool a5)
{
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // esi
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // ecx
  char v33; // al
  BOOL v34; // [rsp+50h] [rbp+20h] BYREF

  LOBYTE(v34) = 0;
  if ( a1 <= 0x88 )
  {
    if ( a1 == 136 )
    {
      v33 = byte_1C035C1F1;
      goto LABEL_61;
    }
    if ( a1 > 0x83 )
    {
      v24 = a1 - 132;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                2,
                                (const wchar_t *)lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_)
            && lambda_88f23c52c0dc3ab6faf80570be987f32_::operator()(v29, a2, 1) )
          {
            anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v34, &a5, 19, a2, 2);
          }
          goto LABEL_16;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 == 1
            && !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                3,
                                (const wchar_t *)lambda_0336b3a089846025bc79125dee2480fe_::_lambda_invoker_cdecl_)
            && lambda_0336b3a089846025bc79125dee2480fe_::operator()(v27, a2, 1) )
          {
            anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v34, &a5, 20, a2, 3);
          }
          goto LABEL_16;
        }
        v33 = byte_1C035C1ED;
      }
      else
      {
        v33 = byte_1C035C1E9;
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
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                0,
                                (const wchar_t *)lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::_lambda_invoker_cdecl_)
            && lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator()(v28, a2, 1) )
          {
            anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v34, &a5, 16, a2, 0);
          }
          goto LABEL_16;
        }
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              LOBYTE(v11) = dword_1C035C1FC;
LABEL_11:
              v12 = v11 & 1;
LABEL_12:
              *a3 = v12;
              result = 0LL;
              goto LABEL_17;
            }
          }
          else if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                     a2,
                                     1,
                                     (const wchar_t *)lambda_2297c699848e7a7bff373177413c6db4_::_lambda_invoker_cdecl_)
                 && lambda_2297c699848e7a7bff373177413c6db4_::operator()(v14, a2, 1) )
          {
            anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v34, &a5, 17, a2, 1);
          }
          goto LABEL_16;
        }
        v33 = byte_1C035C1E5;
      }
      else
      {
        v33 = byte_1C035C1E1;
      }
LABEL_61:
      LOBYTE(v34) = v33;
      v12 = v34;
      goto LABEL_12;
    }
    v23 = 18;
    v22 = 1;
LABEL_50:
    if ( (unsigned int)CheckDesktopPolicy(0LL, v23) )
    {
      a5 = 0;
    }
    else if ( a4 )
    {
      LOBYTE(v34) = (unsigned int)UpdateWinIniInt(0LL, 4LL, v23, a2) != 0;
      a5 = v34;
    }
    if ( a5 )
    {
      if ( a2 )
        dword_1C035C1FC |= v22;
      else
        dword_1C035C1FC &= ~v22;
    }
    goto LABEL_16;
  }
  v15 = a1 - 137;
  if ( !v15 )
  {
    if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                          a2,
                          4,
                          (const wchar_t *)lambda_484f3fc5f209b5786cb6c1066b9b753c_::_lambda_invoker_cdecl_)
      && lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator()(v31, a2, 1) )
    {
      anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v34, &a5, 21, a2, 4);
    }
    goto LABEL_16;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v33 = byte_1C035C1F5;
    goto LABEL_61;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                          a2,
                          5,
                          (const wchar_t *)lambda_17ffa216705245d0294b2aa95ba432df_::_lambda_invoker_cdecl_)
      && lambda_17ffa216705245d0294b2aa95ba432df_::operator()(v30, a2, 1) )
    {
      anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v34, &a5, 22, a2, 5);
    }
    goto LABEL_16;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v11 = (unsigned int)dword_1C035C1FC >> 1;
    goto LABEL_11;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v22 = 2;
    v23 = 624;
    goto LABEL_50;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v11 = (unsigned int)dword_1C035C1FC >> 2;
    goto LABEL_11;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v22 = 4;
    v23 = 626;
    goto LABEL_50;
  }
  v32 = v21 - 1;
  if ( !v32 )
  {
    v11 = (unsigned int)dword_1C035C1FC >> 3;
    goto LABEL_11;
  }
  if ( v32 == 1 )
  {
    v22 = 8;
    v23 = 625;
    goto LABEL_50;
  }
LABEL_16:
  result = v34;
LABEL_17:
  if ( a5 )
    return (unsigned int)result | 2;
  return result;
}
