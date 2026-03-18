/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00EE81C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00EE740 (xxxLW_LoadFonts.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00EEC14 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00EEE2C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2)
{
  const unsigned __int16 *v2; // r8
  const unsigned __int16 *v3; // r9
  ULONG v4; // r13d
  void *v5; // rax
  void *v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // r9
  unsigned int *v11; // r14
  ULONG i; // r15d
  NTSTATUS v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  unsigned int *v16; // r12
  __int128 v17; // [rsp+30h] [rbp-39h] BYREF
  __int128 v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int128 v20; // [rsp+58h] [rbp-11h]
  __int64 v21; // [rsp+68h] [rbp-1h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v2, v3);
  KeyHandle = 0LL;
  ResultLength = 0;
  v21 = 0LL;
  v19 = 0LL;
  v4 = 544;
  v20 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v5 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = xxxbEnumerateRegistryFontsInternal(v5, 1u);
    v8 = Win32AllocPoolZInit(544LL, 1919972181LL);
    v11 = (unsigned int *)v8;
    if ( v8 )
    {
      PushW32ThreadLock(v8, &v18, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v13 = ZwEnumerateKey(v6, i, KeyBasicInformation, v11, v4 - 2, &ResultLength);
        if ( v13 != -2147483643 && v13 != -1073741789 )
          goto LABEL_9;
        ResultLength += 2;
        v15 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
        v16 = (unsigned int *)v15;
        if ( v15 )
        {
          ThreadLockExchange(v15, &v18);
          Win32FreePool(v11);
          v4 = ResultLength;
          v11 = v16;
          v13 = ZwEnumerateKey(v6, i, KeyBasicInformation, v16, ResultLength - 2, &ResultLength);
          if ( v13 != -2147483643 && v13 != -1073741789 )
          {
LABEL_9:
            if ( v13 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
              ZwClose(v6);
              break;
            }
            *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = 0;
            *((_QWORD *)&v17 + 1) = v11 + 4;
            LOWORD(v17) = *((_WORD *)v11 + 6);
            WORD1(v17) = v17;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v6;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v7 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1u);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
    result = v7;
    if ( v7 )
      result = xxxbEnumerateRegistryFonts(1u, 0x39u, v9, v10);
  }
  else
  {
    result = 0LL;
  }
  gbPermanentFontsLoaded = 1;
  return result;
}
