/*
 * XREFs of ExpWin32ParseProcedure @ 0x140786D50
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall ExpWin32ParseProcedure(
        int *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD v11[3]; // [rsp+20h] [rbp-50h] BYREF
  char v12; // [rsp+38h] [rbp-38h]
  __int16 v13; // [rsp+39h] [rbp-37h]
  char v14; // [rsp+3Bh] [rbp-35h]
  int v15; // [rsp+3Ch] [rbp-34h]
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+98h] [rbp+28h] BYREF

  v21 = *a1;
  v13 = 0;
  v14 = 0;
  v15 = a5;
  v16 = a6;
  v17 = a7;
  v18 = a8;
  v11[2] = a3;
  v19 = a9;
  v11[0] = a1;
  v11[1] = a2;
  v12 = a4;
  v20 = a10;
  return PsInvokeWin32Callout(15LL, v11, 1LL, &v21);
}
