/*
 * XREFs of sub_1800CE190 @ 0x1800CE190
 * Callers:
 *     sub_1800D0350 @ 0x1800D0350 (sub_1800D0350.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800CE248 @ 0x1800CE248 (sub_1800CE248.c)
 */

__int64 __fastcall sub_1800CE190(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x11u, (__int64)&unk_18015DFC8, a1, v7);
  }
  v8 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = sub_1800CE248(a1 + 192, &v8);
  v5 = v4;
  if ( v4 < 0 )
    sub_18005E8F8((__int64)"CAudioSessionManager::AddAudioSessionClientNotification", 634, v4);
  return v5;
}
