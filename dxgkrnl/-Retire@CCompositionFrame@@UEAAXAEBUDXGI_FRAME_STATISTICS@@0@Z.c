/*
 * XREFs of ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1C0012450
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0017554 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrame::Retire(
        CCompositionFrame *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  char *v3; // rdi
  char *i; // rbx
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx

  v3 = (char *)this + 152;
  *((_DWORD *)this + 24) = 2;
  for ( i = (char *)*((_QWORD *)this + 19); i != v3; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *, const struct DXGI_FRAME_STATISTICS *, const struct DXGI_FRAME_STATISTICS *))(*((_QWORD *)i - 1) + 48LL))(
      (_QWORD *)i - 1,
      a2,
      a3);
  v8 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 25);
    v10 = v8 + 2;
    while ( 1 )
    {
      v11 = (_QWORD *)v8[3];
      if ( (_QWORD *)*v11 != v10 )
        goto LABEL_17;
      v12 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v12 != v11 )
        goto LABEL_17;
      v8[3] = v12;
      *v12 = v10;
      if ( v11 == v10 )
        break;
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
    *((_DWORD *)v8 + 8) = 0;
    v8[262] = (char *)v8 + 36;
    *((_DWORD *)v8 + 521) = 0;
    v8[261] = v10;
    *((_DWORD *)v8 + 526) = 2048;
    *((_BYTE *)v8 + 2108) = 0;
    if ( *(_DWORD *)(v9 + 184) > 3u )
    {
      CLegacyTokenBuffer::`scalar deleting destructor'(v8, (unsigned int)a2);
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v9 + 96, 0LL);
      *(_QWORD *)(v9 + 104) = KeGetCurrentThread();
      v13 = (_QWORD *)(v9 + 168);
      v14 = *(_QWORD *)(v9 + 168);
      if ( *(_QWORD *)(v14 + 8) != v9 + 168 )
LABEL_17:
        __fastfail(3u);
      *v8 = v14;
      v8[1] = v13;
      *(_QWORD *)(v14 + 8) = v8;
      *v13 = v8;
      ++*(_DWORD *)(v9 + 184);
      *(_QWORD *)(v9 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_BYTE *)this + 120) = 0;
}
