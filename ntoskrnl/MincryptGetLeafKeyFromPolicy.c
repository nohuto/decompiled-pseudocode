/*
 * XREFs of MincryptGetLeafKeyFromPolicy @ 0x140A6E0A4
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14055C3D0 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MincryptGetLeafKeyFromPolicy(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_DWORD *)a1
    && (v1 = *(_QWORD *)(a1 + 16)) != 0
    && (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0
    && *(_DWORD *)(v1 + 16) )
  {
    return *(_QWORD *)(v1 + 8);
  }
  else
  {
    return 0LL;
  }
}
