/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C0251BB0
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0215674 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0228CCC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C0250138 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(Gre::Base *a1, __int16 *a2, unsigned int a3, __int64 a4)
{
  struct tagTHREADINFO *v8; // r15
  __int64 result; // rax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  __int128 v12; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+40h] [rbp-258h]
  _BYTE v14[512]; // [rsp+50h] [rbp-248h] BYREF

  v8 = PtiCurrentShared((__int64)a1);
  v13 = 0LL;
  v12 = 0LL;
  if ( a3 < 0xFF )
  {
    v10 = (__int16 *)v14;
  }
  else
  {
    result = Win32AllocPoolZInit(2LL * (int)(a3 + 1), 1953657685LL);
    v10 = (__int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, &v12, (__int64)Win32FreePool);
  }
  if ( (unsigned int)GetPrefixCount(a2, a3, (__int64)v10, a3) >> 16 )
    a2 = v10;
  if ( (unsigned int)CALL_LPK((__int64)v8) )
    xxxClientGetTextExtentPointW(a1, (PCWSTR)a2, v11, (_QWORD *)a4);
  else
    GreGetTextExtentW((HDC)a1, (unsigned __int16 *)a2, v11, (struct tagSIZE *)a4);
  if ( v10 != (__int16 *)v14 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v12);
  return 1LL;
}
