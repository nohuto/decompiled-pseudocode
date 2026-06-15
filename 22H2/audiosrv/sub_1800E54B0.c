/*
 * XREFs of sub_1800E54B0 @ 0x1800E54B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E54B0(__int64 a1, _QWORD *a2)
{
  HRESULT v4; // ebx
  LPVOID v5; // rax
  LPVOID v6; // rcx
  LPVOID v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = CoCreateInstance(&stru_18015E470, 0LL, 0x17u, &stru_18015E460, &v8);
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, 0LL, *(_QWORD *)(a1 + 72)),
        v4 < 0) )
  {
    v6 = v8;
  }
  else
  {
    v5 = v8;
    v6 = 0LL;
    v8 = 0LL;
    *a2 = v5;
  }
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
