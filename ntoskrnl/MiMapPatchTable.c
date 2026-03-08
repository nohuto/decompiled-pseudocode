/*
 * XREFs of MiMapPatchTable @ 0x140A375E4
 * Callers:
 *     MiMapSystemImage @ 0x1407F5DFC (MiMapSystemImage.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x14020F510 (MiMakePrototypePteDirect.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMapPatchTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 PteAddress; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 PrototypePteDirect; // rbx
  int v8; // esi
  __int64 v9; // r8
  bool v10; // zf

  v3 = ((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0);
  PteAddress = MiGetPteAddress(a1);
  v5 = (_QWORD *)PteAddress;
  if ( v3 )
  {
    v6 = a2 - PteAddress;
    do
    {
      PrototypePteDirect = MiMakePrototypePteDirect((__int64)v5 + v6);
      v8 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v5) )
      {
        if ( MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v10 = (PrototypePteDirect & 1) == 0;
            goto LABEL_9;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v10 = (PrototypePteDirect & 1) == 0;
LABEL_9:
          if ( !v10 )
            PrototypePteDirect |= 0x8000000000000000uLL;
        }
      }
      *v5 = PrototypePteDirect;
      if ( v8 )
        MiWritePteShadow((__int64)v5, PrototypePteDirect, v9);
      ++v5;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
