/*
 * XREFs of GreCreateRectRgn @ 0x1C0019F70
 * Callers:
 *     EngCreateRectRgn @ 0x1C0019B70 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001A2C4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001CD74 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C001D054 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  struct OBJECT *v7; // rbx
  struct HOBJ__ *v8; // rsi
  PVOID Entry; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  struct _RECTL v13; // [rsp+40h] [rbp-10h] BYREF

  v13.left = a1;
  v13.top = a2;
  v13.right = a3;
  v13.bottom = a4;
  v4 = a1 & 0xF8000000;
  if ( v4 && v4 != -134217728
    || (v5 = a4 & 0xF8000000) != 0 && v5 != -134217728
    || (v6 = a3 & 0xF8000000) != 0 && v6 != -134217728
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    v7 = (struct OBJECT *)Entry;
    if ( Entry )
    {
      ERECTL::vOrder((ERECTL *)&v13);
      RGNOBJ::vSet((RGNOBJ *)&Entry, &v13);
      *((_DWORD *)v7 + 20) = GrepIsPreviousModeKernel();
      v12 = 0LL;
      v8 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v12, v7, 0, 1, 4u);
      if ( !v8 )
        REGION::vDeleteREGION(v7);
      if ( v12 )
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
    }
    else
    {
      v8 = 0LL;
      EngSetLastError(8u);
    }
    return v8;
  }
}
