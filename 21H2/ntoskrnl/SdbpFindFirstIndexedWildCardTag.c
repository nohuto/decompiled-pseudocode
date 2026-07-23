/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x140759948
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140759BC8 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14077E974 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchA @ 0x140759ACC (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x140759B98 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x140759D54 (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x14075A830 (SdbGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075A990 (AslStringUpcaseToMultiByteN.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rdi
  unsigned int v13; // esi
  unsigned int FirstTag; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 *StringTagPtr; // rax
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+40h] [rbp-C0h]
  _BYTE v21[272]; // [rsp+50h] [rbp-B0h] BYREF

  v18 = 0;
  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = 24587;
  *((_QWORD *)a5 + 4) = a4;
  memset(v21, 0, 0x104uLL);
  v19 = 0LL;
  v20 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v21, v8, a4) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v9 = SdbpGetIndex(a1, *a5, &v18);
  if ( !v9 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v10 = v18;
  v11 = 0LL;
  if ( !v18 )
    return 0LL;
  while ( 1 )
  {
    SdbpKeyToAnsiString(*(_QWORD *)(v9 + 12 * v11), &v19);
    LOBYTE(v20) = 42;
    if ( (unsigned int)AslStringPatternMatchA(&v19, v21) )
    {
      v13 = *(_DWORD *)(v9 + 12 * v11 + 8);
      FirstTag = SdbFindFirstTag(a1, v13, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr((__int64)a1, FirstTag, v15, v16);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *((unsigned __int16 **)a5 + 4)) )
            break;
        }
      }
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      return 0LL;
  }
  a5[4] = v11;
  return v13;
}
