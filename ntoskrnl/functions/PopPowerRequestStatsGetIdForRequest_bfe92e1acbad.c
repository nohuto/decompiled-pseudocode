__int64 __fastcall PopPowerRequestStatsGetIdForRequest(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  char IsDetailedRequestReason; // al
  unsigned __int64 v5; // r14
  char v6; // bp
  unsigned int v7; // ecx
  __int64 Pool2; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  UNICODE_STRING *v12; // rsi
  int v13; // eax
  signed int v14; // ebx
  UNICODE_STRING v15; // xmm0
  const WCHAR *v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  const WCHAR *i; // rbp
  __int64 v22; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  DestinationString = 0LL;
  SourceString = 0LL;
  IsDetailedRequestReason = PopPowerRequestStatsIsDetailedRequestReason(v2);
  v5 = 0LL;
  v6 = IsDetailedRequestReason;
  if ( !*(_QWORD *)(v2 + 24) )
    goto LABEL_3;
  v5 = (v2 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !IsDetailedRequestReason )
    goto LABEL_3;
  v7 = -1;
  v18 = 16LL * *(unsigned int *)(v5 + 20);
  if ( v18 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v19 = v18 + 48;
  if ( (int)v18 + 48 >= (unsigned int)v18 )
    v7 = v18 + 48;
  v14 = v19 < (unsigned int)v18 ? 0xC0000095 : 0;
  if ( v19 >= (unsigned int)v18 )
  {
    if ( v7 > 0x40 )
    {
LABEL_4:
      Pool2 = ExAllocatePool2(256LL, v7, 1414616912LL);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v10 = *(_QWORD *)(v2 + 8);
      if ( *(_DWORD *)v2 )
      {
        v12 = (UNICODE_STRING *)(Pool2 + 8);
        if ( v10 )
        {
          RtlInitAnsiString(&DestinationString, (PCSZ)(v10 + 1448));
          v14 = PopAnsiStringToUnicodeString(v12, &DestinationString);
          if ( v14 < 0 )
            goto LABEL_33;
          *(_DWORD *)v9 |= 2u;
LABEL_9:
          v13 = *(_DWORD *)v9;
          if ( v6 )
          {
            *(_DWORD *)v9 = v13 | 1;
            *(_WORD *)(v9 + 40) = *(_WORD *)(v5 + 16);
            *(_DWORD *)(v9 + 44) = *(_DWORD *)(v5 + 20);
            RtlInitUnicodeString((PUNICODE_STRING)(v9 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
            v20 = 0LL;
            for ( i = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
                  (unsigned int)v20 < *(_DWORD *)(v9 + 44);
                  i = (const WCHAR *)((char *)i + *(unsigned __int16 *)(v9 + 8 * v22) + 2) )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v9 + 16 * (v20 + 3)), i);
              v22 = 2 * (v20 + 3);
              v20 = (unsigned int)(v20 + 1);
            }
LABEL_15:
            *a2 = v9;
            return 0;
          }
          if ( (v13 & 2) != 0 )
          {
LABEL_13:
            if ( v5 )
            {
              if ( (*(_DWORD *)v5 & 1) != 0 )
              {
                RtlInitUnicodeString(&SourceString, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
                v14 = PopPowerRequestStatsIdConcat(v12, &SourceString);
                if ( v14 < 0 )
                  goto LABEL_33;
              }
            }
            goto LABEL_15;
          }
          SourceString = 0LL;
          v14 = PopUnicodeStringDeepCopy(&SourceString, v12);
          if ( v14 >= 0 )
          {
            v15 = SourceString;
            *(_DWORD *)v9 |= 2u;
            *v12 = v15;
            goto LABEL_13;
          }
LABEL_33:
          PopPowerRequestStatsFreeId((PVOID)v9);
          return (unsigned int)v14;
        }
        v17 = UNIDENTIFIED_PROCESS;
      }
      else
      {
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            v12 = (UNICODE_STRING *)(v9 + 8);
            *(_OWORD *)(v9 + 8) = *(_OWORD *)(v11 + 56);
            goto LABEL_9;
          }
        }
        v12 = (UNICODE_STRING *)(v9 + 8);
        v17 = UNIDENTIFIED_DRIVER;
      }
      RtlInitUnicodeString(v12, v17);
      goto LABEL_9;
    }
LABEL_3:
    v7 = 64;
    goto LABEL_4;
  }
  return (unsigned int)v14;
}
