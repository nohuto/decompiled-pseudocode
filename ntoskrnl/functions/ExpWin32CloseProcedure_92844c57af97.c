POBJECT_TYPE *__fastcall ExpWin32CloseProcedure(__int64 a1, int *a2, int a3, int a4)
{
  unsigned __int64 v4; // r11
  POBJECT_TYPE *result; // rax
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-10h]
  int v9; // [rsp+34h] [rbp-Ch]
  int v10; // [rsp+50h] [rbp+10h] BYREF

  v10 = *a2;
  v4 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v7[0] = a1;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v4];
  if ( result == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v6 = 39LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, v7, 1LL, &v10);
  }
  if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v6 = 35LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, v7, 1LL, &v10);
  }
  if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v6 = 29LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, v7, 1LL, &v10);
  }
  if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v6 = 20LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, v7, 1LL, &v10);
  }
  if ( result == ExDesktopObjectType )
  {
    v6 = 10LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, v7, 1LL, &v10);
  }
  if ( result == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v6 = 13LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, v7, 1LL, &v10);
  }
  return result;
}
