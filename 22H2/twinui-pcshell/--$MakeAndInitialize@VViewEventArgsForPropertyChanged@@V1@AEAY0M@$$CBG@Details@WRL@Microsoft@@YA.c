/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@Z @ 0x18031EE94
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0M@$$CBG@Z @ 0x18031F388 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA-AV-$ComPtr@VV.c)
 * Callees:
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x180024278 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x180024468 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1800817D8 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x180311AD0 (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(
        ViewEventArgsForPropertyChanged **a1,
        const unsigned __int16 *a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  int v5; // edi
  ViewEventArgsForPropertyChanged *v6; // rax
  const unsigned __int16 *v7; // rdx
  ViewEventArgsForPropertyChanged *v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  ViewEventArgsForPropertyChanged *v13; // [rsp+30h] [rbp+8h] BYREF
  ViewEventArgsForPropertyChanged *v14; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v4;
  if ( v4 )
  {
    v6 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSwitch>::Attach((__int64 *)&v13, (__int64)v6);
    v7 = a2;
    v8 = v13;
    v5 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v13, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        v10 = *((_QWORD *)v8 + 11);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 11, v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v10 + 16),
          v9);
LABEL_11:
        v8 = v13;
      }
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
