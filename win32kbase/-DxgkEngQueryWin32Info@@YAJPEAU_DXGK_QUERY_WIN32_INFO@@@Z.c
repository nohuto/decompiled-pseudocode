/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C0020640
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     UserIsTtmEnabled @ 0x1C00D4270 (UserIsTtmEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 result; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rcx

  v2 = 0;
  v3 = *(unsigned int *)a1;
  if ( !(_DWORD)v3 )
  {
    v6 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
      WdLogSingleEntry0(1LL);
    v7 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
    if ( *(_DWORD *)(v7 + 1288) )
      v2 = *(unsigned __int16 *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 1248LL);
    *v6 = v2;
    return 0LL;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        LOBYTE(v2) = (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu;
        **((_DWORD **)a1 + 1) = v2 != 0 ? 2 : 0xFFFF;
      }
      else
      {
        **((_DWORD **)a1 + 1) = 0;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v4 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      **((_BYTE **)a1 + 1) = UserIsTtmEnabled();
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( !qword_1C02D5740 )
    return 3221225659LL;
  result = qword_1C02D5740();
  if ( (int)result >= 0 )
  {
    if ( qword_1C02D5748 )
      return qword_1C02D5748(a1);
    return 3221225659LL;
  }
  return result;
}
