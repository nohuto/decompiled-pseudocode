/*
 * XREFs of sub_1800BDD00 @ 0x1800BDD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_1800BDD00(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x1Du, (__int64)&unk_18016DA10, a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v7 = 0;
  if ( a3 )
  {
    do
    {
      sub_180071C14((_QWORD *)(a1 + 48));
      if ( (**(int (__fastcall ***)(_QWORD, void *, __int64))*a4)(*a4, &unk_18015DE98, a1 + 48) >= 0
        && *(_QWORD *)(a1 + 48) )
      {
        break;
      }
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
    v9 = *(_QWORD *)(a1 + 48);
    if ( !v9 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x1Eu, (__int64)&unk_18016DA10);
      }
      v7 = -2147467262;
LABEL_20:
      sub_18005E8F8((__int64)"CMuteSoftware::InitializeAPOs", 967, v7);
      goto LABEL_21;
    }
    v10 = *(_DWORD *)(a1 + 24) == 0;
    v14 = 50000LL;
    LOBYTE(v8) = !v10;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
            v9,
            v8,
            0LL,
            1LL,
            &v14);
    v7 = v11;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      LODWORD(v13) = v11;
      sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x1Fu, (__int64)&unk_18016DA10, a1, v13);
    }
    if ( v7 < 0 )
      goto LABEL_20;
  }
LABEL_21:
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  return (unsigned int)v7;
}
