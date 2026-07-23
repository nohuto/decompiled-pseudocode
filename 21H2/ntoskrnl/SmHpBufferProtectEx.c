/*
 * XREFs of SmHpBufferProtectEx @ 0x140275470
 * Callers:
 *     SmHpUnprotectListNeighbors @ 0x14024D868 (SmHpUnprotectListNeighbors.c)
 *     SmHpChunkUnprotect @ 0x140275434 (SmHpChunkUnprotect.c)
 *     SmHpBufferUpdateFullness @ 0x1402882B8 (SmHpBufferUpdateFullness.c)
 *     SmHpChunkHeapProtect @ 0x1402A0098 (SmHpChunkHeapProtect.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059FED0 (SmPrepareForFatalHeapCorruption.c)
 */

__int64 __fastcall SmHpBufferProtectEx(__int64 a1, _QWORD *a2, char a3, unsigned int a4)
{
  int v5; // r15d
  ULONG_PTR v6; // r12
  unsigned int v8; // ebx
  unsigned __int8 *v10; // r14
  int v11; // r9d
  const unsigned __int8 *v12; // rcx
  int v13; // eax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp+10h] BYREF

  v14 = a1;
  BugCheckParameter4 = 0LL;
  v5 = *((_DWORD *)a2 + 3);
  v6 = a4;
  v8 = 1;
  if ( v5 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = (unsigned __int8 *)*a2;
      v14 = 0LL;
      MetroHash64::Hash(v10, 0x1000uLL, (unsigned __int8 *const)&v14);
      v11 = v14;
      if ( !(_DWORD)v14 )
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
    v14 = 0LL;
    MetroHash64::Hash(v12, 0x1000uLL, (unsigned __int8 *const)&v14);
    v13 = v14;
    *((_DWORD *)a2 + 3) = v14;
    if ( !v13 )
      *((_DWORD *)a2 + 3) = 1;
  }
  return v8;
}
