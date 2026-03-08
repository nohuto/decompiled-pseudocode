/*
 * XREFs of AslGuidToString_UStr @ 0x140A50FF8
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  wchar_t *v4; // r14
  NTSTATUS v5; // ebx

  *(_DWORD *)a1 = 5111884;
  v4 = (wchar_t *)AslAlloc(a1, 0x4EuLL);
  if ( v4 )
  {
    v5 = RtlStringCchPrintfW(
           v4,
           (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1,
           L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
           *a2,
           *((unsigned __int16 *)a2 + 2),
           *((unsigned __int16 *)a2 + 3),
           *((unsigned __int8 *)a2 + 8),
           *((unsigned __int8 *)a2 + 9),
           *((unsigned __int8 *)a2 + 10),
           *((unsigned __int8 *)a2 + 11),
           *((unsigned __int8 *)a2 + 12),
           *((unsigned __int8 *)a2 + 13),
           *((unsigned __int8 *)a2 + 14),
           *((unsigned __int8 *)a2 + 15));
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      return 0;
    }
    else
    {
      AslLogCallPrintf(1LL);
      ExFreePoolWithTag(v4, 0x74705041u);
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
