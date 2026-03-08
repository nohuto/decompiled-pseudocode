/*
 * XREFs of xxxODI_ColorInit @ 0x1C0018A90
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 * Callees:
 *     ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1C0018D04 (-CI_GetClrVal@@YAKPEAGK@Z.c)
 *     FastGetProfileStringFromIDW @ 0x1C0018E40 (FastGetProfileStringFromIDW.c)
 *     xxxSetSysColors @ 0x1C001A31C (xxxSetSysColors.c)
 *     GetProcessLuid @ 0x1C00727F0 (GetProcessLuid.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(PCUNICODE_STRING Source)
{
  char *v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rsi
  char *v5; // rcx
  unsigned int *v6; // rbx
  unsigned int ClrVal; // eax
  int v8; // ecx
  unsigned __int64 v10; // [rsp+28h] [rbp-D8h]
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[128]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v13[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v14[28]; // [rsp+150h] [rbp+50h] BYREF

  v1 = (char *)gpsi;
  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)gpsi + 4568) = gargbInitial;
  *(_OWORD *)(v1 + 4584) = xmmword_1C028B2E0;
  *(_OWORD *)(v1 + 4600) = xmmword_1C028B2F0;
  *(_OWORD *)(v1 + 4616) = xmmword_1C028B300;
  *(_OWORD *)(v1 + 4632) = xmmword_1C028B310;
  *(_OWORD *)(v1 + 4648) = xmmword_1C028B320;
  *(_OWORD *)(v1 + 4664) = xmmword_1C028B330;
  *((_QWORD *)v1 + 585) = 0xFF993300F2E4D7LL;
  *((_DWORD *)v1 + 1172) = 15790320;
  v5 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 4444) = *(_OWORD *)((char *)gpsi + 4568);
  *(_OWORD *)(v5 + 4460) = *(_OWORD *)(v5 + 4584);
  *(_OWORD *)(v5 + 4476) = *(_OWORD *)(v5 + 4600);
  *(_OWORD *)(v5 + 4492) = *(_OWORD *)(v5 + 4616);
  *(_OWORD *)(v5 + 4508) = *(_OWORD *)(v5 + 4632);
  *(_OWORD *)(v5 + 4524) = *(_OWORD *)(v5 + 4648);
  *(_OWORD *)(v5 + 4540) = *(_OWORD *)(v5 + 4664);
  *(_QWORD *)(v5 + 4556) = *((_QWORD *)v5 + 585);
  *((_DWORD *)v5 + 1141) = *((_DWORD *)v5 + 1172);
  do
  {
    AuthenticationId = 0LL;
    v14[0] = 0;
    if ( v3 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (LODWORD(v10) = 25, FastGetProfileStringFromIDW(Source, v14, v10, 0), !v14[0]) )
    {
      LODWORD(v10) = 25;
      FastGetProfileStringFromIDW(Source, v14, v10, 0);
    }
    v6 = (unsigned int *)&v12[v4 * 4];
    ClrVal = CI_GetClrVal(v14, *(_DWORD *)&v12[v4 * 4 + 4568LL - (_QWORD)v12 + (_QWORD)gpsi]);
    v13[v4++] = v3++;
    *v6 = ClrVal;
  }
  while ( v3 < 0x1F );
  return xxxSetSysColors(v8, v3, (unsigned int)v13, (unsigned int)v12, 6);
}
