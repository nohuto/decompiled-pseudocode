/*
 * XREFs of ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00191F0
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UNDOW32THREADPIDLOCKS::bRedo(__int64 **this)
{
  unsigned int v2; // edi
  __int64 v4; // r8
  __int64 *v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 *v8; // rax
  unsigned __int64 v9; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 1;
  if ( !*((_DWORD *)this + 4) )
  {
LABEL_2:
    if ( !*((_DWORD *)this + 5) )
      return v2;
    v9 = *(_QWORD *)(*this[1] + 496);
    goto LABEL_16;
  }
  v4 = **this;
  if ( !*((_DWORD *)this + 5) )
  {
    if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v4 + 496), 0LL) == 2 )
    {
      *(_DWORD *)(**this + 44) |= 1u;
      v2 = 0;
    }
    goto LABEL_2;
  }
  v5 = this[1];
  v6 = *(_QWORD *)(v4 + 496);
  v7 = *(_QWORD *)(*v5 + 496);
  if ( v7 >= v6 )
  {
    if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v4 + 496), 0LL) == 2 )
    {
      *(_DWORD *)(**this + 44) |= 1u;
      v2 = 0;
    }
    _InterlockedOr(v10, 0);
    v9 = v7;
LABEL_16:
    if ( (unsigned int)SURFACE::Map(v9, 0LL) != 2 )
      return v2;
    v8 = this[1];
LABEL_18:
    *(_DWORD *)(*v8 + 44) |= 1u;
    return 0;
  }
  if ( (unsigned int)SURFACE::Map(*(_QWORD *)(*v5 + 496), 0LL) == 2 )
  {
    *(_DWORD *)(*this[1] + 44) |= 1u;
    v2 = 0;
  }
  _InterlockedOr(v10, 0);
  if ( (unsigned int)SURFACE::Map(v6, 0LL) == 2 )
  {
    v8 = *this;
    goto LABEL_18;
  }
  return v2;
}
