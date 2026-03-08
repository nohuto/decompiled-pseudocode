/*
 * XREFs of ?HrFindInterface@CCachedVisualImage@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001A430
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001A480 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CCachedVisualImage::HrFindInterface(CCachedVisualImage *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v4 )
    {
      return CImageSource::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
