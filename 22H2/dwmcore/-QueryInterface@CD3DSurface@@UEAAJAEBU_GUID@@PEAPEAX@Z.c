/*
 * XREFs of ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024ABA4
 * Callers:
 *     ?QueryInterface@CD3DSurface@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F6F70 (-QueryInterface@CD3DSurface@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180238CB4 (-QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CD3DSurface::QueryInterface(CD3DSurface *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD); // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v6 )
    {
      return (unsigned int)CD3DResource::QueryInterface((CD3DSurface *)((char *)this - 128), a2, a3);
    }
    else
    {
      v7 = (void (__fastcall ***)(_QWORD))((char *)this - 248);
      v4 = 0;
      *a3 = (void *)(((unsigned __int64)this - 136) & ((unsigned __int128)-(__int128)(unsigned __int64)v7 >> 64));
      (**v7)(v7);
    }
  }
  return v4;
}
