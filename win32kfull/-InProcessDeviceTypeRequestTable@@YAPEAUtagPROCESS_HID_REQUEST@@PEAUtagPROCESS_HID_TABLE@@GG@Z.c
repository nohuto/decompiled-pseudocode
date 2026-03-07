struct tagPROCESS_HID_REQUEST *__fastcall InProcessDeviceTypeRequestTable(
        struct tagPROCESS_HID_TABLE *a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  struct tagPROCESS_HID_REQUEST *result; // rax
  __int64 v4; // r9
  __int16 v5; // r10
  __int16 v6; // r11
  struct tagPROCESS_HID_REQUEST *v7; // rcx
  struct tagPROCESS_HID_REQUEST *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  struct tagPROCESS_HID_REQUEST **v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct tagPROCESS_HID_REQUEST **v14; // r8
  __int64 v15; // rdx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 **v20; // r8
  __int64 v21; // rax

  result = SearchProcessHidRequestInclusion(a1, a2, a3);
  if ( result )
  {
    v9 = (__int64 *)(v4 + 16);
    if ( *(struct tagPROCESS_HID_REQUEST **)(v4 + 16) != result )
    {
      v10 = *(_QWORD *)result;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) == result )
      {
        v11 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
        if ( *v11 == result )
        {
          *v11 = (struct tagPROCESS_HID_REQUEST *)v10;
          *(_QWORD *)(v10 + 8) = v11;
          v12 = *v9;
          if ( *(__int64 **)(*v9 + 8) == v9 )
          {
            *(_QWORD *)result = v12;
            *((_QWORD *)result + 1) = v9;
            *(_QWORD *)(v12 + 8) = result;
            *v9 = (__int64)result;
            return result;
          }
        }
      }
      goto LABEL_12;
    }
  }
  else
  {
    v7 = (struct tagPROCESS_HID_REQUEST *)(v4 + 32);
    v8 = *(struct tagPROCESS_HID_REQUEST **)(v4 + 32);
    result = v8;
    if ( v8 == (struct tagPROCESS_HID_REQUEST *)(v4 + 32) )
      return 0LL;
    while ( *((_WORD *)result + 8) != v5 )
    {
      result = *(struct tagPROCESS_HID_REQUEST **)result;
      if ( result == v7 )
        return 0LL;
    }
    if ( !result )
      return 0LL;
    if ( v8 != result )
    {
      v13 = *(_QWORD *)result;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) != result )
        goto LABEL_12;
      v14 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
      if ( *v14 != result )
        goto LABEL_12;
      *v14 = (struct tagPROCESS_HID_REQUEST *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *(_QWORD *)v7;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_12;
      *(_QWORD *)result = v15;
      *((_QWORD *)result + 1) = v7;
      *(_QWORD *)(v15 + 8) = result;
      *(_QWORD *)v7 = result;
    }
    v16 = (__int64 *)(v4 + 48);
    v17 = *(__int64 **)(v4 + 48);
    v18 = v17;
    if ( v17 != (__int64 *)(v4 + 48) )
    {
      while ( *((_WORD *)v18 + 8) != v5 || *((_WORD *)v18 + 9) != v6 )
      {
        v18 = (__int64 *)*v18;
        if ( v18 == v16 )
          return result;
      }
      if ( v18 )
      {
        if ( v17 == v18 )
          return 0LL;
        v19 = (__int64 *)*v18;
        if ( *(__int64 **)(*v18 + 8) == v18 )
        {
          v20 = (__int64 **)v18[1];
          if ( *v20 == v18 )
          {
            *v20 = v19;
            v19[1] = (__int64)v20;
            v21 = *v16;
            if ( *(__int64 **)(*v16 + 8) == v16 )
            {
              *v18 = v21;
              v18[1] = (__int64)v16;
              *(_QWORD *)(v21 + 8) = v18;
              *v16 = (__int64)v18;
              return 0LL;
            }
          }
        }
LABEL_12:
        __fastfail(3u);
      }
    }
  }
  return result;
}
