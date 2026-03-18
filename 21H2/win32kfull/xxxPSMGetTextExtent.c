/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C025D454
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetPrefixCount @ 0x1C025BA88 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, __int16 *a2, unsigned int a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // r15
  __int64 result; // rax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  __int128 v12; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+40h] [rbp-258h]
  _BYTE v14[512]; // [rsp+50h] [rbp-248h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (const WCHAR *)a2, v11, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, (unsigned __int16 *)a2, v11, (struct tagSIZE *)a4, 1u);
  if ( v10 != (__int16 *)v14 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v12);
  return 1LL;
}
