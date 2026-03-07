__int64 __fastcall CIndirectSwapchainRenderTarget::HrFindInterface(
        CIndirectSwapchainRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_12cee53f_ea34_40cf_8dd9_24a64ad480fe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_12cee53f_ea34_40cf_8dd9_24a64ad480fe.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_12cee53f_ea34_40cf_8dd9_24a64ad480fe.Data4;
    if ( v4 )
    {
      return CRenderTarget::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 1864) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
