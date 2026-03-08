/*
 * XREFs of VidSchiStartNodeYield @ 0x1C0018F28
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0002D40 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSelectContext @ 0x1C0006BC0 (VidSchiSelectContext.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00379BC (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0030060 (McTemplateK0pqxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiStartNodeYield(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // r8

  v4 = *(_QWORD *)(a1 + 24);
  v8 = *(unsigned int *)(v4 + 208);
  if ( !*(_QWORD *)(v4 + 192) )
  {
    v9 = (_DWORD)v8 == 10 && a4 == 16 ? 9500LL : (unsigned int)(100 * a4 * v8);
    ExSetTimer(*(_QWORD *)(v4 + 184), -v9, v9, 0LL);
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v10, &EventYieldSetExpirationTimer, v11, *(_QWORD *)(v4 + 16));
  }
  v12 = 100LL * *(_QWORD *)(a1 + 2008);
  *(_QWORD *)(a1 + 2000) = a2;
  result = a2 + 2 * (v12 / v8) + v12 / v8;
  *(_QWORD *)(v4 + 192) = result;
  if ( (byte_1C00769C1 & 1) != 0 )
  {
    v14 = *(_QWORD *)(v4 + 192) - a2;
    if ( is_mul_ok(v14, 0x989680uLL) )
      v15 = v14 * (unsigned __int128)0x989680uLL / a3;
    else
      LOBYTE(v15) = ((unsigned __int8)(v14 / a3) << 7) + 10000000 * (v14 % a3) / a3;
    v16 = *(_QWORD *)(a1 + 2008);
    if ( is_mul_ok(v16, 0x989680uLL) )
      v17 = v16 * (unsigned __int128)0x989680uLL / a3;
    else
      LODWORD(v17) = 10000000 * (v16 / a3) + 10000000 * (v16 % a3) / a3;
    return McTemplateK0pqxx_EtwWriteTransfer(
             *(unsigned __int16 *)(a1 + 4),
             (unsigned int)&EventYieldStartNode,
             v17,
             *(_QWORD *)(v4 + 16),
             *(_WORD *)(a1 + 4),
             v17,
             v15);
  }
  return result;
}
