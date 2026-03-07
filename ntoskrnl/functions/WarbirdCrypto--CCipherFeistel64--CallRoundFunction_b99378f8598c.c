__int64 __fastcall WarbirdCrypto::CCipherFeistel64::CallRoundFunction(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(unsigned int *)(a1 + 16LL * a2 + 8);
  if ( (unsigned int)v2 <= 0x1E )
    __asm { jmp     rax }
  return 0LL;
}
