/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C001833C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002730 (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C00183C8 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C00183F4 (VidSchiCompletePendingFlipOnPlane.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiCompletePendingFlip(int a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  int i; // edi
  unsigned int FlipQueue; // eax
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  v4 = a3;
  v13 = a3;
  v12 = a2;
  for ( i = -1; ; ++i )
  {
    v14 = i;
    if ( i == *(_DWORD *)(a2 + 152) )
      break;
    FlipQueue = (unsigned int)VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v12);
    VidSchiCompletePendingFlipOnPlane(a1, a2, v4, FlipQueue, a4);
  }
  if ( a4 == 9 )
  {
    v11 = *(unsigned int *)(*(_QWORD *)(a2 + 8 * v4 + 3200) + 3088LL);
    if ( (_DWORD)v11 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 45056LL, a2, v4, v11);
      __debugbreak();
      JUMPOUT(0x1C002C0F8LL);
    }
  }
  return 0LL;
}
