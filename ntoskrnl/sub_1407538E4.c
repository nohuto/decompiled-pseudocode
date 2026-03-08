/*
 * XREFs of sub_1407538E4 @ 0x1407538E4
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1407537B0 (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x1402C4590 (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1404140F0 (ZwFlushInstructionCache.c)
 *     sub_1406B6FF4 @ 0x1406B6FF4 (sub_1406B6FF4.c)
 *     sub_14075424C @ 0x14075424C (sub_14075424C.c)
 *     sub_14075435C @ 0x14075435C (sub_14075435C.c)
 *     sub_140754E6C @ 0x140754E6C (sub_140754E6C.c)
 */

__int64 __fastcall sub_1407538E4(__int64 *a1, int a2, _DWORD *a3)
{
  void *v6; // rbp
  int v7; // ebx
  __int64 v8; // r15
  PMDL Mdl; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 0LL;
  Mdl = 0LL;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v7 = sub_14075424C(v6);
    if ( v7 >= 0 )
    {
      v7 = sub_1406B6FF4(v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, &Mdl, &v11);
      if ( v7 >= 0 )
      {
        v8 = v11;
        if ( !a2
          || (v7 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v6,
                     v11,
                     a3[2] & 0xFFFFFFF),
              v7 >= 0) )
        {
          v7 = sub_14075435C(0, (_DWORD)v6, v8, a3[2] & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
          if ( v7 >= 0 )
          {
            if ( !a2
              || (v7 = ApplyRelocations(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v6,
                         v8,
                         a3[2] & 0xFFFFFFF),
                  v7 >= 0) )
            {
              v7 = ZwFlushInstructionCache(-1LL, (__int64)v6);
            }
          }
        }
      }
    }
  }
  sub_140754E6C(Mdl);
  return (unsigned int)v7;
}
