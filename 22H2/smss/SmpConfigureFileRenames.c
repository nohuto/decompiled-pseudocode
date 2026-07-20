/*
 * XREFs of SmpConfigureFileRenames @ 0x140016CD0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x14000B2EC (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureFileRenames(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_140029408 )
  {
    result = SmpSaveRegistryValue(a6, (const WCHAR *)qword_140029408, a3, 0, 0LL);
    qword_140029408 = 0LL;
  }
  else
  {
    qword_140029408 = (__int64)a3;
    return 0LL;
  }
  return result;
}
