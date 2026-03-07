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
