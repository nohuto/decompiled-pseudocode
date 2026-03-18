/*
 * XREFs of GreCreateRectRgn @ 0x1C008E350
 * Callers:
 *     EngCreateRectRgn @ 0x1C008E2D0 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025980 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0028D70 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C008E460 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008E64C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  PSLIST_ENTRY v4; // rbx
  struct HOBJ__ *v5; // rdi
  struct _RECTL v7; // [rsp+30h] [rbp-50h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+48h] [rbp-38h]
  _BYTE v10[48]; // [rsp+50h] [rbp-30h] BYREF

  v7.left = a1;
  v7.top = a2;
  v7.right = a3;
  v7.bottom = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&ListEntry, 0LL, 1);
    v4 = ListEntry;
    if ( ListEntry )
    {
      ERECTL::vOrder((ERECTL *)&v7);
      RGNOBJ::vSet((struct _RECTL **)&ListEntry, &v7);
      HIDWORD(v4[2].Next) = GrepIsPreviousModeKernel();
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v10);
      v5 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v10, (struct OBJECT *)v4, 0, 1, 4u);
      if ( !v5 )
      {
        REGION::vDeleteREGION(v4);
        v4 = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v10);
    }
    else
    {
      v5 = 0LL;
      EngSetLastError(8u);
    }
    if ( v9 == 1 )
      REGION::vDeleteREGION(v4);
  }
  return v5;
}
