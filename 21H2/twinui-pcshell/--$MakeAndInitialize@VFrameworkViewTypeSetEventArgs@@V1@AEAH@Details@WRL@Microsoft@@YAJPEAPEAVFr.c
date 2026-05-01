/*
 * XREFs of ??$MakeAndInitialize@VFrameworkViewTypeSetEventArgs@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVFrameworkViewTypeSetEventArgs@@AEAH@Z @ 0x1802C8230
 * Callers:
 *     ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1802C9ED0 (-RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BF328 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FrameworkViewTypeSetEventArgs@@QEAA@XZ @ 0x1802C8BD8 (--0FrameworkViewTypeSetEventArgs@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FrameworkViewTypeSetEventArgs,FrameworkViewTypeSetEventArgs,int &>(
        FrameworkViewTypeSetEventArgs **a1,
        int *a2)
{
  unsigned int v2; // ebx
  FrameworkViewTypeSetEventArgs *v5; // rax
  FrameworkViewTypeSetEventArgs *v6; // rax
  volatile int *v7; // rdx
  int v8; // ecx
  FrameworkViewTypeSetEventArgs *v9; // r10
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  FrameworkViewTypeSetEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF
  FrameworkViewTypeSetEventArgs *v14; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (FrameworkViewTypeSetEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  if ( v5 )
  {
    v6 = FrameworkViewTypeSetEventArgs::FrameworkViewTypeSetEventArgs(v5);
    v8 = *a2;
    v9 = v6;
    v13 = v6;
    *((_DWORD *)v6 + 16) = v8;
    v10 = *((_QWORD *)v6 + 7);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 7, v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v7);
LABEL_9:
    *a1 = v9;
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
