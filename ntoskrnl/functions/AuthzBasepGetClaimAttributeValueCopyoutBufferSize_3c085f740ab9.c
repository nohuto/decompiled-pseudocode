NTSTATUS __fastcall AuthzBasepGetClaimAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r9
  NTSTATUS result; // eax
  ULONGLONG v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rcx
  __int64 ***v8; // r11
  __int64 **v9; // rdx
  unsigned __int64 v10; // r8
  ULONGLONG v11; // r10
  __int64 v12; // r11
  __int64 ***v13; // r11
  __int64 **j; // rdx
  unsigned __int64 v15; // r8
  ULONGLONG v16; // r10
  __int64 v17; // r11
  __int64 ***v18; // r11
  __int64 **i; // rdx
  unsigned __int64 v20; // r8
  ULONGLONG v21; // r10
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v3 = *a2;
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 1:
    case 2:
LABEL_36:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v7 = v21 + pullResult;
      if ( v21 + pullResult < v21 )
        return -1073741675;
      goto LABEL_39;
    case 3:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v7 = v16 + pullResult;
      if ( v16 + pullResult < v16 )
        return -1073741675;
      v18 = (__int64 ***)(v17 + 72);
      for ( i = *v18; i != (__int64 **)v18; i = (__int64 **)*i )
      {
        v20 = v7 + *((unsigned __int16 *)i + 20);
        if ( v20 < v7 )
          return -1073741675;
        v7 = v20 + 2;
        if ( v20 + 2 < v20 )
          return -1073741675;
      }
      goto LABEL_39;
    case 4:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v7 = v11 + pullResult;
      if ( v11 + pullResult < v11 )
        return -1073741675;
      v13 = (__int64 ***)(v12 + 72);
      for ( j = *v13; j != (__int64 **)v13; j = (__int64 **)*j )
      {
        v15 = v7 + *((unsigned __int16 *)j + 24);
        if ( v15 < v7 )
          return -1073741675;
        v7 = v15 + 2;
        if ( v15 + 2 < v15 )
          return -1073741675;
      }
LABEL_39:
      result = 0;
      *a2 = v7;
      return result;
    case 5:
      goto LABEL_9;
    case 6:
      goto LABEL_36;
  }
  if ( *(_WORD *)(a1 + 48) != 16 )
    return -1073741811;
LABEL_9:
  if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
    return -1073741675;
  result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
  if ( result >= 0 )
  {
    v7 = v5 + pullResult;
    if ( v5 + pullResult < v5 )
      return -1073741675;
    v8 = (__int64 ***)(v6 + 72);
    v9 = *v8;
    while ( v9 != (__int64 **)v8 )
    {
      v10 = v7 + *((unsigned int *)v9 + 12);
      if ( v10 < v7 )
        return -1073741675;
      v9 = (__int64 **)*v9;
      v7 = v10;
    }
    goto LABEL_39;
  }
  return result;
}
