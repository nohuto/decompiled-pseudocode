/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C006CE40
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ecx
  _DWORD *v5; // rax
  __int64 result; // rax
  _DWORD *v7; // rsi

  v2 = 0;
  v3 = *(_DWORD *)a1;
  if ( !v3 )
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
      WdLogSingleEntry0(1LL);
    if ( gDrvDpiWin8Style )
      v2 = gdmLogPixels;
    *v7 = v2;
    return 0LL;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        v5 = (_DWORD *)*((_QWORD *)a1 + 1);
        if ( gProtocolType == -1 )
          *v5 = 0xFFFF;
        else
          *v5 = 2;
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
      **((_BYTE **)a1 + 1) = gbTtmEnabled;
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( !qword_1C029AF40 )
    return 3221225659LL;
  result = qword_1C029AF40();
  if ( (int)result >= 0 )
  {
    if ( qword_1C029AF48 )
      return qword_1C029AF48(a1);
    return 3221225659LL;
  }
  return result;
}
