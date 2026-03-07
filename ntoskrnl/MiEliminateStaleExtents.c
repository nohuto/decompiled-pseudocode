void __fastcall MiEliminateStaleExtents(signed __int64 BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v11 = 17;
    v4 = 0LL;
    do
    {
      v8 = MiLockProtoPoolPageForce(BugCheckParameter1, (__int64)&v11);
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v4);
        if ( v9 != 0x8000000000000000uLL )
        {
          v10 = MiLockLeafPage((__int64 *)BugCheckParameter1, 0);
          if ( v10 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v9 | 0x4000000000000000LL;
          }
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v8, v11);
    }
    while ( v3 < a3 );
  }
}
