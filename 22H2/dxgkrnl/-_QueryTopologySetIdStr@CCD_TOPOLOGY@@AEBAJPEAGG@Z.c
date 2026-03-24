/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0149C08
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013F638 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000A258 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000CA54 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C0149D50 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C014A618 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02EB388 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, unsigned __int16 *a2, unsigned __int16 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbp
  unsigned __int16 v7; // di
  unsigned int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r12d
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int16 v20; // di
  unsigned __int16 *v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int16 v28; // [rsp+70h] [rbp+8h]
  unsigned __int16 v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v29 = a3;
  v4 = *((_QWORD *)this + 8);
  if ( !*(_WORD *)(v4 + 20) )
  {
    *a2 = 0;
    return 0LL;
  }
  LODWORD(v6) = -1073741823;
  v28 = 0;
  v7 = 16385;
  v8 = 0;
  while ( 1 )
  {
    v9 = 272LL * v8;
    if ( DxgkIsTargetNonStandard((const struct _LUID *)(v9 + v4 + 64), *(_DWORD *)(v9 + v4 + 76)) )
    {
      *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 288) = 0;
      goto LABEL_8;
    }
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
      break;
LABEL_8:
    v4 = *((_QWORD *)this + 8);
    if ( ++v8 >= *(unsigned __int16 *)(v4 + 20) )
      return (unsigned int)v6;
  }
  if ( v8 )
  {
    if ( v7 )
      result = RtlStringCchCopyW(a2, v7, L"+");
    else
      result = 3221225485LL;
    if ( (_DWORD)result == -2147483643 )
      result = 3221225507LL;
    if ( (int)result < 0 )
      return result;
    --v7;
    ++a2;
  }
  v10 = *((_QWORD *)this + 8);
  v29 = 0;
  v11 = CCD_TOPOLOGY::_QueryMonitorIdStr(
          (const struct _LUID *)(v9 + v10 + 64),
          *(_DWORD *)(v9 + v10 + 76),
          a2,
          v7,
          &v29);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v14 = v8 + 1;
    v7 -= v29;
    *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 288) = v28++;
    a2 += v29;
    if ( v8 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      while ( 1 )
      {
        if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v8, v14, 0) )
        {
          v17 = *((_QWORD *)this + 8);
          v18 = 272LL * v14;
          v30 = v14;
          if ( *(_DWORD *)(v18 + v17 + 64) == *(_DWORD *)(v9 + v17 + 64)
            && *(_DWORD *)(v18 + v17 + 68) == *(_DWORD *)(v9 + v17 + 68)
            && *(_DWORD *)(v18 + v17 + 76) == *(_DWORD *)(v9 + v17 + 76) )
          {
            v19 = WdLogNewEntry5_WdAssertion(v17, v16);
            WdLogEvent5_WdAssertion(v19);
          }
          if ( v7 )
            result = RtlStringCchCopyW(a2, v7, L"*");
          else
            result = 3221225485LL;
          if ( (_DWORD)result == -2147483643 )
            result = 3221225507LL;
          if ( (int)result < 0 )
            return result;
          v20 = v7 - 1;
          v21 = a2 + 1;
          v22 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                  (const struct _LUID *)(v18 + *((_QWORD *)this + 8) + 64LL),
                  *(_DWORD *)(v18 + *((_QWORD *)this + 8) + 76),
                  v21,
                  v20,
                  &v29);
          v6 = v22;
          if ( v22 < 0 )
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
            v26 = 272 * v30;
            v25[3] = v6;
            v27 = *(unsigned int *)(v18 + *((_QWORD *)this + 8) + 76);
            goto LABEL_38;
          }
          v7 = v20 - v29;
          *(_DWORD *)(v18 + *((_QWORD *)this + 8) + 288) = v28++;
          a2 = &v21[v29];
        }
        if ( ++v14 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v26 = 272LL * v8;
  v25[3] = v6;
  v27 = *(unsigned int *)(v9 + *((_QWORD *)this + 8) + 76);
LABEL_38:
  v25[4] = v27;
  v25[5] = *((_QWORD *)this + 8);
  v25[6] = *(int *)(v26 + *((_QWORD *)this + 8) + 68);
  v25[7] = *(unsigned int *)(v26 + *((_QWORD *)this + 8) + 64);
  WdLogEvent5_WdError(v25);
  return (unsigned int)v6;
}
