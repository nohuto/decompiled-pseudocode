/*
 * XREFs of VfZwDeleteFile_Entry @ 0x140AD1650
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140AD1F34 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140AD2048 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteFile_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckObjectAttributes(v3[1], *v3);
  return result;
}
