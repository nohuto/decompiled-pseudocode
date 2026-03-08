/*
 * XREFs of PopPotsLogDirtyPowerTransition @ 0x140B32DDC
 * Callers:
 *     PopDiagTraceDirtyTransition @ 0x140B32210 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 */

void __fastcall PopPotsLogDirtyPowerTransition(int a1, unsigned int a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-39h] BYREF
  int *v12; // [rsp+70h] [rbp-19h]
  int v13; // [rsp+78h] [rbp-11h]
  int v14; // [rsp+7Ch] [rbp-Dh]
  int *v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+8Ch] [rbp+3h]
  int *v18; // [rsp+90h] [rbp+7h]
  int v19; // [rsp+98h] [rbp+Fh]
  int v20; // [rsp+9Ch] [rbp+13h]
  char v21[16]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  size_t Dst[3]; // [rsp+C0h] [rbp+37h] BYREF

  if ( a1 )
  {
    v5 = a2 != 0 ? 0x20000 : 0;
    swprintf_s((wchar_t *)Dst, 9uLL, L"%08X", a2);
    if ( PotsPowerTransitionsHandleRegistered )
    {
      if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL) )
      {
        v14 = 0;
        v17 = 0;
        v12 = &v7;
        v13 = 4;
        v15 = &v8;
        v6 = v5 | 0x8000;
        v16 = 4;
        v19 = 4;
        v7 = 4;
        if ( !a3 )
          v6 = v5;
        v8 = a1;
        v20 = 0;
        v9 = v6;
        v18 = &v9;
        tlgCreate1Sz_wchar_t((__int64)v21, Dst);
        v24 = 0;
        v22 = &v10;
        v10 = 0x1000000LL;
        v23 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C064E0,
          (unsigned __int8 *)&dword_14003230C,
          0LL,
          0LL,
          7u,
          &v11);
      }
    }
  }
}
