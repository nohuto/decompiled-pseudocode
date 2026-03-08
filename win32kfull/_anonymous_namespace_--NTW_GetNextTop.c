/*
 * XREFs of _anonymous_namespace_::NTW_GetNextTop @ 0x1C00C8C68
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1C022667C (_anonymous_namespace_--NTW_GetPrevTop.c)
 * Callees:
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C00C8D48 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::NTW_GetNextTop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a2;
  if ( a2 )
  {
    result = 0LL;
    while ( 1 )
    {
      if ( result )
      {
        while ( 1 )
        {
          result = *(_QWORD *)(result + 88);
LABEL_9:
          if ( !result )
            break;
          if ( *(_QWORD *)(result + 120) == v2 )
            return result;
        }
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 456);
        if ( !v5 || (*(_DWORD *)(v5 + 48) & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 27LL);
        v6 = *(_QWORD *)(a1 + 456);
        if ( v6 && (*(_DWORD *)(v6 + 48) & 2) == 0 )
        {
          result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) + 112LL);
          goto LABEL_9;
        }
      }
      result = v2;
      if ( !v2 )
        break;
      v2 = *(_QWORD *)(v2 + 120);
    }
  }
  return anonymous_namespace_::GNT_NextTopScan(a1, 0LL, 0LL);
}
