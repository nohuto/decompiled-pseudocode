/*
 * XREFs of ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C03073D4
 * Callers:
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0307784 (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumDriverFileLinks(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  NTSTATUS v5; // ebx
  ULONG v6; // r13d
  _DWORD *v7; // rsi
  ULONG v8; // r12d
  int v9; // eax
  _WORD *v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int16 *v13; // r15
  unsigned int v14; // ecx
  __int16 *v15; // rax
  __int16 *v16; // rdx
  __int16 v17; // cx
  __int64 *v18; // rax
  __int64 v19; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-71h] BYREF
  int v22; // [rsp+40h] [rbp-69h]
  int v23; // [rsp+44h] [rbp-65h]
  __int64 v24; // [rsp+48h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _OWORD KeyInformation[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v28; // [rsp+B0h] [rbp+7h]

  v24 = a1;
  v23 = a4;
  DestinationString = 0LL;
  v22 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v28 = 0LL;
  v5 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v5 >= 0 && (_DWORD)v28 )
  {
    v6 = DWORD2(v28) + 26 + DWORD1(v28);
    v7 = (_DWORD *)operator new[](v6, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = 0;
      if ( !(_DWORD)v28 )
        goto LABEL_35;
      while ( 1 )
      {
        v5 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v7, v6, &ResultLength);
        if ( v5 < 0 )
          goto LABEL_30;
        v9 = v7[1];
        if ( v9 != 7 && v9 != 1 )
          goto LABEL_30;
        v10 = (_WORD *)((char *)v7 + (unsigned int)v7[2]);
        if ( *v10 == 46 || *v10 == 92 )
        {
          WdLogSingleEntry1(3LL, 1551LL);
          v5 = -1073741811;
        }
        v11 = operator new[]((unsigned int)v7[3] + 42LL, 0x4B677844u, 256LL);
        v12 = (_QWORD *)v11;
        if ( !v11 )
        {
          v5 = -1073741801;
          goto LABEL_35;
        }
        v13 = (__int16 *)(v11 + 36);
        v14 = v7[3] + 2;
        *(_DWORD *)(v11 + 32) = v14;
        memmove((void *)(v11 + 36), v10, v14);
        v15 = v13;
        v16 = (__int16 *)v12 + ((unsigned __int64)(unsigned int)v7[3] >> 1) + 18;
        *v16 = 0;
        if ( v13 == v16 )
          goto LABEL_26;
LABEL_15:
        while ( 1 )
        {
          v17 = *v15++;
          if ( v17 != 92 )
            break;
          v13 = v15;
LABEL_25:
          if ( v15 == v16 )
            goto LABEL_26;
        }
        if ( v17 )
          goto LABEL_25;
        while ( v15 != v16 )
        {
          if ( *v15 != 32 )
          {
            if ( !*v15 )
              goto LABEL_15;
            v13 = v15++;
            goto LABEL_25;
          }
          ++v15;
        }
LABEL_26:
        if ( !*v13 || *v13 == 46 )
        {
          WdLogSingleEntry1(3LL, 1605LL);
          v5 = -1073741811;
          operator delete(v12);
          goto LABEL_35;
        }
        *((_DWORD *)v12 + 4) = v22;
        *((_DWORD *)v12 + 5) = v23;
        v18 = (__int64 *)(v24 + 1608);
        v12[3] = v13;
        v19 = *v18;
        if ( *(__int64 **)(*v18 + 8) != v18 )
          __fastfail(3u);
        *v12 = v19;
        v12[1] = v18;
        *(_QWORD *)(v19 + 8) = v12;
        *v18 = (__int64)v12;
LABEL_30:
        if ( ++v8 >= (unsigned int)v28 )
        {
LABEL_35:
          operator delete(v7);
          goto LABEL_37;
        }
      }
    }
    v5 = -1073741801;
  }
LABEL_37:
  ZwClose(KeyHandle);
  return (unsigned int)v5;
}
