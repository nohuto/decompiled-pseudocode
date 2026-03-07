__int16 __fastcall PopDiagTracePolicyInitiatePowerActionApiCall(int a1, int a2)
{
  unsigned __int16 *v2; // rdx
  __int16 result; // ax
  int v4; // ecx
  __int16 v5; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  int *v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  int *v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+A0h] [rbp+67h] BYREF
  int v15; // [rsp+A8h] [rbp+6Fh] BYREF

  v15 = a2;
  v14 = a1;
  v2 = (unsigned __int16 *)PsGetCurrentThreadProcess()[1].ActiveProcessors.StaticBitmap[2];
  result = *v2 >> 1;
  v5 = result;
  if ( PopDiagHandleRegistered )
  {
    *(_QWORD *)&UserData.Size = 2LL;
    UserData.Ptr = (ULONGLONG)&v5;
    v4 = *v2;
    v7 = *((_QWORD *)v2 + 1);
    v10 = &v14;
    v12 = &v15;
    v8 = v4;
    v9 = 0;
    v11 = 4LL;
    v13 = 4LL;
    return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NTINITIATEPOWERACTION_API_CALL, 0LL, 4u, &UserData);
  }
  return result;
}
