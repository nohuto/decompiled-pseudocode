/*
 * XREFs of ?QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180238CB4
 * Callers:
 *     ?QueryInterface@CD3DResource@@$4PPPPPPPM@BA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F6740 (-QueryInterface@CD3DResource@@$4PPPPPPPM@BA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DResource@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F6780 (-QueryInterface@CD3DResource@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DResource@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8E00 (-QueryInterface@CD3DResource@@$4PPPPPPPM@IA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024ABA4 (-QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::QueryInterface(CD3DResource *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v7; // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( v5 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IUnknown.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IUnknown.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IUnknown.Data4;
      if ( v7 )
      {
        *a3 = 0LL;
        return v4;
      }
      if ( this == (CD3DResource *)120 )
        v6 = 0LL;
      else
        v6 = (char *)this + *(int *)(*((_QWORD *)this - 11) + 4LL) - 88;
    }
    else
    {
      v6 = (char *)(((unsigned __int64)this - 96) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 120) >> 64));
    }
    *a3 = v6;
    _InterlockedIncrement((volatile signed __int32 *)this - 28);
    return 0;
  }
  return v4;
}
