/*
 * XREFs of SdbFindFirstNamedTag @ 0x1407C198C
 * Callers:
 *     SdbpSearchDB @ 0x14077E7B4 (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756580 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14075A184 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14075A1F8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x14075A470 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstNamedTag(__int64 a1, __int64 a2, __int16 a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  unsigned int i; // eax
  __int64 v11; // r9
  unsigned int v12; // edi
  unsigned int FirstTag; // eax
  __int64 v14; // r8
  const wchar_t *StringTagPtr; // rax

  v5 = 0;
  v8 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v8, v12, v11) )
  {
    v12 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
    {
      FirstTag = SdbFindFirstTag(a1, v12, a4);
      if ( FirstTag )
      {
        StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v14, v11);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1LL);
          return v5;
        }
        if ( !wcsicmp(Str1, StringTagPtr) )
          return v12;
      }
    }
  }
  return v5;
}
