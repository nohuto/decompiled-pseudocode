/*
 * XREFs of SecureDump_GetCertificateThumbprint @ 0x14055BB70
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14055C3D0 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     MinCrypK_HashMemory @ 0x140A6C4C4 (MinCrypK_HashMemory.c)
 */

__int64 __fastcall SecureDump_GetCertificateThumbprint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v6[1] = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  v7 = *(_QWORD *)(v4 + 112);
  v6[0] = *(_DWORD *)(v4 + 104);
  result = MinCrypK_HashMemory(v4, a2, (unsigned int)v6, (int)a3 + 5, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a3 + 4) = v8;
    *(_DWORD *)a3 = 32772;
  }
  return result;
}
