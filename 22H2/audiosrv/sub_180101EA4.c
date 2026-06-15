/*
 * XREFs of sub_180101EA4 @ 0x180101EA4
 * Callers:
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1801008BC @ 0x1801008BC (sub_1801008BC.c)
 *     sub_180101C20 @ 0x180101C20 (sub_180101C20.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180101EA4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  _UNKNOWN **v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+38h] [rbp-8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 0x42u, (__int64)&unk_1801726D0, a1, a2);
  }
  v4 = sub_1801008BC(a1, (__int64)&v12);
  if ( v4 >= 0 )
  {
    v4 = sub_1801008BC(a2, (__int64)&v10);
    if ( v4 >= 0 )
    {
      v11 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v11);
      if ( v4 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 72LL))(
               v11,
               v12,
               v10,
               0LL,
               &v9);
        v4 = v5;
        if ( v5 < 0 )
        {
          if ( v5 == -2147023728 )
          {
            v6 = (_UNKNOWN **)off_18019C348;
            if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
              && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
              && *((_BYTE *)off_18019C348 + 25) >= 4u )
            {
              sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x43u, (__int64)&unk_1801726D0);
              v6 = (_UNKNOWN **)off_18019C348;
            }
            v4 = 0;
          }
          else
          {
            v6 = (_UNKNOWN **)off_18019C348;
          }
          v7 = v11;
          if ( !v11 )
          {
LABEL_22:
            if ( v4 >= 0 )
              goto LABEL_29;
            goto LABEL_25;
          }
          goto LABEL_20;
        }
        v4 = sub_180101C20(v9);
      }
      v7 = v11;
      if ( !v11 )
      {
LABEL_21:
        v6 = (_UNKNOWN **)off_18019C348;
        goto LABEL_22;
      }
LABEL_20:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_21;
    }
  }
  v6 = (_UNKNOWN **)off_18019C348;
LABEL_25:
  if ( v6 != &off_18019C348 && (*((_DWORD *)v6 + 7) & 0x800000) != 0 && *((_BYTE *)v6 + 25) >= 2u )
    sub_1800BB4E0((__int64)v6[2], 0x44u, (__int64)&unk_1801726D0, v4);
LABEL_29:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v4;
}
