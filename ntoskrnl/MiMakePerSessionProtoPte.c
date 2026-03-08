/*
 * XREFs of MiMakePerSessionProtoPte @ 0x140662CD4
 * Callers:
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiMakePerSessionProtoPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int SessionId; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 ProtoPteAddress; // rdi
  _BYTE *v11; // rbx
  __int64 v12; // rdi
  __int64 SharedProtos; // rax
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF

  SessionId = MmGetSessionIdEx(a1);
  v8 = MmGetSessionIdEx(a2);
  if ( SessionId == v8 )
    return ZeroPte;
  v15[0] = *(_QWORD *)(a4 + 72);
  v9 = *(_QWORD *)v15[0];
  if ( (*(_DWORD *)(*(_QWORD *)v15[0] + 56LL) & 0x8000000) == 0 )
    return ZeroPte;
  ProtoPteAddress = MiGetProtoPteAddress(a4, (unsigned __int64)(a3 << 25 >> 16) >> 12, 0, v15);
  if ( !ProtoPteAddress )
    return ZeroPte;
  v11 = (_BYTE *)v15[0];
  if ( (*(_BYTE *)(v15[0] + 34) & 2) == 0 )
    return ZeroPte;
  v12 = (ProtoPteAddress - *(_QWORD *)(MiGetSharedProtos(v9, SessionId, v15[0]) + 72)) >> 3;
  SharedProtos = MiGetSharedProtos(v9, v8, (__int64)v11);
  return MiSwizzleInvalidPte(((*(_QWORD *)(SharedProtos + 72) + 8 * v12) << 16) | 0x400);
}
