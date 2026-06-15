/*
 * XREFs of sub_1800CF570 @ 0x1800CF570
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800CDF74 @ 0x1800CDF74 (sub_1800CDF74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF570(__int64 a1, __int64 *a2)
{
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned __int16 v11; // dx

  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 716LL);
  if ( v5 && v5 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 48LL))(*a2) )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 48LL))(*a2);
      sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 0x27u, (__int64)&unk_18015DFC8, v6);
    }
    goto LABEL_19;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
  v4 = MMDevAPI_12(*(_QWORD *)(a1 + 8), v7, v8, v9);
  if ( !v4 )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x40) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_19;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    v11 = 38;
    goto LABEL_16;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    v11 = 37;
LABEL_16:
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), v11, (__int64)&unk_18015DFC8, v10);
  }
  if ( v4 < 0 )
    sub_18005E8F8((__int64)"CAudioSessionManagerNotification::Invoke", 1103, v4);
LABEL_19:
  sub_1800CDF74(a2);
  return (unsigned int)v4;
}
