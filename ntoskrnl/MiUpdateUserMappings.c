/*
 * XREFs of MiUpdateUserMappings @ 0x140AA95F4
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeQuasiPte @ 0x14064BCC0 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x14064BCFC (MiRevertQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  __int64 *i; // rdi
  __int64 v1; // rax
  unsigned __int64 QuasiPte; // rax
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // r8
  bool v6; // zf
  unsigned __int64 result; // rax

  for ( i = (__int64 *)0xFFFFF6FB7DBED000LL; (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL; ++i )
  {
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( (v1 & 1) != 0 )
    {
      QuasiPte = MiMakeQuasiPte(v1);
    }
    else
    {
      if ( (v1 & 0x400) == 0 )
        goto LABEL_16;
      QuasiPte = MiRevertQuasiPte(v1);
    }
    v3 = QuasiPte;
    v4 = 0;
    if ( MiPteInShadowRange((unsigned __int64)i) )
    {
      if ( MiPteHasShadow() )
      {
        v4 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v6 = (v3 & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v6 = (v3 & 1) == 0;
LABEL_12:
        if ( !v6 )
          v3 |= 0x8000000000000000uLL;
      }
    }
    *i = v3;
    if ( v4 )
      MiWritePteShadow((__int64)i, v3, v5);
LABEL_16:
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  return result;
}
