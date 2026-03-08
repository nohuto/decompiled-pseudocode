/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C00C8EE0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 * Callees:
 *     xxxSetSysColors @ 0x1C001A31C (xxxSetSysColors.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[16]; // [rsp+30h] [rbp-128h] BYREF
  char v10[128]; // [rsp+40h] [rbp-118h] BYREF
  char v11[128]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v10, (char *)gpsi + 4444, 0x7CuLL);
  v4 = 0LL;
  do
  {
    *(_DWORD *)&v11[v4] = v0;
    v4 += 4LL;
    ++v0;
  }
  while ( v0 < 0x1F );
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9, v1, v2, v3);
  xxxSetSysColors(v5, v0, v11, v10, 6u);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9, v6, v7, v8);
}
