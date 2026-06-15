/*
 * XREFs of sub_180104AC0 @ 0x180104AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180104AC0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // ecx

  v4 = 0;
  v5 = a1 - 4;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      qword_180145010 = 0LL;
      dword_180145008 = 0;
      dword_180145018 = 0;
    }
    else
    {
      return 87;
    }
  }
  else
  {
    qword_180145010 = EtwGetTraceLoggerHandle(a4);
    dword_180145008 = (unsigned __int8)EtwGetTraceEnableLevel(qword_180145010);
    dword_180145018 = EtwGetTraceEnableFlags(qword_180145010);
  }
  return v4;
}
