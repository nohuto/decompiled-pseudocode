/*
 * XREFs of SmHpBufferProtectEx @ 0x140253F00
 * Callers:
 *     SmHpChunkUnprotect @ 0x140253EC4 (SmHpChunkUnprotect.c)
 *     SmHpUnprotectListNeighbors @ 0x1402CF368 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferUpdateFullness @ 0x1402D6F68 (SmHpBufferUpdateFullness.c)
 *     SmHpChunkHeapProtect @ 0x14035B2F8 (SmHpChunkHeapProtect.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1402A7A34 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059FCA0 (SmPrepareForFatalHeapCorruption.c)
 */

__int64 __fastcall SmHpBufferProtectEx(__int64 a1, _QWORD *a2, char a3, unsigned __int64 a4)
{
  int v5; // r15d
  ULONG_PTR v6; // r12
  unsigned int v8; // ebx
  unsigned __int8 *v10; // r14
  int v11; // r9d
  const unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp+10h] BYREF

  v15 = a1;
  BugCheckParameter4 = 0LL;
  v5 = *((_DWORD *)a2 + 3);
  v6 = (unsigned int)a4;
  v8 = 1;
  if ( v5 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = (unsigned __int8 *)*a2;
      v15 = 0LL;
      MetroHash64::Hash(v10, 0x1000uLL, (unsigned __int8 *const)&v15, a4);
      v11 = v15;
      if ( !(_DWORD)v15 )
        v11 = 1;
      if ( v11 == v5 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx(v10, v10, 4096LL, 4LL);
          *((_DWORD *)a2 + 3) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption(v10, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v6, *a2, *((unsigned int *)a2 + 3), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*a2, *a2, 4096LL, 2LL);
    v12 = (const unsigned __int8 *)*a2;
    v15 = 0LL;
    MetroHash64::Hash(v12, 0x1000uLL, (unsigned __int8 *const)&v15, v13);
    v14 = v15;
    *((_DWORD *)a2 + 3) = v15;
    if ( !v14 )
      *((_DWORD *)a2 + 3) = 1;
  }
  return v8;
}
