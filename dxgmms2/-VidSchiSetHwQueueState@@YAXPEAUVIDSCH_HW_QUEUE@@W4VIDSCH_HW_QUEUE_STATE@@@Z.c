void __fastcall VidSchiSetHwQueueState(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 124);
  if ( v2 != a2 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    switch ( a2 )
    {
      case 0:
        goto LABEL_5;
      case 1:
        if ( !*(_BYTE *)(v5 + 92) )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)a1);
        break;
      case 2:
LABEL_5:
        if ( v2 == 1 && !*(_BYTE *)(v5 + 92) )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)a1);
        break;
    }
    *(_DWORD *)(a1 + 124) = a2;
  }
}
