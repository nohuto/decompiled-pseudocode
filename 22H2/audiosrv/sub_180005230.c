/*
 * XREFs of sub_180005230 @ 0x180005230
 * Callers:
 *     sub_1800745A0 @ 0x1800745A0 (sub_1800745A0.c)
 *     sub_1800745B0 @ 0x1800745B0 (sub_1800745B0.c)
 *     sub_1800745C0 @ 0x1800745C0 (sub_1800745C0.c)
 *     sub_1800745D0 @ 0x1800745D0 (sub_1800745D0.c)
 *     sub_1800CA230 @ 0x1800CA230 (sub_1800CA230.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA2A0 @ 0x1800CA2A0 (sub_1800CA2A0.c)
 */

__int64 __fastcall sub_180005230(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a3 )
    return 2147500035LL;
  v3 = *a2 - 0x48C75718D31C391DLL;
  if ( *a2 == 0x48C75718D31C391DLL )
    v3 = a2[1] + 0x220A528B17DBEC50LL;
  if ( !v3 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
    return 0LL;
  }
  v5 = *a2 - 0x4C58C16CD8F0A3EALL;
  if ( *a2 == 0x4C58C16CD8F0A3EALL )
    v5 = a2[1] + 0xB681AB537A14369LL;
  if ( !v5 )
  {
    if ( a1 )
    {
      *a3 = a1 + 16;
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
      return 0LL;
    }
    goto LABEL_21;
  }
  v6 = *a2 - 0x4AA5C7F87597CA7ALL;
  if ( *a2 == 0x4AA5C7F87597CA7ALL )
    v6 = a2[1] + 0x734251260650C37ELL;
  if ( !v6 )
  {
    v8 = a1 + 24;
    if ( !a1 )
      v8 = 0LL;
    goto LABEL_18;
  }
  v7 = *a2 - 0x4C3FC6D96DFC29C8LL;
  if ( *a2 == 0x4C3FC6D96DFC29C8LL )
    v7 = a2[1] - 0x1A60DC4D6D1B46A4LL;
  if ( !v7 )
  {
    if ( a1 )
    {
      v8 = a1 + 8;
LABEL_18:
      *a3 = v8;
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
      return 0LL;
    }
LABEL_21:
    v8 = 0LL;
    goto LABEL_18;
  }
  return sub_1800CA2A0(a1 + 32, a2, a3, a1);
}
