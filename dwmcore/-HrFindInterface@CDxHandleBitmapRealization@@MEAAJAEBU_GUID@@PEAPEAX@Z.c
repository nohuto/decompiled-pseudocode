__int64 __fastcall CDxHandleBitmapRealization::HrFindInterface(
        CDxHandleBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  void *v3; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // rax

  v3 = 0LL;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data4;
      if ( v7 )
      {
        return (unsigned int)CBitmapRealization::HrFindInterface(this, a2, a3);
      }
      else
      {
        if ( *((_BYTE *)this + 313) )
        {
          v5 = 0;
          v3 = (void *)(((unsigned __int64)this + 360) & -(__int64)(this != 0LL));
        }
        else
        {
          v5 = -2147467262;
        }
        *a3 = v3;
      }
    }
    else
    {
      if ( this )
        v9 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
      else
        v9 = 0LL;
      *a3 = v9;
      return 0;
    }
  }
  return v5;
}
