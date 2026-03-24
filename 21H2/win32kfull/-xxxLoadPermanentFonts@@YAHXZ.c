/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0025F30
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00E6470 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0021E50 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0025C40 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 */

__int64 xxxLoadPermanentFonts(void)
{
  __int64 result; // rax
  const unsigned __int16 *v1; // r8
  const unsigned __int16 *v2; // r9
  ULONG v3; // r13d
  void *v4; // rax
  void *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // r9
  unsigned int *v10; // r14
  ULONG i; // r15d
  NTSTATUS v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // r12
  __int128 v15; // [rsp+30h] [rbp-39h] BYREF
  __int128 v16; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+50h] [rbp-19h]
  __int128 v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess() == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v1, v2);
  KeyHandle = 0LL;
  ResultLength = 0;
  v19 = 0LL;
  v17 = 0LL;
  v3 = 544;
  v18 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL, 0LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = xxxbEnumerateRegistryFontsInternal(v4, 1);
    v7 = Win32AllocPool(544LL, 1919972181LL);
    v10 = (unsigned int *)v7;
    if ( v7 )
    {
      PushW32ThreadLock(v7, &v16, Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v12 = ZwEnumerateKey(v5, i, KeyBasicInformation, v10, v3 - 2, &ResultLength);
        if ( v12 != -2147483643 && v12 != -1073741789 )
          goto LABEL_10;
        ResultLength += 2;
        v13 = Win32AllocPool(ResultLength, 1919972181LL);
        v14 = (unsigned int *)v13;
        if ( v13 )
        {
          ThreadLockExchange(v13, &v16);
          Win32FreePool(v10);
          v3 = ResultLength;
          v10 = v14;
          v12 = ZwEnumerateKey(v5, i, KeyBasicInformation, v14, ResultLength - 2, &ResultLength);
          if ( v12 != -2147483643 && v12 != -1073741789 )
          {
LABEL_10:
            if ( v12 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock(&v16);
              ZwClose(v5);
              break;
            }
            *((_WORD *)v10 + ((unsigned __int64)v10[3] >> 1) + 8) = 0;
            *((_QWORD *)&v15 + 1) = v10 + 4;
            LOWORD(v15) = *((_WORD *)v10 + 6);
            WORD1(v15) = v15;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v5;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v6 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
    result = v6;
    if ( v6 )
      result = xxxbEnumerateRegistryFonts(1, 0x39u, v8, v9);
  }
  else
  {
    result = 0LL;
  }
  gbPermanentFontsLoaded = 1;
  return result;
}
