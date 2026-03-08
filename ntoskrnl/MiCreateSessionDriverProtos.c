/*
 * XREFs of MiCreateSessionDriverProtos @ 0x140A4316C
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A6104 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiDeleteSessionDriverProtos @ 0x14067F83C (MiDeleteSessionDriverProtos.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406A556C (MiUnmapImageInSystemSpace.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 */

__int64 __fastcall MiCreateSessionDriverProtos(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  ULONG i; // ebp
  __int64 v11; // r12
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-B0h]
  __int64 v16; // [rsp+40h] [rbp-A8h]
  _QWORD v17[10]; // [rsp+50h] [rbp-98h] BYREF

  v15 = a2;
  v16 = a3;
  memset(v17, 0, sizeof(v17));
  v5 = *a1;
  v14 = 0LL;
  if ( _bittest16((const signed __int16 *)(v5 + 12), 0xBu) )
    return 1LL;
  v7 = a2 - *(_QWORD *)(v5 + 32);
  if ( (int)MiMapImageInSystemSpace(a1, 3, (__int64)v17) < 0 )
    return 0LL;
  v8 = v17[0];
  v9 = (__int64)(a1 + 16);
  for ( i = 0; ; i += v11 )
  {
    if ( !v9 )
    {
      MiUnmapImageInSystemSpace((__int64)v17);
      *(_WORD *)(v5 + 12) |= 0x800u;
      return 1LL;
    }
    v11 = *(unsigned int *)(v9 + 44);
    if ( ((*(_WORD *)(v9 + 32) >> 1) & 4) == 0
      && ((MiFlags & 0xC000) != 0x8000 || ((*(_WORD *)(v9 + 32) >> 1) & 2) == 0) )
    {
      break;
    }
LABEL_11:
    v9 = *(_QWORD *)(v9 + 16);
    v8 += v11 << 12;
  }
  if ( (int)MiAllocatePerSessionProtos(v9, v8, i, v7, &v14) >= 0 )
  {
    v12 = v14;
    v13 = v15;
    *((_DWORD *)v14 + 16) = 0;
    *v12 = v13;
    *(_QWORD *)(v9 + 24) = v12;
    if ( v16 )
      RtlClearBits(*(PRTL_BITMAP *)(v16 + 40), i, *(_DWORD *)(v9 + 44));
    goto LABEL_11;
  }
  MiUnmapImageInSystemSpace((__int64)v17);
  MiDeleteSessionDriverProtos(a1);
  return 0LL;
}
