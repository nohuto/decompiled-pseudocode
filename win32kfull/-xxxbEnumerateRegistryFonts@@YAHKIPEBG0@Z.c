/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00B8A98
 * Callers:
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00B87A0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00B88F8 (-xxxLoadPermanentFonts@@YAHXZ.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00356C8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        unsigned int a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v6; // rbx
  ULONG v7; // r12d
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int *v11; // rsi
  ULONG i; // r14d
  NTSTATUS v13; // eax
  __int64 v15; // rax
  unsigned int *v16; // r15
  __int128 v17; // [rsp+30h] [rbp-49h] BYREF
  __int128 v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+50h] [rbp-29h]
  __int128 v20; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21; // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  ResultLength = 0;
  v6 = 0LL;
  v7 = 544;
  v20 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a2 == 56 )
  {
    v6 = CreateProfileUserName(&v20);
    if ( !v6 )
      return 0LL;
  }
  v8 = (void *)OpenCacheKeyEx(v6, a2, 131097LL, 0LL);
  if ( v6 )
    FreeProfileUserName(v6, &v20);
  if ( !v8 )
    return 0LL;
  v9 = xxxbEnumerateRegistryFontsInternal(v8, a1);
  v10 = Win32AllocPoolZInit(544LL, 1919972181LL);
  v11 = (unsigned int *)v10;
  if ( !v10 )
    return v9;
  PushW32ThreadLock(v10, &v18, (__int64)Win32FreePool);
  for ( i = 0; ; ++i )
  {
    v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v11, v7 - 2, &ResultLength);
    if ( v13 != -2147483643 && v13 != -1073741789 )
      break;
    ResultLength += 2;
    v15 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
    v16 = (unsigned int *)v15;
    if ( v15 )
    {
      ThreadLockExchange(v15, &v18);
      Win32FreePool(v11);
      v7 = ResultLength;
      v11 = v16;
      v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v16, ResultLength - 2, &ResultLength);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v13 >= 0 )
  {
    *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = 0;
    *((_QWORD *)&v17 + 1) = v11 + 4;
    LOWORD(v17) = *((_WORD *)v11 + 6);
    WORD1(v17) = v17;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, a1);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  ZwClose(v8);
  return v9;
}
