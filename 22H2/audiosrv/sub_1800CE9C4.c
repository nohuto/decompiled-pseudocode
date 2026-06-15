/*
 * XREFs of sub_1800CE9C4 @ 0x1800CE9C4
 * Callers:
 *     sub_1800D0620 @ 0x1800D0620 (sub_1800D0620.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_1800CE6DC @ 0x1800CE6DC (sub_1800CE6DC.c)
 *     sub_1800CF4A4 @ 0x1800CF4A4 (sub_1800CF4A4.c)
 */

__int64 __fastcall sub_1800CE9C4(__int64 a1, __int64 *a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v8 = a1 + 56;
  if ( sub_1800CF4A4(v8, (_DWORD)a2, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13) )
  {
    v9 = sub_1800CF4A4(v8, (_DWORD)a2, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13);
    if ( !v9 )
      v9 = sub_1800CE6DC(v8, a2, v12, v11);
    v7 = *(_QWORD *)(v9 + 80);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 0xAu, (__int64)&unk_18015DFC8, 0LL, a2[9]);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *a3 = v7;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7 == 0 ? 0x80070002 : 0;
}
