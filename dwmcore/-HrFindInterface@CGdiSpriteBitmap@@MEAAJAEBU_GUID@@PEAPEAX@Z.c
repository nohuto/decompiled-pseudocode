/*
 * XREFs of ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800351B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::HrFindInterface(CGdiSpriteBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
