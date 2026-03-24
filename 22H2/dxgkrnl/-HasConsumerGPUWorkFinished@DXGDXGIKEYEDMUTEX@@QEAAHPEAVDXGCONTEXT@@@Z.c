/*
 * XREFs of ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C029AA98
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C02A24F4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C0291540 (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(DXGDXGIKEYEDMUTEX *this, struct DXGCONTEXT *a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = *((_QWORD *)a2 + 2);
    v6 = 0;
    IsFenceObjectSignaled(*((_DWORD *)this + 24), *(struct DXGPROCESS **)(v5 + 40), a2, &v6);
    return (unsigned int)v6;
  }
  else
  {
    v3 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v3 + 24) = 706LL;
    WdLogEvent5_WdAssertion(v3);
    return 0LL;
  }
}
