/*
 * XREFs of PsMapSystemDlls @ 0x140756164
 * Callers:
 *     MiMapProcessExecutable @ 0x1407557F0 (MiMapProcessExecutable.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebx
  int v7; // ebp
  int v8; // edi
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess(a1, 0LL, (__int64)&v12, a4);
  }
  v8 = 0;
  v9 = (__int64 *)PspSystemDlls;
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9
      && (!v8
       || (*(_DWORD *)(v10 + 8) & 8) != 0
       && a1[1].Affinity.StaticBitmap[30]
       && v8 == (unsigned int)PsWow64GetProcessNtdllType((__int64)a1)) )
    {
      v4 = PspMapSystemDll(
             a1,
             v10,
             a2,
             0LL,
             v12,
             *((_QWORD *)&v12 + 1),
             v13,
             *((_QWORD *)&v13 + 1),
             v14,
             *((_QWORD *)&v14 + 1));
      if ( v4 < 0 )
        break;
    }
    ++v8;
    ++v9;
    if ( v8 >= 6 )
      goto LABEL_9;
  }
  if ( v8 )
    v4 = -1073741405;
LABEL_9:
  if ( v7 )
    KiUnstackDetachProcess((__int64)&v12, 0LL);
  return (unsigned int)v4;
}
