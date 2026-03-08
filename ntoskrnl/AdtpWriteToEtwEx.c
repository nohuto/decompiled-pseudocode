/*
 * XREFs of AdtpWriteToEtwEx @ 0x14066D560
 * Callers:
 *     SeAuditPlugAndPlay @ 0x1409C7BA8 (SeAuditPlugAndPlay.c)
 * Callees:
 *     EtwWriteKMSecurityEvent @ 0x140395834 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 *     AdtpCleanupParameterAllocations @ 0x140395DFC (AdtpCleanupParameterAllocations.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14039F254 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14083DB64 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r15
  __int64 v7; // rcx
  __int16 v8; // dx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // cx
  char *v11; // rax
  __int64 v12; // rdx
  unsigned __int16 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h]
  _BYTE v18[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v19; // [rsp+1A0h] [rbp+A0h] BYREF
  char v20; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v21[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v22[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v14[0] = 0;
  v17 = 0LL;
  memset(v22, 0, sizeof(v22));
  memset(v18, 0, sizeof(v18));
  *a2 = 0;
  memset(v21, 0, sizeof(v21));
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v5 = -1073741811;
LABEL_17:
    v10 = v14[0];
    goto LABEL_18;
  }
  v6 = *(_WORD *)(a1 + 22);
  v5 = AdtpPackageParameters(0LL, a1, 2, (__int64)v22, (__int64)v18, (__int64)&v19, v14, (__int64)v21);
  if ( v5 < 0 )
    goto LABEL_17;
  if ( *(_WORD *)(a1 + 20)
    && (v7 = *(unsigned __int16 *)(a1 + 20), v15 = 0, v16 = 0, (int)AdtpGetCategoryAndSubCategoryId(v7, &v15, &v16) >= 0) )
  {
    v8 = v16 + (((_WORD)v15 + 48) << 8);
  }
  else
  {
    v8 = -256;
  }
  LOWORD(v17) = *(_WORD *)(a1 + 4);
  BYTE2(v17) = *(_BYTE *)(a1 + 8);
  v9 = 0x8020000000000000uLL;
  if ( v6 != 8 )
    v9 = 0x8010000000000000uLL;
  *(_WORD *)((char *)&v17 + 3) = 10;
  v10 = v14[0];
  WORD3(v17) = v8;
  BYTE5(v17) = 0;
  *((_QWORD *)&v17 + 1) = v9;
  if ( !v14[0] )
    goto LABEL_15;
  v11 = &v20;
  v12 = v14[0];
  do
  {
    v4 += *(_DWORD *)v11;
    v11 += 16;
    --v12;
  }
  while ( v12 );
  if ( v4 <= 0xDC00 )
  {
LABEL_15:
    v5 = EtwWriteKMSecurityEvent();
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_17;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_18:
  AdtpCleanupParameterAllocations(v21, &v19, v10);
  return (unsigned int)v5;
}
