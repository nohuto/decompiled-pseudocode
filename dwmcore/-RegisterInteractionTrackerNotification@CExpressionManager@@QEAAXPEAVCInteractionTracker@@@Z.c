/*
 * XREFs of ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x180213ACC
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18022CFAC (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18002718C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CExpressionManager::RegisterInteractionTrackerNotification(
        CExpressionManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r10
  struct CInteractionTracker **v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct CInteractionTracker *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 264;
  v3 = 0;
  v4 = *((unsigned int *)this + 72);
  v5 = *((_QWORD *)this + 33);
  if ( (_DWORD)v4 )
  {
    v6 = (struct CInteractionTracker **)*((_QWORD *)this + 33);
    while ( a2 != *v6 )
    {
      ++v3;
      ++v6;
      if ( v3 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v7 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v7 >= (unsigned int)v4 )
    {
      if ( (unsigned int)v7 > *((_DWORD *)v2 + 5) )
      {
        v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v2, 8u, (__int64)v2, &v10);
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(v5 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v7;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
  }
}
