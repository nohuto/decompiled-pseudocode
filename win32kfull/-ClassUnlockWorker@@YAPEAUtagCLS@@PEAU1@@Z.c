/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0012890
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0012624 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 *     ClassUnlock @ 0x1C012DCF4 (ClassUnlock.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     DestroyClass @ 0x1C0033D18 (DestroyClass.c)
 */

struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1)
{
  __int64 v1; // rax
  struct tagCLS *i; // rdx
  unsigned __int64 CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v1 = *((_QWORD *)a1 + 7);
  if ( a1 == (struct tagCLS *)v1 )
    return a1;
  --*(_DWORD *)(v1 + 72);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  for ( i = *(struct tagCLS **)(*((_QWORD *)a1 + 7) + 64LL); i != a1; i = *(struct tagCLS **)i )
    ;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  DestroyClass((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  return 0LL;
}
