/*
 * XREFs of sub_18005C3D8 @ 0x18005C3D8
 * Callers:
 *     sub_18005C32C @ 0x18005C32C (sub_18005C32C.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005C3D8(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = &off_180146ED0;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, _DWORD *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      dword_18015B8E0,
      v1);
  }
  sub_1800461B8((__int64 *)&ppunkMarshal);
  v4 = qword_18019E418;
  *(_QWORD *)a1 = off_180147C18;
  *(_QWORD *)(a1 + 8) = off_180147B78;
  *(_DWORD *)(a1 + 44) = 1;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
