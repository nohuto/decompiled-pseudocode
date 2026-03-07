__int64 __fastcall CompositionInputObject::OpenDwmHandle(CompositionInputObject *this, void **a2)
{
  int v4; // ebx
  __int64 v6; // rdx
  const GUID *v7; // r8
  int v8; // [rsp+30h] [rbp-49h] BYREF
  void *v9; // [rsp+38h] [rbp-41h] BYREF
  const GUID *v10; // [rsp+40h] [rbp-39h] BYREF
  CompositionInputObject *v11; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  CompositionInputObject **v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  const GUID **v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  void **v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]

  v4 = CompositionObject::OpenDwmHandle(this, a2);
  if ( v4 >= 0 && (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
  {
    v9 = *a2;
    v20 = v6;
    v19 = &v8;
    v8 = 1;
    v17 = &v9;
    v15 = &v10;
    v13 = &v11;
    v10 = v7;
    v11 = this;
    v18 = 8LL;
    v16 = 8LL;
    v14 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029E992, v7, 0LL, 6u, &v12);
  }
  return (unsigned int)v4;
}
