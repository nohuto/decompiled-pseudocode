/*
 * XREFs of NtGdiSetColorSpace @ 0x1C02D16C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v5 = v9[0];
  if ( v9[0] )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      LOBYTE(v4) = 9;
      v6 = HmgShareLockCheck(a2, v4);
      v5 = v9[0];
      v7 = v6;
      if ( v6 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v9[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v9[0] + 96LL) = v7;
        INC_SHARE_REF_CNT(v7);
        v3 = 1;
        DEC_SHARE_REF_CNT(v7);
        v5 = v9[0];
      }
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  return v3;
}
