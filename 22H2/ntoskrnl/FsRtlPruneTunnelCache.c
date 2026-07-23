/*
 * XREFs of FsRtlPruneTunnelCache @ 0x140668D04
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x140668870 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406689E0 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     FsRtlRemoveNodeFromTunnel @ 0x1402F815C (FsRtlRemoveNodeFromTunnel.c)
 */

__int64 __fastcall FsRtlPruneTunnelCache(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _RTL_SPLAY_LINKS *v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 1;
  v3 = (_QWORD *)(a1 + 64);
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] - (unsigned int)TunnelMaxAge;
  while ( 1 )
  {
    v7 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v8 = (_RTL_SPLAY_LINKS *)(v7 - 3);
    v9 = v7[2];
    if ( v9 >= v6 && v9 <= v5 )
      break;
    FsRtlRemoveNodeFromTunnel(a1, v8, a2, &v11);
  }
  while ( 1 )
  {
    result = *(unsigned __int16 *)(a1 + 80);
    if ( (unsigned int)result <= TunnelMaxEntries )
      break;
    FsRtlRemoveNodeFromTunnel(a1, (_RTL_SPLAY_LINKS *)(*v3 - 24LL), a2, &v11);
  }
  return result;
}
