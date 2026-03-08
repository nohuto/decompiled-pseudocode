/*
 * XREFs of ?HrFindInterface@CContent@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035170
 * Callers:
 *     ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016D70 (-HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075A40 (-HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CVisualBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C1BA0 (-HrFindInterface@CVisualBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022A510 (-HrFindInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContent::HrFindInterface(CContent *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2d681593_1e98_4679_bde5_5b9677677b1f.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      if ( this )
        v5 = (char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64;
      else
        v5 = 0LL;
      *a3 = v5;
      return 0LL;
    }
  }
  return result;
}
