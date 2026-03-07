__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // r8
  bool v8; // zf
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 17;
  v3 = MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
  v4 = MiLockProtoPoolPageForce((signed __int64)a2, (__int64)&v10);
  v5 = MiLockLeafPage(a2, 0);
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiUnlockProtoPoolPage(v4, v10);
  }
  v6 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( MiPteHasShadow() )
    {
      v6 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v8 = (v3 & 1) == 0;
        goto LABEL_9;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v8 = (v3 & 1) == 0;
LABEL_9:
      if ( !v8 )
        v3 |= 0x8000000000000000uLL;
    }
  }
  *a2 = v3;
  if ( v6 )
    MiWritePteShadow((__int64)a2, v3, v7);
  return MiUnlockProtoPoolPage(v4, v10);
}
