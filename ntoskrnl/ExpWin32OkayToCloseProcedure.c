/*
 * XREFs of ExpWin32OkayToCloseProcedure @ 0x14077D9F0
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 */

bool __fastcall ExpWin32OkayToCloseProcedure(__int64 a1, int *a2, __int64 a3, char a4)
{
  int v5; // ebx
  unsigned __int64 v6; // rdx
  POBJECT_TYPE *v7; // rax
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-20h] BYREF
  char v11; // [rsp+38h] [rbp-8h]
  int v12; // [rsp+39h] [rbp-7h]
  __int16 v13; // [rsp+3Dh] [rbp-3h]
  char v14; // [rsp+3Fh] [rbp-1h]
  int v15; // [rsp+68h] [rbp+28h] BYREF

  v15 = *a2;
  v5 = -1073741823;
  v10[0] = a1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v6 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v10[1] = a2;
  v10[2] = a3;
  v11 = a4;
  v7 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  if ( v7 == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v8 = 38LL;
  }
  else if ( v7 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v8 = 34LL;
  }
  else if ( v7 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v8 = 28LL;
  }
  else if ( v7 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v8 = 19LL;
  }
  else if ( v7 == ExDesktopObjectType )
  {
    v8 = 9LL;
  }
  else
  {
    if ( v7 != (POBJECT_TYPE *)ExWindowStationObjectType )
      return v5 >= 0;
    v8 = 12LL;
  }
  v5 = PsInvokeWin32Callout(v8, v10, 1LL, &v15);
  return v5 >= 0;
}
