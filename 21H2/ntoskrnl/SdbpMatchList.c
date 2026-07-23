/*
 * XREFs of SdbpMatchList @ 0x140754A68
 * Callers:
 *     SdbpCheckForMatch @ 0x140754964 (SdbpCheckForMatch.c)
 *     SdbpMatchOne @ 0x1409661E0 (SdbpMatchOne.c)
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SdbpIsSdbCapabilityPresent @ 0x1405D1F50 (SdbpIsSdbCapabilityPresent.c)
 *     SdbpFindMatcher @ 0x140754C3C (SdbpFindMatcher.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14075A3B8 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14075A630 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbpMatchList(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        BOOL a8)
{
  int v9; // r15d
  unsigned int i; // eax
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rsi
  int v14; // eax
  __int64 result; // rax
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF

  v22 = 0;
  v9 = 0;
  v23 = 0LL;
  v21 = 0;
  a8 = 1;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v20) )
  {
    v20 = i;
    if ( !i )
      break;
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher((unsigned int)&v23, (unsigned int)&v21, a3, a4, i);
    if ( (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() )
    {
      if ( Matcher )
      {
        result = Matcher(&a8, a3, a4, a5, v20, a6, v23);
        if ( !(_DWORD)result )
          return result;
      }
      else
      {
        if ( v21 == 2 )
        {
          v14 = 1;
        }
        else
        {
          if ( v21 != 3 )
            continue;
          v14 = 0;
        }
        a8 = v14;
      }
      ++v9;
      if ( (unsigned int)SdbFindFirstTag(a4, v20, 4099LL) )
        a8 = !a8;
      FirstTag = SdbFindFirstTag(a4, v20, 24636LL);
      if ( !FirstTag )
        goto LABEL_19;
      StringTagPtr = SdbGetStringTagPtr(a4, FirstTag);
      SdbpIsSdbCapabilityPresent(&v22, a3, StringTagPtr);
      v18 = v22 == 0;
    }
    else
    {
      if ( !Matcher )
        continue;
      result = Matcher(&a8, a3, a4, a5, v20, a6, v23);
      if ( !(_DWORD)result )
        return result;
      v18 = (unsigned int)SdbFindFirstTag(a4, v20, 4099LL) == 0;
    }
    if ( !v18 )
    {
      v19 = !a8;
      a8 = v19;
      goto LABEL_20;
    }
LABEL_19:
    v19 = a8;
LABEL_20:
    if ( v19 == a7 )
      goto LABEL_24;
  }
  v19 = a8;
LABEL_24:
  *a1 = v19;
  v18 = (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() == 0;
  result = 1LL;
  if ( !v18 )
  {
    if ( a2 )
      *a2 = v9;
  }
  return result;
}
