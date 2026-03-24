/*
 * XREFs of xxxMNButtonDown @ 0x1C023727C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C02361AC (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C023626C (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNButtonDown(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  _DWORD **v8; // rax
  int v9; // edi
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) == a3 )
  {
    if ( a4 )
      **(_DWORD **)*a1 |= 0x80u;
    result = xxxMNHideNextHierarchy(a1);
    if ( !(_DWORD)result )
    {
      if ( !a4 )
        return result;
      result = xxxMNOpenHierarchy(a1, a2);
      if ( result )
      {
        result = *a1;
        **(_DWORD **)*a1 &= ~0x80u;
      }
    }
    goto LABEL_17;
  }
  v8 = (_DWORD **)*a1;
  if ( a4 )
  {
    v9 = 1;
    **v8 &= ~0x80u;
  }
  else
  {
    v9 = (**v8 >> 10) & 1;
  }
  result = xxxMNSelectItem(a1, a2);
  if ( !result
    || !*(_QWORD *)(result + 16)
    || (result = *(_QWORD *)result, (*(_DWORD *)(result + 4) & 3) != 0)
    || !v9
    || (result = xxxMNOpenHierarchy(a1, a2), result != -1) )
  {
LABEL_17:
    if ( a4 )
    {
      *(_DWORD *)(a2 + 8) |= 8u;
      return xxxMNDoScroll((__int64)a1, a3, 1);
    }
  }
  return result;
}
