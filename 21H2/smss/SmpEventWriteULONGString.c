/*
 * XREFs of SmpEventWriteULONGString @ 0x140005094
 * Callers:
 *     SmscpLoadSubSystem @ 0x14000440C (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140004D5C (SmpExecuteImage.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteULONGString(PCEVENT_DESCRIPTOR EventDescriptor, int a2, unsigned __int16 *a3)
{
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  int *v8; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+34h] [rbp-2Ch]
  __int64 *v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]
  int v17; // [rsp+78h] [rbp+18h] BYREF

  v17 = a2;
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, EventDescriptor) )
    {
      v5 = *a3;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      LOWORD(v7) = (unsigned __int16)v5 >> 1;
      v8 = &v17;
      v11 = &v7;
      v6 = *((_QWORD *)a3 + 1);
      v15 = v5;
      v14 = v6;
      v9 = 4;
      v12 = 2;
      ((void (__fastcall *)(REGHANDLE, PCEVENT_DESCRIPTOR, __int64, int **, __int64))EtwEventWrite)(
        SmpTraceHandle,
        EventDescriptor,
        3LL,
        &v8,
        v7);
    }
  }
}
