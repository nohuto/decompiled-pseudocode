/*
 * XREFs of sub_180044364 @ 0x180044364
 * Callers:
 *     sub_180044290 @ 0x180044290 (sub_180044290.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 * Callees:
 *     sub_180044458 @ 0x180044458 (sub_180044458.c)
 *     sub_180044488 @ 0x180044488 (sub_180044488.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180044364(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 *a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // edi

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_18015DFC8, 0LL);
  }
  v8 = sub_18006A18C(88LL, &unk_18019F848);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_17;
  }
  v9 = sub_180044488(v8);
  v11 = v9;
  if ( !v9 )
  {
LABEL_17:
    v12 = -2147024882;
    goto LABEL_18;
  }
  LOBYTE(v10) = a4;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v9 + 256LL))(v9, a3, v10, a2);
  if ( v12 < 0 )
  {
LABEL_18:
    sub_18005E8F8("CAudioSessionManager::CreateAudioSessionControl", 510LL, (unsigned int)v12);
    goto LABEL_9;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 12, (unsigned int)&unk_18015DFC8, v11, 0LL);
  }
  sub_180044458(v11);
  *a5 = v11;
LABEL_9:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v12;
}
