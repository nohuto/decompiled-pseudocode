/*
 * XREFs of ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0180080
 * Callers:
 *     <none>
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bXformRound(
        EXFORMOBJ *this,
        struct _POINTL *a2,
        struct _POINTFIX *a3,
        unsigned __int64 a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[0] = (__int64)a2;
  v5[2] = 0LL;
  v5[1] = a4;
  v6 = 0;
  return EXFORMOBJ::bXformRound((__int64 *)this, v5, (__int64)a3, a4);
}
