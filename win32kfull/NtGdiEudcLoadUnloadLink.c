/*
 * XREFs of NtGdiEudcLoadUnloadLink @ 0x1C02A3450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C012BEC0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02A13F0 (GreEudcUnloadLinkW.c)
 */

__int64 __fastcall NtGdiEudcLoadUnloadLink(
        unsigned __int16 *a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // r13
  unsigned __int64 v9; // rbx
  unsigned int v11; // edi
  void *v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int LinkW; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _WORD v20[40]; // [rsp+50h] [rbp-98h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = 0;
  if ( a2 <= 0x20 && a3 && a4 - 1 <= 0x122 )
  {
    v12 = (void *)AllocFreeTmpBuffer(2 * a4 + 2);
    if ( v12 )
    {
      if ( a1 )
      {
        if ( (_DWORD)v9 )
        {
          if ( ((unsigned __int8)a1 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)a1 + v9 > MmUserProbeAddress || (unsigned __int16 *)((char *)a1 + v9) < a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        v13 = v9;
        memmove(v20, a1, v13 * 2);
        if ( v13 >= 33 )
          _report_rangecheckfailure();
        v20[v13] = 0;
        a1 = v20;
      }
      if ( ((unsigned __int8)a3 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v7] > MmUserProbeAddress || &a3[v7] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v12, a3, 2 * v7);
      *((_WORD *)v12 + v7) = 0;
      if ( a7 )
        LinkW = GreEudcLoadLinkW((char *)a1, v14, (const unsigned __int16 *)v12, v15, a5, a6);
      else
        LinkW = GreEudcUnloadLinkW(a1, v14, (unsigned __int16 *)v12);
      v11 = LinkW;
      FreeTmpBuffer(v12, v17, v18);
    }
    return v11;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
