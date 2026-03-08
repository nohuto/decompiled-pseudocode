/*
 * XREFs of ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001A480
 * Callers:
 *     ?HrFindInterface@CCachedVisualImage@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001A430 (-HrFindInterface@CCachedVisualImage@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSource::HrFindInterface(CImageSource *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v4 )
      goto LABEL_9;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
    if ( v5 )
    {
      return 2147500034LL;
    }
    else
    {
LABEL_9:
      if ( this )
        v6 = (char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64;
      else
        v6 = 0LL;
      *a3 = v6;
      return 0LL;
    }
  }
  return result;
}
