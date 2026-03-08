/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01C260C
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01C1A1C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000B000 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C01C2FAC (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C03B6D84 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, char *a2, unsigned __int16 a3)
{
  __int64 v4; // rdx
  unsigned int v6; // ebx
  unsigned __int16 v7; // bp
  unsigned int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // r12d
  __int64 result; // rax
  __int64 v15; // rcx
  char *v16; // rdx
  __int16 v17; // ax
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  char *v22; // rdx
  __int16 v23; // ax
  char *v24; // rax
  unsigned __int16 v25; // bp
  unsigned __int16 *v26; // rdi
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int16 v29; // [rsp+70h] [rbp+8h]
  unsigned __int16 v30; // [rsp+80h] [rbp+18h] BYREF

  v30 = a3;
  v4 = *((_QWORD *)this + 8);
  if ( !*(_WORD *)(v4 + 20) )
  {
    *(_WORD *)a2 = 0;
    return 0LL;
  }
  v6 = -1073741823;
  v29 = 0;
  v7 = 16385;
  v8 = 0;
  while ( 1 )
  {
    v9 = 296LL * v8;
    if ( DxgkIsTargetNonStandard((const struct _LUID *)(v9 + v4 + 72), *(_DWORD *)(v9 + v4 + 84)) )
    {
      *(_DWORD *)(*((_QWORD *)this + 8) + v9 + 320) = 0;
      goto LABEL_8;
    }
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
      break;
LABEL_8:
    v4 = *((_QWORD *)this + 8);
    if ( ++v8 >= *(unsigned __int16 *)(v4 + 20) )
      return v6;
  }
  if ( v8 )
  {
    if ( !v7 )
      return 3221225485LL;
    v15 = v7;
    v16 = a2;
    do
    {
      if ( !(2147483646LL - v7 + v15) )
        break;
      v17 = *(_WORD *)&v16[(char *)L"+" - a2];
      if ( !v17 )
        break;
      *(_WORD *)v16 = v17;
      v16 += 2;
      --v15;
    }
    while ( v15 );
    v18 = v16 - 2;
    if ( v15 )
      v18 = v16;
    *(_WORD *)v18 = 0;
    result = v15 == 0 ? 0x80000005 : 0;
    if ( (_DWORD)result == -2147483643 )
      return 3221225507LL;
    if ( !v15 )
      return result;
    --v7;
    a2 += 2;
  }
  v10 = *((_QWORD *)this + 8);
  v30 = 0;
  v11 = CCD_TOPOLOGY::_QueryMonitorIdStr(
          (const struct _LUID *)(v9 + v10 + 72),
          *(_DWORD *)(v10 + v9 + 84),
          (unsigned __int16 *)a2,
          v7,
          &v30);
  v12 = *((_QWORD *)this + 8);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v7 -= v30;
    *(_DWORD *)(v12 + v9 + 320) = v29;
    v13 = v8 + 1;
    ++v29;
    a2 += 2 * v30;
    if ( v8 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      while ( 1 )
      {
        if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v8, v13, 0) )
        {
          v19 = *((_QWORD *)this + 8);
          v20 = 296LL * v13;
          if ( *(_DWORD *)(v20 + v19 + 72) == *(_DWORD *)(v19 + v9 + 72)
            && *(_DWORD *)(v20 + v19 + 76) == *(_DWORD *)(v19 + v9 + 76)
            && *(_DWORD *)(v20 + v19 + 84) == *(_DWORD *)(v19 + v9 + 84) )
          {
            WdLogSingleEntry0(1LL);
          }
          if ( !v7 )
            return 3221225485LL;
          v21 = v7;
          v22 = a2;
          do
          {
            if ( !(2147483646LL - v7 + v21) )
              break;
            v23 = *(_WORD *)&v22[(char *)L"*" - a2];
            if ( !v23 )
              break;
            *(_WORD *)v22 = v23;
            v22 += 2;
            --v21;
          }
          while ( v21 );
          v24 = v22 - 2;
          if ( v21 )
            v24 = v22;
          *(_WORD *)v24 = 0;
          result = v21 == 0 ? 0x80000005 : 0;
          if ( (_DWORD)result == -2147483643 )
            return 3221225507LL;
          if ( !v21 )
            return result;
          v25 = v7 - 1;
          v26 = (unsigned __int16 *)(a2 + 2);
          v27 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                  (const struct _LUID *)(v20 + *((_QWORD *)this + 8) + 72LL),
                  *(_DWORD *)(*((_QWORD *)this + 8) + v20 + 84),
                  v26,
                  v25,
                  &v30);
          v28 = *((_QWORD *)this + 8);
          v6 = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v27,
              *(unsigned int *)(v28 + v20 + 84),
              v28,
              *(int *)(v28 + v20 + 76),
              *(unsigned int *)(v28 + v20 + 72));
            return v6;
          }
          v7 = v25 - v30;
          *(_DWORD *)(v28 + v20 + 320) = v29++;
          a2 = (char *)&v26[v30];
        }
        if ( ++v13 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  WdLogSingleEntry5(
    2LL,
    v11,
    *(unsigned int *)(v12 + v9 + 84),
    v12,
    *(int *)(v12 + v9 + 76),
    *(unsigned int *)(v12 + v9 + 72));
  return v6;
}
