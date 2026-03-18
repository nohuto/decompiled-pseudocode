/*
 * XREFs of xxxODI_ColorInit @ 0x1C0060DA0
 * Callers:
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 * Callees:
 *     GetProcessLuid @ 0x1C0018FF0 (GetProcessLuid.c)
 *     ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1C0061014 (-CI_GetClrVal@@YAKPEAGK@Z.c)
 *     FastGetProfileStringFromIDW @ 0x1C0061220 (FastGetProfileStringFromIDW.c)
 *     xxxSetSysColors @ 0x1C0062954 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(__int64 a1)
{
  char *v1; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  char *v5; // rcx
  unsigned int ClrVal; // eax
  int v7; // ecx
  unsigned int *v8; // r11
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[128]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v12[32]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v13[28]; // [rsp+158h] [rbp+50h] BYREF

  v1 = (char *)gpsi;
  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)gpsi + 4568) = gargbInitial;
  *(_OWORD *)(v1 + 4584) = xmmword_1C0253410;
  *(_OWORD *)(v1 + 4600) = xmmword_1C0253420;
  *(_OWORD *)(v1 + 4616) = xmmword_1C0253430;
  *(_OWORD *)(v1 + 4632) = xmmword_1C0253440;
  *(_OWORD *)(v1 + 4648) = xmmword_1C0253450;
  *(_OWORD *)(v1 + 4664) = xmmword_1C0253460;
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
    v13[0] = 0;
    if ( v3 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (FastGetProfileStringFromIDW(a1, 26LL, 33LL, &szNull, v13, 25, 0), !v13[0]) )
    {
      FastGetProfileStringFromIDW(a1, 0LL, v3 + 32, &szNull, v13, 25, 0);
    }
    ClrVal = CI_GetClrVal(v13, *(_DWORD *)&v11[v4 * 4 + 4568LL - (_QWORD)v11 + (_QWORD)gpsi]);
    v12[v4++] = v3++;
    *v8 = ClrVal;
  }
  while ( v3 < 0x1F );
  return xxxSetSysColors(v7, v3, (unsigned int)v12, (unsigned int)v11, 6);
}
