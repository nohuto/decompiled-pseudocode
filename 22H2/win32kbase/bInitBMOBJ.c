/*
 * XREFs of bInitBMOBJ @ 0x1C02DE010
 * Callers:
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreCreateBitmap @ 0x1C005EAE0 (GreCreateBitmap.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00609A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

HSURF __fastcall bInitBMOBJ(__int64 a1)
{
  unsigned int v1; // ebx
  HSURF result; // rax
  unsigned __int64 v3; // rdi
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v5; // [rsp+50h] [rbp-18h]

  SGDGetSessionState(a1);
  v1 = 0;
  result = (HSURF)GreCreateBitmap(1, 1, 1, 1, 0LL);
  v3 = (unsigned __int64)result;
  if ( result )
  {
    SURFREF::SURFREF((SURFREF *)v4, result);
    if ( v5 )
    {
      HmgSetOwner((unsigned int)v5[2].Flink, 0, 5);
      bSetStockObject(v3, 21, 0);
      v1 = 1;
      v5[2].Flink = (struct _LIST_ENTRY *)(v3 | 0x800000);
      WPP_MAIN_CB.Queue.ListEntry.Blink = v5;
    }
    SURFREF::~SURFREF((SURFREF *)v4);
    return (HSURF)v1;
  }
  return result;
}
