/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C00C9674
 * Callers:
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C00C9674 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x1C004B7F8 (IntersectWithParents.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C00C9674 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C00DC840 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v6; // rcx
  struct tagWND *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+28h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( !v6 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 820LL) & 0x400) != 0 )
    return 1LL;
  v12 = 0LL;
  if ( v6 <= 1 || (unsigned int)GreGetRgnBox(v6, &v12) )
    v12 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  if ( !(unsigned int)IntersectWithParents((__int64)a2, &v12.left)
    || (AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11),
        xxxInternalInvalidate(a2, ghrgnSPB2, 0x48u),
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11, v9, v10),
        (unsigned int)SpbCheckRect2(a1, a2, &v12, 1u)) )
  {
LABEL_2:
    if ( a3 )
    {
      for ( i = (struct tagWND *)*((_QWORD *)a2 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( !(unsigned int)SpbTransfer(a1, i, 1) )
          return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
