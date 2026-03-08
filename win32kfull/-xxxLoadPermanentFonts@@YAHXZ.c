/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00B88F8
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00B8670 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00356C8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00B8A98 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  ULONG v6; // r13d
  void *v7; // rax
  void *v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rax
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r9
  unsigned int *v13; // r14
  ULONG i; // r15d
  NTSTATUS v15; // eax
  __int64 v16; // rax
  unsigned int *v17; // r12
  __int128 v18; // [rsp+30h] [rbp-39h] BYREF
  __int128 v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h]
  __int128 v21; // [rsp+58h] [rbp-11h]
  __int64 v22; // [rsp+68h] [rbp-1h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v4, v5);
  KeyHandle = 0LL;
  ResultLength = 0;
  v22 = 0LL;
  v20 = 0LL;
  v6 = 544;
  v21 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL, 0LL);
  v8 = v7;
  if ( v7 )
  {
    v9 = xxxbEnumerateRegistryFontsInternal(v7, 1u);
    v10 = Win32AllocPoolZInit(544LL, 1919972181LL);
    v13 = (unsigned int *)v10;
    if ( v10 )
    {
      PushW32ThreadLock(v10, &v19, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v15 = ZwEnumerateKey(v8, i, KeyBasicInformation, v13, v6 - 2, &ResultLength);
        if ( v15 != -2147483643 && v15 != -1073741789 )
          goto LABEL_10;
        ResultLength += 2;
        v16 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
        v17 = (unsigned int *)v16;
        if ( v16 )
        {
          ThreadLockExchange(v16, &v19);
          Win32FreePool(v13);
          v6 = ResultLength;
          v13 = v17;
          v15 = ZwEnumerateKey(v8, i, KeyBasicInformation, v17, ResultLength - 2, &ResultLength);
          if ( v15 != -2147483643 && v15 != -1073741789 )
          {
LABEL_10:
            if ( v15 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)&v19);
              ZwClose(v8);
              break;
            }
            *((_WORD *)v13 + ((unsigned __int64)v13[3] >> 1) + 8) = 0;
            *((_QWORD *)&v18 + 1) = v13 + 4;
            LOWORD(v18) = *((_WORD *)v13 + 6);
            WORD1(v18) = v18;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v8;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1u);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
    result = v9;
    if ( v9 )
      result = xxxbEnumerateRegistryFonts(1u, 0x39u, v11, v12);
  }
  else
  {
    result = 0LL;
  }
  gbPermanentFontsLoaded = 1;
  return result;
}
