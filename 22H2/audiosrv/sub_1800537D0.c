/*
 * XREFs of sub_1800537D0 @ 0x1800537D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800537D0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v5[1], v6, (struct _TP_TIMER *)L"AudioVolumeConnect");
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 16LL, &unk_18016E298, a2);
  }
  *a3 = 0LL;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019EE40 + 48LL))(
         qword_18019EE40,
         a2,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18004BD84((int)retaddr, 266, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp", v7);
  }
  else
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_18016E298, v15);
    }
    v9 = v15;
    v15 = 0LL;
    v8 = 0;
    *a3 = v9;
  }
  sub_18000F708(&v15);
  sub_18000F690((__int64)pv, v10, v11);
  return v8;
}
