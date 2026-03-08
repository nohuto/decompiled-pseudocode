/*
 * XREFs of SepRmFetchGlobalSacl @ 0x14084B3BC
 * Callers:
 *     SepRmGlobalSaclSetWrkr @ 0x14084B320 (SepRmGlobalSaclSetWrkr.c)
 * Callees:
 *     RtlStringCchCatNW @ 0x1403A1A98 (RtlStringCchCatNW.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepRegOpenKey @ 0x140739428 (SepRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmFetchGlobalSacl(STRSAFE_PCNZWCH *a1, ULONG *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 Pool2; // rax
  wchar_t *v8; // rdi
  size_t v9; // rbx
  size_t v10; // rdx
  char *v11; // r9
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  NTSTATUS v15; // ebx
  __int64 v17; // rsi
  void *v18; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+48h] BYREF

  v6 = *(unsigned __int16 *)a1 + 98LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  Pool2 = ExAllocatePool2(256LL, v6, 1818448711LL);
  v8 = (wchar_t *)Pool2;
  if ( !Pool2 )
    goto LABEL_17;
  v9 = v6 >> 1;
  if ( v9 )
  {
    v10 = v9;
    v11 = (char *)L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName" - Pool2;
    v12 = (_WORD *)Pool2;
    do
    {
      if ( !(2147483646 - v9 + v10) )
        break;
      v13 = *(_WORD *)((char *)v12 + (_QWORD)v11);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v10;
    }
    while ( v10 );
    v14 = v12 - 1;
    if ( v10 )
      v14 = v12;
    *v14 = 0;
    if ( v10 )
      RtlStringCchCatNW(v8, v9, a1[1], (unsigned __int64)*(unsigned __int16 *)a1 >> 1);
  }
  v15 = SepRegOpenKey(v8, 0x201u, &KeyHandle);
  if ( v15 >= 0 )
  {
    v15 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v15 + 0x80000000) < 0 || v15 == -1073741789) && ResultLength <= 0x1000B )
    {
      v15 = 0;
      if ( ResultLength <= 0xC )
      {
        *a2 = 0;
        *a3 = 0LL;
        goto LABEL_12;
      }
      v17 = ExAllocatePool2(256LL, ResultLength, 1818448711LL);
      if ( v17 )
      {
        v15 = ZwQueryValueKey(
                KeyHandle,
                &DefaultKey,
                KeyValuePartialInformation,
                (PVOID)v17,
                ResultLength,
                &ResultLength);
        if ( v15 >= 0 )
        {
          ResultLength -= 12;
          v18 = (void *)ExAllocatePool2(256LL, ResultLength, 1818448711LL);
          *a3 = v18;
          if ( v18 )
          {
            memmove(v18, (const void *)(v17 + 12), ResultLength);
            *a2 = ResultLength;
          }
          else
          {
            v15 = -1073741801;
          }
        }
        ExFreePoolWithTag((PVOID)v17, 0);
        goto LABEL_12;
      }
LABEL_17:
      v15 = -1073741801;
    }
  }
LABEL_12:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v15;
}
