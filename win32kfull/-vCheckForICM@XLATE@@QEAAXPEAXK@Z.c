/*
 * XREFs of ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C02DE924
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     <none>
 */

void __fastcall XLATE::vCheckForICM(XLATE *this, void *a2, int a3)
{
  void *v3; // r9
  __int64 v5; // rax
  int v6; // eax

  *((_DWORD *)this + 18) = 0;
  v3 = a2;
  *((_QWORD *)this + 8) = 0LL;
  if ( (a3 & 7) != 0 )
  {
    if ( (a3 & 3) != 0 )
    {
      *((_DWORD *)this + 18) = a3;
      *((_QWORD *)this + 8) = a2;
      if ( (a3 & 2) != 0 )
      {
        LOBYTE(a2) = 14;
        v5 = HmgShareLockCheck(v3, a2);
        if ( v5 )
        {
          *((_DWORD *)this + 1) |= 0x10u;
          DEC_SHARE_REF_CNT(v5);
        }
      }
      else if ( (a3 & 1) != 0 )
      {
        v6 = *((_DWORD *)this + 1) | 0x20;
        *((_DWORD *)this + 1) = v6;
        if ( (a3 & 0x10000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)this + 1) = v6 | 8;
        }
      }
    }
    else if ( (a3 & 4) != 0 )
    {
      *((_DWORD *)this + 1) |= 0x20u;
      *((_DWORD *)this + 18) = a3;
    }
  }
}
