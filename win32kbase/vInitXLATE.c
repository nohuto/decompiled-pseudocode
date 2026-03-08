/*
 * XREFs of vInitXLATE @ 0x1C031F4BC
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall vInitXLATE(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  _DWORD *v3; // rdi

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  memset((void *)(v1 + 6632), 0, 0x100uLL);
  memset((void *)(v1 + 6896), 0, 0x458uLL);
  *(_DWORD *)(v1 + 6908) = 256;
  *(_DWORD *)(v1 + 6900) = 1;
  *(_DWORD *)(v1 + 6896) = 1;
  *(_QWORD *)(v1 + 6912) = v1 + 6980;
  LODWORD(result) = 0;
  *(_DWORD *)(v1 + 6932) = -2;
  v3 = (_DWORD *)(v1 + 6984);
  do
  {
    result = (unsigned int)(result + 1);
    *v3++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
