/*
 * XREFs of ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEA_N@Z @ 0x1802B9FF4
 * Callers:
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C47F4 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x1802CB244 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x1802BC16C (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BF300 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool &>(
        PresentationReadyChangedEventArgs **a1,
        char *a2)
{
  unsigned int v2; // ebx
  PresentationReadyChangedEventArgs *v5; // rax
  PresentationReadyChangedEventArgs *v6; // rax
  volatile int *v7; // rdx
  char v8; // cl
  PresentationReadyChangedEventArgs *v9; // r10
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  PresentationReadyChangedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF
  PresentationReadyChangedEventArgs *v14; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (PresentationReadyChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  if ( v5 )
  {
    v6 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v5);
    v8 = *a2;
    v9 = v6;
    v13 = v6;
    *((_BYTE *)v6 + 72) = v8;
    v10 = *((_QWORD *)v6 + 8);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 8, v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v7);
LABEL_9:
    *a1 = v9;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
