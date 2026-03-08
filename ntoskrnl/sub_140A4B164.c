/*
 * XREFs of sub_140A4B164 @ 0x140A4B164
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1407537B0 (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x1402C4590 (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1404140F0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     sub_1406B6FF4 @ 0x1406B6FF4 (sub_1406B6FF4.c)
 *     sub_14075424C @ 0x14075424C (sub_14075424C.c)
 *     sub_14075435C @ 0x14075435C (sub_14075435C.c)
 *     sub_140754E6C @ 0x140754E6C (sub_140754E6C.c)
 */

__int64 __fastcall sub_140A4B164(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // ebx
  void *v7; // r14
  _DWORD *v8; // rsi
  __int64 v10; // [rsp+38h] [rbp-50h]
  PMDL Mdl; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF
  void *v13; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0LL;
  Mdl = 0LL;
  v12 = 0;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v6 = sub_14075424C(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0);
    if ( v6 >= 0 )
    {
      v6 = sub_1406B6FF4(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, &Mdl, &v13);
      if ( v6 >= 0 )
      {
        v8 = v13;
        if ( !a2
          || (v6 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v7,
                     (__int64)v13,
                     a3[2] & 0xFFFFFFF),
              v6 >= 0) )
        {
          memmove(v8, v7, a3[2] & 0xFFFFFFF);
          if ( (*a3 & 2) == 0 )
          {
            if ( (a3[2] & 0xFFFFFFFu) < 4 )
            {
              v6 = -1073741811;
              goto LABEL_16;
            }
            *v8 = a3[3];
          }
          v6 = sub_14075435C(
                 0,
                 (char *)v8,
                 (char *)v8,
                 a3[2] & 0xFFFFFFF,
                 (__int64 *)(a1[7] + 72),
                 a3[1] & 0xFFFFFFF,
                 (__int128 *)(a1[7] + 80),
                 v10,
                 &v12);
          if ( v6 >= 0 )
          {
            if ( !a2
              || (v6 = ApplyRelocations(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v7,
                         (__int64)v8,
                         a3[2] & 0xFFFFFFF),
                  v6 >= 0) )
            {
              v6 = ZwFlushInstructionCache(-1LL, (__int64)v7);
            }
          }
        }
      }
    }
  }
LABEL_16:
  sub_140754E6C(Mdl);
  return (unsigned int)v6;
}
