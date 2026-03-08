/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C02E73DC
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C02E4DA8 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r11d
  DXGDEVICE *v9; // r9
  const struct DXGRESOURCEREFERENCE *v10; // r10
  __int64 i; // r8
  __int64 v12; // rbx
  const struct DXGRESOURCEREFERENCE *j; // r15
  __int64 v14; // r13
  __int64 v15; // rdi
  char *v16; // r14
  __int64 v17; // r8
  int v19; // eax
  __int64 v20; // rdi
  char *v21; // r15
  __int64 k; // rbx
  __int64 v23; // rsi
  int v25; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v6 = 0;
  v9 = this;
  if ( a2 )
  {
    v10 = a3;
    while ( 2 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)v10 + 24LL); i; i = *(_QWORD *)(i + 64) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 || (*(_DWORD *)(i + 72) & 0x800) != 0 )
        {
          WdLogSingleEntry2(3LL, *(_QWORD *)v10, i);
          return 3221225485LL;
        }
      }
      ++v6;
      v10 = (const struct DXGRESOURCEREFERENCE *)((char *)v10 + 8);
      if ( v6 < a2 )
        continue;
      break;
    }
    v12 = 0LL;
    for ( j = a3; ; j = (const struct DXGRESOURCEREFERENCE *)((char *)j + 8) )
    {
      v14 = *(_QWORD *)j;
      v15 = *(_QWORD *)(*(_QWORD *)j + 24LL);
      if ( v15 )
        break;
LABEL_21:
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= a2 )
        return v5;
    }
    v16 = (char *)v9 + 16;
    while ( 1 )
    {
      v17 = a4 ? *((_QWORD *)a4 + 4) : 0LL;
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 760LL) + 8LL) + 216LL))(
              *(_QWORD *)(*(_QWORD *)v16 + 768LL),
              *(_QWORD *)(v15 + 24),
              v17,
              0LL,
              0LL,
              a5);
      v25 = v19;
      if ( v19 < 0 )
        break;
      *(_DWORD *)(v15 + 72) |= 0x800u;
      v15 = *(_QWORD *)(v15 + 64);
      if ( v19 == 259 )
        v5 = 259;
      if ( !v15 )
      {
        v9 = this;
        goto LABEL_21;
      }
    }
    v23 = *(_QWORD *)(v14 + 24);
    if ( v23 != v15 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 760LL) + 8LL) + 224LL))(
          *(_QWORD *)(*(_QWORD *)v16 + 768LL),
          *(_QWORD *)(v23 + 24));
        v23 = *(_QWORD *)(v23 + 64);
      }
      while ( v23 != v15 );
      v19 = v25;
    }
    v5 = v19;
    if ( (_DWORD)v12 )
    {
      v20 = (unsigned int)v12;
      v21 = (char *)a3 + 8 * v12;
      do
      {
        for ( k = *(_QWORD *)(*(_QWORD *)v21 + 24LL); k; k = *(_QWORD *)(k + 64) )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 760LL) + 8LL) + 224LL))(
            *(_QWORD *)(*(_QWORD *)v16 + 768LL),
            *(_QWORD *)(k + 24));
        --v20;
      }
      while ( v20 );
    }
  }
  return v5;
}
