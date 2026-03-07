void __fastcall VidSchiUpdateInterruptTargetsForAllPlanes(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  __int64 v6; // r9
  bool v7; // zf
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  for ( i = *((_QWORD *)a1 + a2 + 400); (unsigned int)v3 < *((_DWORD *)a1 + 38); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)(288 * v3 + i + 392) + 1LL;
    v7 = *(_DWORD *)(288 * v3 + i + 196) == 0;
    v8 = v6;
    if ( !v7 )
    {
      VidSchiRecalculateInterruptTargetForFlipQueue(a1, *(struct VIDSCH_FLIP_QUEUE **)(i + 32), v3, &v8);
      VidSchiRecalculateInterruptTargetForFlipQueue(a1, *(struct VIDSCH_FLIP_QUEUE **)(i + 8 * v3 + 40), v3, &v8);
      v6 = v8;
    }
    VidSchiSetInterruptTargetPresentId(a1, a2, v3, v6, 0, 0);
  }
}
