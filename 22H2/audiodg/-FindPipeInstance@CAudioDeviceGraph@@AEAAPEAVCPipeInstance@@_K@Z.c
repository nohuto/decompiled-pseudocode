/*
 * XREFs of ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400491F0
 * Callers:
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400496C0 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BD0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

struct CPipeInstance *__fastcall CAudioDeviceGraph::FindPipeInstance(CAudioDeviceGraph *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v8 = (_QWORD *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    while ( 1 )
    {
      v6 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v5, &v8);
      if ( v6 == a2 )
        break;
      if ( !v8 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = 0LL;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (struct CPipeInstance *)v6;
}
