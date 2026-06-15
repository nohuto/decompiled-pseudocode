/*
 * XREFs of sub_1800EC438 @ 0x1800EC438
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800ED398 @ 0x1800ED398 (sub_1800ED398.c)
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 */

__int64 __fastcall sub_1800EC438(
        __int64 a1,
        __int64 a2,
        const wchar_t **a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v13; // ebx
  int v14; // ecx
  int v15; // eax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xCu, (__int64)&unk_18015E5F0, *a3);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t **, _QWORD, int, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 24LL))(
          qword_18019EE48,
          a2,
          a3,
          a4,
          a5,
          a6,
          0LL,
          0LL,
          a10);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0xDu, (__int64)&unk_18015E5F0, v13);
  }
  if ( v13 != -2005139364 )
  {
    if ( v13 != -2005139363 )
      goto LABEL_18;
    if ( !a7 )
      goto LABEL_19;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a8 + 96LL))(a8) )
  {
    if ( v13 != -2005139363 )
      goto LABEL_18;
    if ( a7 )
    {
      v15 = sub_1800ED398(v14, a2, (_DWORD)a3, a4, a5, a6, a9, a10);
      goto LABEL_17;
    }
LABEL_19:
    sub_18005E8F8((__int64)"CAudioResourceManager::GetSaDeviceForExclusiveStream", 1728, v13);
    return (unsigned int)v13;
  }
  v15 = sub_1800ED584(v14, a2, (_DWORD)a3, a4, a5, a6, a9, a10);
LABEL_17:
  v13 = v15;
LABEL_18:
  if ( v13 < 0 )
    goto LABEL_19;
  return (unsigned int)v13;
}
