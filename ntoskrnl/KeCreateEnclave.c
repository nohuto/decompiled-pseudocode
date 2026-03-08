/*
 * XREFs of KeCreateEnclave @ 0x140971484
 * Callers:
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiEncls @ 0x140417230 (KiEncls.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int16 a6,
        int *a7,
        _DWORD *a8)
{
  _QWORD *v8; // rbp
  bool v10; // zf
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp+0h] BYREF

  v8 = (_QWORD *)((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL);
  v10 = (KeFeatureBits & 0x10000000000LL) == 0;
  *a8 = 0;
  if ( v10 )
    return 3221225659LL;
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) && (a6 & 0x100) != 0 || *(_QWORD *)a4 != a3 )
    return 3221225485LL;
  if ( (a6 & 1) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 48) & 4) != 0 )
      goto LABEL_8;
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(a4 + 48) & 4) != 0 )
    return 3221225485LL;
LABEL_8:
  *(_QWORD *)(a4 + 8) = a2;
  *a7 = 0;
  v11 = *a7;
  if ( (*(_BYTE *)(a4 + 48) & 2) != 0 )
    v11 = 2;
  *a7 = v11;
  memset(v8 + 8, 0, 0x40uLL);
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 64;
  *v8 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4;
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  KiEncls(0);
  return 0LL;
}
