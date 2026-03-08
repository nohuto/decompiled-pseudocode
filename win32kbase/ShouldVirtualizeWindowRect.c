/*
 * XREFs of ShouldVirtualizeWindowRect @ 0x1C00A59F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ShouldVirtualizeWindowRect(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdi
  __int64 *v9; // rax

  if ( !a1 )
    return 0;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v6 = *(_QWORD *)(v4 + 480);
  v7 = 1;
  if ( (*(_BYTE *)(v6 + 224) & 1) != 0 )
    return 0;
  v8 = 0LL;
  v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 )
    v8 = *v9;
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 480) + 224LL) & 0x20) != 0
    || (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    return 0;
  }
  return v7;
}
