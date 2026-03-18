/*
 * XREFs of ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C01F3BB0
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01EE804 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CIVChannel::sHeaderCallback(struct _IVSRContext *a1)
{
  unsigned int *v1; // rdi
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  v1 = (unsigned int *)*((_QWORD *)a1 + 13);
  v9 = *((_OWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 44);
  v4 = v1[2];
  v11 = *((_QWORD *)a1 + 20);
  if ( !isChildPartition() || (v5 = *v1, LODWORD(v11) = v4, v5 < 4) )
    KeBugCheck(0x164u);
  v6 = *((_QWORD *)a1 + 17);
  v7 = *((_QWORD *)a1 + 16);
  v10 = v11;
  return ivrIVRecv(v5, v7, v6, &v9, v3, (__int64)CIVChannel::sPacketCallback);
}
