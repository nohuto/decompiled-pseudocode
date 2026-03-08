/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407715F8
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1407714CC (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402E7660 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     Feature_2516935995__private_IsEnabledDeviceUsage @ 0x140411864 (Feature_2516935995__private_IsEnabledDeviceUsage.c)
 *     Feature_3391791421__private_IsEnabledDeviceUsage @ 0x1404118BC (Feature_3391791421__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x14067DC68 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  int inserted; // ecx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned int *v11; // r13
  __int64 v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rbp
  wchar_t *v17; // [rsp+30h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h]

  DestinationString = 0LL;
  if ( a2 && a3 && (v6 = (unsigned __int64)a2 + a3, v6 >= (unsigned __int64)a2) )
  {
    memset(a2, 0, a3);
    if ( (unsigned __int64)(a2 + 12) > v6 )
    {
LABEL_5:
      inserted = -2147483643;
      goto LABEL_24;
    }
    *a2 = 0;
    v8 = a2 + 2;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    a2[6] = 0;
    v9 = 112LL * *a1;
    if ( v9 <= 0xFFFFFFFF )
    {
      inserted = 0;
      v10 = (unsigned __int64)a2 + (unsigned int)v9 + 48;
      if ( v10 <= v6 )
      {
        v11 = a1 + 2;
        v12 = *((_QWORD *)a1 + 1);
        if ( (unsigned int *)v12 == v11 )
          return (unsigned int)inserted;
        v13 = a2 + 38;
        while ( 1 )
        {
          if ( (unsigned int)Feature_2516935995__private_IsEnabledDeviceUsage() )
          {
            inserted = AuthzBasepProbeAndInsertTailList((unsigned __int64)(a2 + 2), v13 - 13);
            if ( inserted < 0 )
              goto LABEL_24;
          }
          else
          {
            v14 = (_QWORD *)*((_QWORD *)a2 + 2);
            if ( (_DWORD *)*v14 != v8 )
              __fastfail(3u);
            *(v13 - 12) = v14;
            *(v13 - 13) = v8;
            *v14 = v13 - 13;
            *((_QWORD *)a2 + 2) = v13 - 13;
          }
          ++*a2;
          *((_WORD *)v13 - 28) = *(_WORD *)(v12 + 48);
          *((_DWORD *)v13 - 13) = *(_DWORD *)(v12 + 52);
          *(v13 - 3) = v13 - 4;
          *(v13 - 4) = v13 - 4;
          *v13 = v13 - 1;
          *(v13 - 1) = v13 - 1;
          *(v13 - 6) = 0LL;
          *((_DWORD *)v13 - 10) = 0;
          *((_DWORD *)v13 - 4) = 0;
          v20 = *(unsigned __int16 *)(v12 + 32);
          v19 = v20;
          v17 = (wchar_t *)((v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
          v15 = (unsigned __int64)v17 + v20;
          if ( (unsigned __int64)v17 + v20 > v6 )
            break;
          if ( (unsigned int)Feature_3391791421__private_IsEnabledDeviceUsage() )
          {
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.MaximumLength = v20;
            DestinationString.Buffer = v17;
            RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 32));
            *(UNICODE_STRING *)(v13 - 9) = DestinationString;
          }
          else
          {
            *((_WORD *)v13 - 35) = v20;
            *((_WORD *)v13 - 36) = 0;
            *(v13 - 8) = v17;
            RtlCopyUnicodeString((PUNICODE_STRING)(v13 - 9), (PCUNICODE_STRING)(v12 + 32));
          }
          inserted = AuthzBasepCopyoutInternalSecurityAttributeValues(
                       v12,
                       (__int64)(v13 - 13),
                       v15,
                       (int)v6 - (int)v15,
                       &v19);
          if ( inserted < 0 )
            goto LABEL_24;
          v13 += 14;
          v12 = *(_QWORD *)v12;
          v10 = v19 + v15;
          if ( (unsigned int *)v12 == v11 )
            return (unsigned int)inserted;
        }
      }
      goto LABEL_5;
    }
    inserted = -1073741675;
  }
  else
  {
    inserted = -1073741811;
  }
LABEL_24:
  if ( a3 >= 0x30 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_OWORD *)a2 + 1) = 0LL;
    *((_OWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)inserted;
}
