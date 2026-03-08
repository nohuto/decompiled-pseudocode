/*
 * XREFs of IopSymlinkProcessReparse @ 0x140790C0C
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14023ADA0 (IopSymlinkGetECP.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopFindMatchingComponentsLengthR @ 0x140945054 (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rdx
  struct _ECP_LIST *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, v4 - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(v4) = IopGraftName(a1, a2);
  }
  else if ( v4 > 2 )
  {
    v8 = *(struct _ECP_LIST **)(a1 + 112);
    v13 = 0LL;
    LODWORD(v4) = IopSymlinkGetECP(v8, (PVOID *)&v13);
    if ( (v4 & 0x80000000) != 0LL )
      goto LABEL_12;
    v9 = v13;
    if ( v13[1] )
    {
      v10 = (_QWORD *)v13[1];
      do
      {
        v9 = v10;
        v10 = (_QWORD *)v10[1];
      }
      while ( v10 );
    }
    MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, v9 + 2);
    LODWORD(v4) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, a1, v13);
    if ( (v4 & 0x80000000) != 0LL )
LABEL_12:
      *(_DWORD *)(a1 + 48) = v4;
  }
  return v4;
}
