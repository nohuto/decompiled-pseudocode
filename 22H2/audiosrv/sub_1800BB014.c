/*
 * XREFs of sub_1800BB014 @ 0x1800BB014
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 * Callees:
 *     sub_1800356E8 @ 0x1800356E8 (sub_1800356E8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053FA0 @ 0x180053FA0 (sub_180053FA0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABF4 @ 0x1800BABF4 (sub_1800BABF4.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800D0EAC @ 0x1800D0EAC (sub_1800D0EAC.c)
 *     sub_1800E48F0 @ 0x1800E48F0 (sub_1800E48F0.c)
 *     sub_1801064C4 @ 0x1801064C4 (sub_1801064C4.c)
 *     sub_18011F738 @ 0x18011F738 (sub_18011F738.c)
 */

__int64 __fastcall sub_1800BB014(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // eax
  void *v8; // rbx
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 38LL, &unk_18016D4B0);
    v2 = off_18019C348;
  }
  if ( *(_DWORD *)(a1 + 104) )
  {
    v3 = sub_180053FA0();
    v4 = sub_1800BABF4((__int64)v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      sub_18004BD84((int)retaddr, 1573, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp", v4);
      return v5;
    }
    *(_DWORD *)(a1 + 104) = 0;
    v2 = off_18019C348;
  }
  if ( *(_DWORD *)(a1 + 100) )
  {
    if ( v2 != &off_18019C348 && (*((_BYTE *)v2 + 28) & 4) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      sub_1800BB4B4(v2[2], 39LL, &unk_18016D4B0);
    v7 = RpcServerUnregisterIfEx(&unk_180148EB0, 0LL, 1);
    if ( v7
      && off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 40LL, &unk_18016D4B0, v7);
    }
    *(_DWORD *)(a1 + 100) = 0;
  }
  if ( qword_18019E610 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E610 + 24LL))(qword_18019E610);
  EnterCriticalSection(&stru_18019EF60);
  sub_1800356E8((__int64)&qword_18019D9B0);
  LeaveCriticalSection(&stru_18019EF60);
  sub_1801064C4();
  sub_1800D0EAC();
  if ( qword_18019EE58 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE58 + 16LL))(qword_18019EE58);
    qword_18019EE58 = 0LL;
  }
  sub_1800E48F0();
  v8 = (void *)qword_18019E5F0;
  if ( qword_18019E5F0 )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)(qword_18019E5F0 + 24));
    sub_18006A148(v8);
  }
  qword_18019E5F0 = 0LL;
  sub_18011F738();
  if ( qword_18019EE40 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE40 + 16LL))(qword_18019EE40);
    qword_18019EE40 = 0LL;
  }
  v9 = qword_18019EED0;
  if ( qword_18019EED0 )
  {
    qword_18019EED0 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 41LL, &unk_18016D4B0, 0LL);
  }
  return 0LL;
}
