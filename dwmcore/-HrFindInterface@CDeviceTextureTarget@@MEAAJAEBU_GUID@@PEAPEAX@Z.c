/*
 * XREFs of ?HrFindInterface@CDeviceTextureTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035010
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035080 (-HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDeviceTextureTarget::HrFindInterface(CDeviceTextureTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data4;
      if ( v5 )
        return CD2DBitmap::HrFindInterface(this, a2, a3);
      if ( this )
        v6 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 24LL) + 16;
      else
        v6 = 0LL;
    }
    else
    {
      v6 = (char *)(((unsigned __int64)this + 248) & -(__int64)(this != 0LL));
    }
    *a3 = v6;
    return 0LL;
  }
  return result;
}
