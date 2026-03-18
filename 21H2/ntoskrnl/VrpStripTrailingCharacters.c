/*
 * XREFs of VrpStripTrailingCharacters @ 0x14077ECD0
 * Callers:
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpCreateNamespaceNode @ 0x140692514 (VrpCreateNamespaceNode.c)
 *     VrpTranslatePath @ 0x14077E628 (VrpTranslatePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpStripTrailingCharacters(unsigned __int16 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  _WORD *v4; // r8

  result = *a1 >> 1;
  if ( (_DWORD)result )
  {
    v2 = (unsigned int)result;
    result = *((_QWORD *)a1 + 1);
    v3 = v2 - 1;
    v4 = (_WORD *)(result + 2 * v3);
    do
    {
      if ( *v4 != 92 )
        break;
      result = 65534LL;
      --v4;
      *a1 -= 2;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return result;
}
