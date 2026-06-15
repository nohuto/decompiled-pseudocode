/*
 * XREFs of sub_180101C20 @ 0x180101C20
 * Callers:
 *     sub_180101EA4 @ 0x180101EA4 (sub_180101EA4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180101C20(__int64 a1)
{
  bool v2; // di
  int v3; // ebx
  unsigned int v4; // esi
  int v6; // [rsp+70h] [rbp+38h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+40h] BYREF
  __int64 v8; // [rsp+80h] [rbp+48h] BYREF
  __int64 v9; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x45u, (__int64)&unk_1801726D0);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 24LL))(a1, &v6);
  if ( v3 < 0 )
    goto LABEL_29;
  v4 = 0;
  if ( v6 == 1 )
  {
LABEL_25:
    v3 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v4, &v8);
      if ( v3 < 0 )
        break;
      if ( v2 )
        goto LABEL_14;
      v9 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v9);
      if ( v3 < 0 )
        goto LABEL_32;
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7);
      if ( v3 < 0 )
        goto LABEL_32;
      v2 = v7 > 1;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v2 )
      {
LABEL_14:
        v9 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v8 + 104LL))(
               v8,
               23LL,
               &unk_18015C6A8,
               &v9) >= 0 )
        {
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x48u, (__int64)&unk_1801726D0, v8);
          }
          v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 1LL, 0LL);
          if ( v3 < 0 )
          {
LABEL_32:
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            break;
          }
        }
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( ++v4 >= v6 - 1 )
        goto LABEL_25;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v3 < 0 )
  {
LABEL_29:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x49u, (__int64)&unk_1801726D0, v3);
    }
  }
  return (unsigned int)v3;
}
