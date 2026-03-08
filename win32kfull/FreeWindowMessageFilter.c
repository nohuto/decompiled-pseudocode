/*
 * XREFs of FreeWindowMessageFilter @ 0x1C012EDC4
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CB9E8 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C003E2AC (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C00D6F0C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeWindowMessageFilter(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void **v5; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = 0LL;
  if ( (unsigned int)VWPLRemoveBase(
                       (struct tagVWPL **)(*(_QWORD *)(v4 + 424) + 848LL),
                       a2,
                       a1,
                       a4,
                       (unsigned __int64 *)&v5) )
    MsgLookupTableCleanUp(v5);
}
