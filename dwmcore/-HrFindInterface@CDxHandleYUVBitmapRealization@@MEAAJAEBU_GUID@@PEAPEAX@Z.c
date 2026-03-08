/*
 * XREFs of ?HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B0CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180104640 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::HrFindInterface(
        CDxHandleYUVBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( !v5 )
    {
      if ( this )
      {
        v6 = *(int *)(*((_QWORD *)this + 2) + 20LL);
LABEL_13:
        v8 = (char *)this + v6 + 16;
        goto LABEL_18;
      }
      goto LABEL_11;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data4;
    if ( !v7 )
    {
      if ( this )
      {
        v6 = *(int *)(*((_QWORD *)this + 2) + 24LL);
        goto LABEL_13;
      }
LABEL_11:
      v8 = 0LL;
LABEL_18:
      *a3 = v8;
      return 0LL;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6.Data4;
    if ( !v9 )
    {
      v8 = (char *)(((unsigned __int64)this + 360) & -(__int64)(this != 0LL));
      goto LABEL_18;
    }
    return CBitmapRealization::HrFindInterface(this, a2, a3);
  }
  return result;
}
