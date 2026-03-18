/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C024EEC0
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C024D478 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int16 *v6; // rsi
  struct tagTHREADINFO *v8; // r15
  __int64 result; // rax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  __int128 v12; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+40h] [rbp-258h]
  _BYTE v14[512]; // [rsp+50h] [rbp-248h] BYREF

  v5 = a3;
  v6 = (__int16 *)a2;
  v8 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = 0LL;
  v12 = 0LL;
  if ( v5 < 0xFF )
  {
    v10 = (__int16 *)v14;
  }
  else
  {
    result = Win32AllocPoolZInit(2LL * (int)(v5 + 1), 1953657685LL);
    v10 = (__int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, &v12, (__int64)Win32FreePool);
  }
  if ( (unsigned int)GetPrefixCount(v6, v5, (__int64)v10, v5) >> 16 )
    v6 = v10;
  if ( (unsigned int)CALL_LPK((__int64)v8) )
    xxxClientGetTextExtentPointW(a1, (PCWSTR)v6, v11, (_QWORD *)a4);
  else
    GreGetTextExtentW((__int64)a1, (__int64)v6, v11, a4);
  if ( v10 != (__int16 *)v14 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v12);
  return 1LL;
}
