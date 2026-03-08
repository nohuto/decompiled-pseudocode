/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140246650
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140247720 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 */

NTSTATUS __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r9
  NTSTATUS result; // eax
  ULONGLONG v5; // r10
  unsigned __int64 v6; // rcx
  ULONGLONG v7; // r10
  __int64 v8; // r11
  __int64 ***v9; // r11
  __int64 **v10; // rdx
  unsigned __int64 v11; // r8
  ULONGLONG v12; // r10
  __int64 v13; // r11
  __int64 ***v14; // r11
  __int64 **v15; // rdx
  unsigned __int64 v16; // r8
  ULONGLONG v17; // r10
  __int64 v18; // r11
  __int64 ***v19; // r11
  __int64 **v20; // rdx
  unsigned __int64 v21; // r8
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v3 = *a2;
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 1:
    case 2:
      goto LABEL_3;
    case 3:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result >= 0 )
      {
        v6 = v7 + pullResult;
        if ( v7 + pullResult < v7 )
          return -1073741675;
        v9 = (__int64 ***)(v8 + 72);
        v10 = *v9;
        while ( v10 != (__int64 **)v9 )
        {
          v11 = v6 + *((unsigned __int16 *)v10 + 20);
          if ( v11 < v6 )
            return -1073741675;
          v10 = (__int64 **)*v10;
          v6 = v11;
        }
LABEL_6:
        result = 0;
        *a2 = v6;
      }
      break;
    case 4:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(0x18uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result >= 0 )
      {
        v6 = v17 + pullResult;
        if ( v17 + pullResult < v17 )
          return -1073741675;
        v19 = (__int64 ***)(v18 + 72);
        v20 = *v19;
        while ( v20 != (__int64 **)v19 )
        {
          v21 = v6 + *((unsigned __int16 *)v20 + 24);
          if ( v21 < v6 )
            return -1073741675;
          v20 = (__int64 **)*v20;
          v6 = v21;
        }
        goto LABEL_6;
      }
      break;
    default:
      if ( *(_WORD *)(a1 + 48) != 5 )
      {
        if ( *(_WORD *)(a1 + 48) == 6 )
        {
LABEL_3:
          if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) >= v3 )
          {
            result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
            if ( result < 0 )
              return result;
            v6 = v5 + pullResult;
            if ( v5 + pullResult >= v5 )
              goto LABEL_6;
          }
          return -1073741675;
        }
        if ( *(_WORD *)(a1 + 48) != 16 )
          return -1073741811;
      }
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result >= 0 )
      {
        v6 = v12 + pullResult;
        if ( v12 + pullResult < v12 )
          return -1073741675;
        v14 = (__int64 ***)(v13 + 72);
        v15 = *v14;
        while ( v15 != (__int64 **)v14 )
        {
          v16 = v6 + *((unsigned int *)v15 + 12);
          if ( v16 < v6 )
            return -1073741675;
          v15 = (__int64 **)*v15;
          v6 = v16;
        }
        goto LABEL_6;
      }
      break;
  }
  return result;
}
