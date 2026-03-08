/*
 * XREFs of ?HrFindInterface@CScratchRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037880
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180034880 (-HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::HrFindInterface(
        CScratchRenderTargetBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_93cf258b_6b62_4f00_89f1_7bf8602fdadb.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_93cf258b_6b62_4f00_89f1_7bf8602fdadb.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_93cf258b_6b62_4f00_89f1_7bf8602fdadb.Data4;
    if ( v4 )
    {
      return CRenderTargetBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
