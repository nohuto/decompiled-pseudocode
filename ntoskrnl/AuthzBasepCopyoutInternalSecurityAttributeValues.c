/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402E7660
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407715F8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     Feature_2516935995__private_IsEnabledDeviceUsage @ 0x140411864 (Feature_2516935995__private_IsEnabledDeviceUsage.c)
 *     Feature_3391791421__private_IsEnabledDeviceUsage @ 0x1404118BC (Feature_3391791421__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x14067DC68 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  int inserted; // ebx
  UNICODE_STRING *v8; // r14
  wchar_t *v9; // rdi
  __int64 *v10; // r12
  __int64 *v11; // r15
  UNICODE_STRING *v12; // rsi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // r12d
  wchar_t *v21; // r13
  int v22; // eax
  wchar_t *Buffer; // rcx
  __int64 v24; // r13
  int v25; // eax
  const UNICODE_STRING *v26; // rdx
  __int64 v27; // r13
  int IsEnabledDeviceUsage; // eax
  const UNICODE_STRING *v29; // rdx
  wchar_t *v30; // rcx
  __int64 *v32; // [rsp+20h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+80h] [rbp+8h]
  int v36; // [rsp+90h] [rbp+18h]

  v36 = a3;
  v34 = a1;
  v5 = a3 + a4;
  v6 = a2;
  inserted = 0;
  DestinationString = 0LL;
  if ( v5 >= a3 )
  {
    v8 = (UNICODE_STRING *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = (unsigned __int16 *)((char *)&v8->Length + (unsigned int)(*(_DWORD *)(a1 + 60) << 6));
    *a5 = 0;
    if ( (unsigned __int64)v9 <= v5 )
    {
      v10 = (__int64 *)(a1 + 72);
      v11 = *(__int64 **)(a1 + 72);
      v32 = (__int64 *)(a1 + 72);
      if ( v11 == (__int64 *)(a1 + 72) )
      {
LABEL_37:
        *a5 = (_DWORD)v9 - v36;
        return (unsigned int)inserted;
      }
      v12 = v8 + 3;
      while ( 1 )
      {
        *(_DWORD *)&v12[-1].Length = 0;
        v13 = *(unsigned __int16 *)(a1 + 48) - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( !v15 )
            {
              v27 = *((unsigned __int16 *)v11 + 20);
              if ( (unsigned __int64)v9 + v27 > v5 )
                break;
              IsEnabledDeviceUsage = Feature_3391791421__private_IsEnabledDeviceUsage();
              v29 = (const UNICODE_STRING *)(v11 + 5);
              if ( IsEnabledDeviceUsage )
              {
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.MaximumLength = v27;
                DestinationString.Buffer = v9;
                RtlCopyUnicodeString(&DestinationString, v29);
                *(UNICODE_STRING *)((char *)v12 - 8) = DestinationString;
              }
              else
              {
                WORD1(v12[-1].Buffer) = v27;
                LOWORD(v12[-1].Buffer) = 0;
                *(_QWORD *)&v12->Length = v9;
                RtlCopyUnicodeString((UNICODE_STRING *)((char *)v12 - 8), v29);
              }
              v9 = (wchar_t *)((char *)v9 + v27);
              goto LABEL_27;
            }
            v16 = v15 - 1;
            if ( !v16 )
            {
              v24 = *((unsigned __int16 *)v11 + 24);
              if ( (unsigned __int64)v9 + v24 > v5 )
                break;
              v12[-1].Buffer = (wchar_t *)v11[5];
              v25 = Feature_3391791421__private_IsEnabledDeviceUsage();
              v26 = (const UNICODE_STRING *)(v11 + 6);
              if ( v25 )
              {
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.MaximumLength = v24;
                DestinationString.Buffer = v9;
                RtlCopyUnicodeString(&DestinationString, v26);
                *v12 = DestinationString;
              }
              else
              {
                v12->Length = 0;
                v12->MaximumLength = v24;
                v12->Buffer = v9;
                RtlCopyUnicodeString(v12, v26);
              }
              v9 = (wchar_t *)((char *)v9 + v24);
              goto LABEL_27;
            }
            v17 = v16 - 1;
            if ( !v17 )
              goto LABEL_13;
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 != 10 )
                return (unsigned int)-1073741811;
LABEL_13:
              v19 = *((unsigned int *)v11 + 12);
              v20 = *((_DWORD *)v11 + 12);
              v21 = (wchar_t *)((char *)v9 + v19);
              if ( (unsigned __int64)v9 + v19 > v5 )
                break;
              *(_DWORD *)&v12->Length = v19;
              v12[-1].Buffer = v9;
              v22 = Feature_3391791421__private_IsEnabledDeviceUsage();
              Buffer = v9;
              if ( !v22 )
                Buffer = v12[-1].Buffer;
              memmove(Buffer, (const void *)v11[5], v20);
              v9 = v21;
LABEL_27:
              v6 = a2;
              v10 = v32;
              goto LABEL_29;
            }
          }
        }
        v12[-1].Buffer = (wchar_t *)v11[5];
LABEL_29:
        if ( (unsigned int)Feature_2516935995__private_IsEnabledDeviceUsage() )
        {
          inserted = AuthzBasepProbeAndInsertTailList(v6 + 72, v8, 0LL);
          if ( inserted < 0 )
            return (unsigned int)inserted;
        }
        else
        {
          v30 = *(wchar_t **)(v6 + 80);
          if ( *(_QWORD *)v30 != v6 + 72 )
            __fastfail(3u);
          *(_QWORD *)&v8->Length = v6 + 72;
          v12[-3].Buffer = v30;
          *(_QWORD *)v30 = v8;
          *(_QWORD *)(v6 + 80) = v8;
        }
        ++*(_DWORD *)(v6 + 60);
        v8 += 4;
        v11 = (__int64 *)*v11;
        v12 += 4;
        if ( v11 == v10 )
          goto LABEL_37;
        a1 = v34;
      }
    }
  }
  return (unsigned int)-2147483643;
}
