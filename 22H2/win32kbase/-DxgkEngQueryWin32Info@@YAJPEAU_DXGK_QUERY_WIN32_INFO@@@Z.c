/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00AC040
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00128E8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // ecx
  _DWORD *v6; // rax
  unsigned int v7; // esi
  __int64 result; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rax

  v3 = 0;
  v4 = *(unsigned int *)a1;
  if ( !(_DWORD)v4 )
  {
    v9 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v4, a2);
      WdLogEvent5_WdAssertion(v10);
    }
    if ( gDrvDpiWin8Style )
      v3 = gdmLogPixels;
    *v9 = v3;
    return 0LL;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        v6 = (_DWORD *)*((_QWORD *)a1 + 1);
        if ( gProtocolType == -1 )
          *v6 = 0xFFFF;
        else
          *v6 = 2;
      }
      else
      {
        **((_DWORD **)a1 + 1) = 0;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v5 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      **((_BYTE **)a1 + 1) = gbTtmEnabled;
      return 0LL;
    }
    return 3221225485LL;
  }
  v7 = -1073741637;
  if ( qword_1C02551C0 )
    result = qword_1C02551C0();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    if ( qword_1C02551C8 )
      return (unsigned int)qword_1C02551C8(a1);
    return v7;
  }
  return result;
}
