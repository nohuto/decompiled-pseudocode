/*
 * XREFs of PopEtGetProcessAppId @ 0x14070116C
 * Callers:
 *     PoEnergyContextStart @ 0x140701078 (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopEtGetProcessImageInfo @ 0x140701304 (PopEtGetProcessImageInfo.c)
 *     PopEtGetProcessVersionInfo @ 0x140701360 (PopEtGetProcessVersionInfo.c)
 *     PopEtAppIdIntern @ 0x14070146C (PopEtAppIdIntern.c)
 *     PopEtAppIdDereference @ 0x140702A60 (PopEtAppIdDereference.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14070364C (PopEtGetProcessSidAndPackageIdentity.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  int ProcessVersionInfo; // eax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  unsigned __int64 i; // rcx
  WCHAR v11; // ax
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-90h]
  __int64 *v18; // [rsp+78h] [rbp-88h]
  wchar_t *Buffer; // [rsp+80h] [rbp-80h]
  _WORD *v20; // [rsp+88h] [rbp-78h]
  _WORD *v21; // [rsp+90h] [rbp-70h]
  _BYTE *v22; // [rsp+98h] [rbp-68h]
  __int16 v23; // [rsp+A0h] [rbp-60h]
  __int16 v24; // [rsp+A2h] [rbp-5Eh]
  __int16 v25; // [rsp+A4h] [rbp-5Ch]
  __int16 v26; // [rsp+A6h] [rbp-5Ah]
  _BYTE v27[80]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v28[200]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR SourceString[16]; // [rsp+290h] [rbp+190h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  memset(v28, 0, 0x188uLL);
  memset(v27, 0, 0x44uLL);
  p_DestinationString = *(UNICODE_STRING **)(a1 + 1472);
  v12 = 0LL;
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v11 = *(unsigned __int8 *)(a1 + i + 1448);
      SourceString[i] = v11;
      if ( !(_BYTE)v11 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, &v14);
  PopEtGetProcessSidAndPackageIdentity(a1, v27, v28);
  v17 = &v14;
  memset(v16, 0, sizeof(v16));
  ProcessVersionInfo = PopEtGetProcessVersionInfo(a1, &v12);
  v6 = v12;
  v18 = &v12;
  v22 = v27;
  if ( ProcessVersionInfo < 0 )
    v6 = 0LL;
  v12 = v6;
  v26 = 4 * (v27[1] + 2);
  Buffer = p_DestinationString->Buffer;
  v23 = p_DestinationString->Length >> 1;
  v20 = &v28[2];
  v24 = v28[0];
  v21 = &v28[130];
  v25 = v28[1];
  v7 = PopEtAppIdIntern(v16, &v13);
  if ( v7 < 0 )
  {
    v8 = v13;
  }
  else
  {
    v8 = 0LL;
    *a2 = v13;
    v7 = 0;
  }
  if ( v8 )
    PopEtAppIdDereference();
  return (unsigned int)v7;
}
