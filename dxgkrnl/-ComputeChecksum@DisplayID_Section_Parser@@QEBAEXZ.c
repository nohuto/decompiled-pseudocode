/*
 * XREFs of ?ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ @ 0x1C0071B74
 * Callers:
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x1C001F2CC (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0072224 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DisplayID_Section_Parser::ComputeChecksum(DisplayID_Section_Parser *this)
{
  _BYTE *v1; // rdx
  char v2; // r8
  unsigned __int64 v3; // rcx

  v1 = *(_BYTE **)this;
  v2 = 0;
  v3 = *(unsigned __int8 *)(*(_QWORD *)this + 1LL) + *(_QWORD *)this + 4LL;
  while ( (unsigned __int64)v1 < v3 )
    v2 += *v1++;
  return -v2;
}
